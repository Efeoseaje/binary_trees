#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: a pointer to the parent node of the created node
 * @value: value to put in the new node
 * Return: a pointer to the new node or NULL on failure.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (0);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
