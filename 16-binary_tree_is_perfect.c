#include "binary_trees.h"

int is_perf(binary_tree_t *tree);
size_t height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - measures if a binary tree is perfect
 * @tree: pointer to the tree
 *
 * Return: if tree is NULL, your function must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perf((binary_tree_t *)tree));
}
/**
 * is_perf - measures perfectness
 * @tree: tree
 *
 * Return: 1 if full
 */
int is_perf(binary_tree_t *tree)
{
	int lH = 0, rH = 0;

	if (tree == NULL)
		return (1);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
	{
		lH = height(tree->left);
		rH = height(tree->right);
		if (rH == lH)
			return (is_perf(tree->left) && is_perf(tree->right));
	}
	return (0);
}

/**
 * height - measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + height(tree->right);
		if (tree->left)
			left = 1 + height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
