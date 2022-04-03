#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with 1+ child in binary tree
 * @tree: pointer to node root of tree
 * Return: size_t number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t pops;

	if (tree == NULL)
		return (0);

	pops = 0;
	if (tree->left || tree->right)
		pops += 1;

	pops += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (pops);
}
