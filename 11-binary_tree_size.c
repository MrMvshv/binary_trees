#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left, right;

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);
	return (1 + left + right);
}
