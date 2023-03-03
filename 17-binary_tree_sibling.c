#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a nodes sibling
 * @node: node
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
