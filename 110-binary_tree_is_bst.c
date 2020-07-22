#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

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

int binary_tree_is_bst(const binary_tree_t *tree)
{
    int num = 1;
    if (!tree)
        return (0);

    return (helper(tree, num, num));
}
