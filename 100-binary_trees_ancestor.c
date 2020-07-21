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
	const binary_tree_t *aux = second;

	if (!first || !second)
		return (NULL);

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	while (first)
	{
		second = aux;
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
