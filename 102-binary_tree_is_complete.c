#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * t_size - return the size of the binary tree.
 * @tree: the binary tree.
 * Return: the size of the binary tree.
 */
int t_size(const binary_tree_t *tree)
{
	int count;

	if (!tree)
		return (0);

	count = t_size(tree->left);
	count += t_size(tree->right);

	return (count + 1);
}

/**
 * checkComplete - check if the binary tree is complete.
 * @tree: the binary tree.
 * @index: index.
 * @numberNodes: number of nodes.
 * Return: returns 1 if is complete, 0 otherwise.
 */
int checkComplete(const binary_tree_t *tree, int index, int numberNodes)
{
	if (!tree)
		return (1);

	if (index >= numberNodes)
		return (0);

	return (checkComplete(tree->left, 2 * index + 1, numberNodes) &&
	checkComplete(tree->right, 2 * index + 2, numberNodes));
}

/**
 * binary_tree_is_complete - check if the binary tree is complete.
 * @tree: binary tree.
 * Return: returns 1 if is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int index = 0;
	int size = t_size(tree);

	if (!tree)
		return (0);

	return (checkComplete(tree, index, size));
}
