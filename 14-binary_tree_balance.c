#include "binary_trees.h"

int height(binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *@tree: pointer to the root node of the tree.
 *
 * Return: if tree is NULL, your function must return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if tree == (NULL)
		return (0);

	lHeight = height(root->left);
	rHeight = height(root->right);
	return (lHeight - rHeight);
}
/**
 * height - height of tree
 * @tree: tree
 *
 * Return: height
 */
int height(binary_tree_t *tree)
{
	int lHe, rHe;

	if (tree == NULL)
		return (-1);

	lHe = height(root->left);
	rHe = height(root->right);
	return (1 + (lHe > rHe ? lHe : rHe));
}
