#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child of another node.
 * @parent: Pointer to the node to insert the left child in.
 * @value: value to store in the new node.
 *
 * Return: Pointer to the created node or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child_node;

	if (parent == NULL)
		return (NULL);

	left_child_node = binary_tree_node(parent, value);
	if (left_child_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		left_child_node->left = parent->left;
		parent->left->parent = left_child_node;
	}
	parent->left = left_child_node;
	return (parent->left);
}
