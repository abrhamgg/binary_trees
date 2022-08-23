#include "binary_trees.h"
/**
 * binary_tree_node - function that create a binary tree node
 * @parent: pointer to parent node
 * @value: value for the node to be created
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode != NULL)
	{
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->parent = parent;
		return (newNode);
	}
	return (NULL);
}
