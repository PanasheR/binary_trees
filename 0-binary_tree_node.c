#include "binary_trees.h"
/**
 * binary_tree_node - binary tree node
 * @parent: parent node address
 * @value: new node value input
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *to_node;

	to_node = malloc(sizeof(binary_tree_t));
	if (to_node == NULL)
		return (NULL);
	to_node->parent = parent;
	to_node->n = value;
	to_node->left = NULL;
	to_node->right = NULL;
	return (to_node);
}
