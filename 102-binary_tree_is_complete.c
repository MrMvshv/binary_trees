#include <stdbool.h>
#include "binary_trees.h"

int is_completed(binary_tree_t *tree);
/**
 * count_nodes - count nodes
 * @tree: tree
 *
 * Return: nodes
 */
int count_nodes(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
/**
 * is_complete - check if the tree is complete
 * @tree: tree
 * @index: index
 * @node_count: nodes
 *
 * Return: true or false
 */
bool is_complete(binary_tree_t *tree, int index, int node_count)
{
	if (tree == NULL)
		return (true);

	if (index >= node_count)
		return (false);

    /* Recursively check if left and right subtrees are complete */
	return (is_complete(tree->left,
2 * index + 1, node_count) && is_complete(tree->right,
2 * index + 2, node_count));
}
/**
 * binary_tree_is_complete - measures completeness
 * @tree: pointer to the tree
 *
 * Return: if tree is NULL, your function must return 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_completed((binary_tree_t *)tree));
}
/**
 * is_completed - measures completeness
 * @tree: tree
 *
 * Return: 1 if full
 */
int is_completed(binary_tree_t *tree)
{
	int node_count, index;

	node_count = count_nodes((binary_tree_t *)tree);
	index = 0;
	if (is_complete((binary_tree_t *)tree, index, node_count))
		return (1);
	return (0);

}
