#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right tree node
 * @parent: pointer to parent node
 * @value: value to insert
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	int val;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right != NULL)
	{
		val = parent->right->n;
		parent->right = new;
		new->right = binary_tree_insert_right(new, val);
	}
	else
	{
		parent->right = new;
		new->right = NULL;
	}
	return (new);
}
