#include "binary_trees.h"

/**
 * binary_tree_size - function that returns the size of binary tree
 * @tree: pointer to the root node;
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	if (tree == NULL)
		return (0);
	else
	{
		size += 1;
		size = binary_tre
