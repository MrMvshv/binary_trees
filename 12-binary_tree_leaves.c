#include "binary_trees.h"

size_t count(binary_tree_t *tree);
/**
 * binary_tree_leaves - measures the leaves of a binary tree.
 *@tree: pointer to the root node of the tree.
 *
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	return (count((binary_tree_t *)tree));
}
/**
 * count - counts tree leaves recursively
 * @tree: tree to count
 *
 * Return: num of leaves
 */
size_t count(binary_tree_t *tree)
{
	size_t countD = 0;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		countD += count(tree->left);
	if (tree->right)
		countD += count(tree->right);
	return (countD);

}
