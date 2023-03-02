#include "binary_trees.h"
/**
 * binary_tree_depth - depth of binary tree
 * @tree: tree
 *
 * Return: depth of tree or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *new = NULL;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	new = (binary_tree_t *) tree;
	while (new != NULL)
	{
		count++;
		new = new->parent;
	}

	return (count - 1);
}
