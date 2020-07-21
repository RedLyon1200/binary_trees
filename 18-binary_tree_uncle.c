#include "binary_trees.h"
#include <stdlib.h>

/**
 * sibling - finds the sibling of a node.
 * @node: A node of the binary tree.
 * Return: returns the sibling node or NULL if doesn't exists.
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (0);
	parent = node->parent;

	if (parent->left && node->n == parent->left->n)
		return (parent->right);
	else
		return (parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: A node of the binary tree.
 * Return: returns the uncle node or NULL if doesn't exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent)
		return (sibling(node->parent));
	else
		return (NULL);
}
