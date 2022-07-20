#include "binary_trees.h"

/**
 * binary_tree_balance - tree balance
 * binary_tree_height - tree height
 *@tree: root of binary tree
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - tree height
 *@tree: root of binary tree
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t heightLeft = 0, heightRight = 0;

if (tree == NULL)
return (0);
heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 1;
heightRight = tree->right ? 1 + binary_tree_height(tree->right) : 1;

if (heightLeft > heightRight)
return (heightLeft);
else
return (heightRight);
}
