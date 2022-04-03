#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: root input address
 * Return: binary tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
		return (0);

	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);

	if (leftheight < rightheight)
		return (rightheight + 1);
	return (leftheight + 1);
}

/**
 * binary_tree_balance - measure balance fac of binary tree
 * @tree: tree of nodes
 * Return: balance binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}
