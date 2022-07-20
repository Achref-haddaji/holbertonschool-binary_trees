#include "binary_trees.h"
/**
 * binary_tree_height - Entry point
 *
 * @tree: pointer to the root node
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t heightLeft = 0, heightRight = 0;

if (tree == NULL)
return (0);
heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
heightRight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

if (heightLeft > heightRight)
return (heightLeft);
else
return (heightRight);
}
