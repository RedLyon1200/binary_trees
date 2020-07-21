#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: A binary tree.
 * Return: returns the size of the binary tree.
 */
int count_nodes(const binary_tree_t *tree)
{
	int count;

	if (!tree)
		return (0);

	count = count_nodes(tree->left);
	count += count_nodes(tree->right);

	return (count + 1);
}

/**
 * binary_tree_levelorder - function that goes through a binary
 * tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 *
 * Return: none
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int num_of_nodes = count_nodes(tree), current, next_pos = 0;
	const binary_tree_t **t_array;

	if (!tree || !func)
		return;

	t_array = malloc(sizeof(binary_tree_t *) * num_of_nodes);
	if (!t_array)
		return;

	t_array[0] = tree;

	for (current = 0; current < num_of_nodes; current++)
	{
		if (t_array[current]->left)
		{
			next_pos++;
			t_array[next_pos] = t_array[current]->left;
		}
		if (t_array[current]->right)
		{
			next_pos++;
			t_array[next_pos] = t_array[current]->right;
		}
		func(t_array[current]->n);
	}

	free(t_array);
}
