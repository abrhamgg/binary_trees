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
	
	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
