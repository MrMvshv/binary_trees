#include "binary_trees.h"

/**
 * binary_tree_height - using pre-order traversal
 * @tree: tree
 *
 */
 size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *new = NULL;

	if (tree == NULL)
		return (0);
	
	size_t lHeight = 0;
	size_t rHeight = 0;

	new = (binary_tree_t *) tree;
	while (new != NULL)
	{
		new = new->left;
		lHeight++;
	}
	new = (binary_tree_t *) tree;
	while (new != NULL)
	{
		new = new->right;
		rHeight++;
	}
	if (lHeight > rHeight)
		return (lHeight - 1);
	return (rHeight - 1);
}
