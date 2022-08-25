#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: if tree is NULL : 0, full return 1, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) || (tree->right && !tree->left)
				|| (binary_tree_is_full(tree->left) == 0
					|| binary_tree_is_full(tree->right) == 0))
		{
			return (0);
		}
	}
	return (1);
}
