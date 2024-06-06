#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 *
 * Return: pointer to the sibling or NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	grand_parent = node->parent->parent;
	if (node->parent == grand_parent->right)
		return (grand_parent->left);
	else
		return (grand_parent->left);
}
