#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 *
 * @parent: is a pointer to the node to insert the right-child
 * @value: the value to store in the new node
 *
 * Desecription - If parent already has a right child, the new node
 *					must take its place, and the old right-child must
 *					be set as the right-child of the new node.
 *
 * Return: pointer to the created node or NULL on failure or if parent
 *			is NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
		return (0);

	rightnode = binary_tree_node(parent, value);

	if (rightnode == NULL)
		return (0);

	rightnode->right = parent->right;

	if (parent->right)
		parent->right->parent = rightnode;

	parent->right = rightnode;
	return (rightnode);
}
