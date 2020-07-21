#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: the new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_lnode = NULL;

	if (!parent)
		return (NULL);

	new_lnode = binary_tree_node(parent, value);

	if (parent->left)
	{
		new_lnode->left = parent->left;
		parent->left->parent = new_lnode;
	}

	parent->left = new_lnode;

	return (new_lnode);
}
