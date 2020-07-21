#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: A binary tree.
 * Return: returns the depth of the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (!tree || !tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
