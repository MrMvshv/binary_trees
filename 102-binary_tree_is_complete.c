#include "binary_trees.h"

int is_complete(binary_tree_t *tree);
/**
 * binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree)
        {
                int left = 0, right = 0;

                if (tree->right)
                        right = 1 + binary_tree_height(tree->right);
                if (tree->left)
                        left = 1 + binary_tree_height(tree->left);
                if (left > right)
                        return (left);
                else
                        return (right);
        }
        else
                return (0);
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

	return (is_complete((binary_tree_t *)tree));
}
/**
 * is_complete - measures completeness
 * @tree: tree
 *
 * Return: 1 if full
 */
int is_complete(binary_tree_t *tree)
{
	int height, i;
	binary_tree_t *node;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
	{
		node = tree;
		while (node != NULL)
		{
			if (i == height)
			{
				if (node->left != NULL || node->right != NULL)
					return (0);
			} else 
			{
				if (node->left == NULL || node->right == NULL)
					return (0);
				node = node->left;
			}
		}
	}
	return (1);
}
