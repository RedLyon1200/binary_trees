#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * helper - help function
 * @tree: - tree
 * @low: low node
 * @hig: hig node
 *
 * Return: 1 or 0
 */
int helper(const binary_tree_t *tree, int low, int hig)
{
	if (!tree)
		return (0);

	if (low > tree->n || hig < tree->n)
		return (0);

	return (helper(tree->left, low, tree->n - 1) &&
			helper(tree->right, tree->n + 1, hig));

	return (1);
}

/**
 * binary_tree_is_bst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree:  a pointer to the root node of the tree to check
 *
 * Return: value reurned by helper function
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int num = 1;

	if (!tree)
		return (0);

	return (helper(tree, num, num));
}
