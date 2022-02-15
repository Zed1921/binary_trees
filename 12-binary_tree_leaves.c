#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 *
 * Return: number of leaves
 *         0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
