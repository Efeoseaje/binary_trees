#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 *
 * @parent: is a pointer to the node to insert the left-child
 * @value: the value to store in the new node
 *
 * Desecription - If parent already has a left child, the new node
 *					must take its place, and the old left-child must
 *					be set as the left-child of the new node.
 *
 * Return: pointer to the created node or NULL on failure or if parent
 *			is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
		return (0);

	leftnode = binary_tree_node(parent, value);

	if (leftnode == NULL)
		return (0);

	leftnode->left = parent->left;

	if (parent->left)
		parent->left->parent = leftnode;

	parent->left = leftnode;
	return (leftnode);
}
