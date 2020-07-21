#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: the new right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_rnode = NULL;

	if (!parent)
		return (NULL);

	new_rnode = binary_tree_node(parent, value);

	if (parent->right)
	{
		new_rnode->right = parent->right;
		parent->right->parent = new_rnode;
	}

	parent->right = new_rnode;

	return (new_rnode);
}
