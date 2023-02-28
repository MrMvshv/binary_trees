#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left tree node
 * @parent: pointer to parent node
 * @value: value to insert
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->right = NULL;
	if (parent->left != NULL)
	{
		val = parent->left->n;
		parent->left = new;
		new->left = binary_tree_insert_left(new, val);
	}
	else
	{
		parent->left = new;
		new->left = NULL;
	}
	return (new);
}
