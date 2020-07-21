#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A binary tree.
 * Return: return the height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
