#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: pointer to the sibling or NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node->parent == NULL || node == NULL)
		return (NULL);

	if (node == node->parent->right && node->parent->left)
		return (node->parent->left);
	else if (node == node->parent->left && node->parent->right)
		return (node->parent->right);

	sibling = binary_tree_sibling(node->parent->left);
	if (sibling != NULL)
		return (sibling);

	return (binary_tree_sibling(node->parent->right));
}
