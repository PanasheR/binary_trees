#include "binary_trees.h"

/**
 * binary_tree_sibling - func finds node sibling
 * @node: pointer to node
 * Return: pointer to sibling node,
 * NULL if parent or node is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);


	if (node->parent->left == node)
		return (node->parent->right);

	return (NULL);
}
