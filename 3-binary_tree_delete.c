#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes the entire binary tree
 *
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: 0
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
