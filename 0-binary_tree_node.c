#include "binary_trees.h"
/**
 * binary_tree_node - binary tree node
 * @parent: parent node address
 * @value: new node value input
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = calloc(1, sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	return (new);
}
