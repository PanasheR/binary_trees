#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child of another
 * @parent: pointer to node that inserts left child
 * @value: value to store new node
 * Return: pointer to created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *to_new;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
		parent->left = binary_tree_node(parent, value);
	else
	{
		to_new = binary_tree_node(parent, value);
		to_new->left = parent->left;
		to_new->left->parent = to_new;
		parent->left = to_new;
	}
	return (to_new);
}
