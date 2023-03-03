#include "binary_trees.h"
binary_tree_t *rotate_left(binary_tree_t *tree);
/**
 * binary_tree_rotate_left - rotate left
 * @tree: tree
 *
 * Return:  pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	return rotate_left(tree);
}
/**
 * rotate_left - rotate left
 * @tree: tree
 *
 * Return: new tree
 */
binary_tree_t *rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return tree;
	/* Set new root to be the right child of tree */
	binary_tree_t *new_root = tree->right;

	/* Set left child of new root to be the old root's right child */
	tree->right = new_root->left;

	/* If the left child of new root is not NULL, set its parent to be the old root */
	if (new_root->left != NULL)
		new_root->left->parent = tree;

	/* Set parent of new root to be the parent of the old root */
	new_root->parent = tree->parent;

	/* If the old root was the root of the tree, set the new root to be the root of the tree */
	if (tree->parent == NULL)
		tree = new_root;
	/* If the old root was a left child, set the left child of its parent to be the new root */
	else if (tree == tree->parent->left)
		tree->parent->left = new_root;
	/* If the old root was a right child, set the right child of its parent to be the new root */
	else
		tree->parent->right = new_root;

	/* Set the left child of the new root to be the old root */
	new_root->left = tree;

	/* Set the parent of the old root to be the new root */
	tree->parent = new_root;

	/* Return the new root */
	return (new_root);
}
