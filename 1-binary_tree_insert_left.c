#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a node as the left child
 * @parent: is pointer to the node to insert the the left child in
 * @value: is the value to store in the new window
 * Return: pointer to the created node or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = parent->left;

	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	if (parent == NULL)
	{
		newNode->parent = parent;
		return (newNode);
	}
	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->parent = NULL;
		return (newNode);
	}
	newNode->parent = parent;
	parent->left = newNode;
	temp->parent = newNode;
	newNode->left = temp;

	return (newNode);
}