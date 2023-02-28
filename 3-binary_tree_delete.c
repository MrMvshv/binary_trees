#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire BT
 * @tree: root node's pointer
 * if tree is NUll do Nun
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}

