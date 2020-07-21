#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: A binary tree.
 * Return: return the number of nodes with at least 1 child in the binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count++;

	count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (count);
}
