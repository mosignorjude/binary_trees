#include "binary_trees.h"

/**
 * binary_tree_leaves -  measures the size of a binary tree.
 * @tree:  pointer to the root node of the tree to count the number of leaves.
 *
 * Return: number of leaves of the tree or 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1); /* leaf node found */
	return ((binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right)));
}
