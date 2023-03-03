#include "binary_trees.h"

int is_full(binary_tree_t *tree);
/**
 * binary_tree_is_full - measures if a binary tree is full.
 * @tree: pointer to the tree
 *
 * Return: if tree is NULL, your function must return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full((binary_tree_t *)tree));
}
/**
 * is_full - measures fullness
 * @tree: tree
 *
 * Return: 1 if full
 */
int is_full(binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
		return (is_full(tree->left) && is_full(tree->right));
	return (0);
}
