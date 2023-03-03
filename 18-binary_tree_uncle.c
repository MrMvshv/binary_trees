#include "binary_trees.h"

/**
 * binary_tree_uncle - finds a nodes uncle
 * @node: node
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *gran = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);
	gran = parent->parent;

	if (gran->left == parent)
		return (gran->right);
	return (gran->left);
}
