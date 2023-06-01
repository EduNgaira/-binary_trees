#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node leaf.
 *
 * @node: Pointer to the node.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == 0 || node->left != 0 || node->right != 0)
		return (0);

	return (1);
}
