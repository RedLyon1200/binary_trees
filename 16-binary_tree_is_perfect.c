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

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height_left = height(tree->left);
	height_right = height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: A binary tree.
 * Return: returns 1 if the tree is perfect otherwise returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && !tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	if ((height(tree->left) == height(tree->right)) &&
	(binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)))
		return (1);
	return (0);
}
