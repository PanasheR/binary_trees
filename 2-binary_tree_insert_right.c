#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right-child of other
 * @parent: pointer to node right-child
 * @value: value to store in new node
 * Return: pointer to created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *to_new;

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}

	else
	{
		to_new = binary_tree_node(parent, value);
		to_new->right = parent->right;
		parent->right = to_new;
		to_new->right->parent = to_new;
	}

	return (to_new);

}
