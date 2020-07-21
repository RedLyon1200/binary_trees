#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: first tree node.
 * @second: second tree node.
 * Return: returns the lowest common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (!first->parent || !second->parent)
		return (NULL);
	while (first)
	{
		second = second;
		while (second)
		{
			if (second->parent == first || second->parent == first->parent)
				return (second->parent);
			else if (first->parent == second || first->parent == second->parent)
				return (first->parent);
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
