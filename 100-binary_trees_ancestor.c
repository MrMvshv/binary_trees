#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds common ancestor
 * @first: first node
 * @second: second node
 *
 * Return: pointer to the lowest ancestor
 */
binary_tree_t *binary_trees_ancestor(
const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;
	const binary_tree_t *p, *q, *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	p = first;
	q = second;

	while (p != NULL)
	{
		temp = q;
		while (temp != NULL)
		{
			if (p == temp)
			{
				ancestor = (binary_tree_t *) p;
				return (ancestor);
			}
			temp = temp->parent;
		}
		p = p->parent;
	}

	return (NULL);
}
