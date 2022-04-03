#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: pointer to node depth to measure
 * Return: size_t depth of root node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;

	while (tree->parent)
	{
		tree = tree->parent;
		depth += 1;
	}
	return (depth);
}
