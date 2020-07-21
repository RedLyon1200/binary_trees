#include "binary_trees.h"
#include <stdlib.h>

/**
 * height - measures the height of a binary tree.
 * @tree: A binary tree.
 * Return: returns the height of the binary tree.
 */
size_t height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = height(tree->left);
	height_right = height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: A binary tree.
 * Return: returns the measures the balance factor of a binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return (left - right);
}
