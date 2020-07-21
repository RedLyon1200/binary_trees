#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: A binary tree.
 * Return: returns the size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int count;

	if (!tree)
		return (0);

	count = binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);

	return (count + 1);
}
