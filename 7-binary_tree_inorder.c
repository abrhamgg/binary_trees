#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through binary tree using inorder
 * @tree: is a pointer to the root node
 * @func: pointer to function
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}