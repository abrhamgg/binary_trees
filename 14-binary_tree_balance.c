#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left = (tree->left) ? 1 + binary_tree_balance(tree->left) : 0;
	int right = (tree->right) ? 1 + binary_tree_balance(tree->right) : 0;

	return (left - right);
}
