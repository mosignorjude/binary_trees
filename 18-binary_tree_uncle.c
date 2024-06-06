#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 *
 * Return: pointer to the sibling or NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent->parent == NULL || node->parent == NULL ||
			node == NULL)
		return (NULL);

	if (node == node->parent->right && node->parent->parent->right)
		return (node->parent->parent->right);
	else if (node == node->parent->left && node->parent->parent->left)
		return (node->parent->parent->left);
	else
		return (NULL);
}
