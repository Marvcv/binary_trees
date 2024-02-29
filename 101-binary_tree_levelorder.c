#include "binary_trees.h"

/**
 * binary_tree_height_aux -  a tree
 * @tree: Pointer to
 * Return: Trees
 */
size_t	binary_tree_height_aux(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (!tree)
		return (0);
	if (tree->left)
		hleft = 1 + binary_tree_height_aux(tree->left);
	if (tree->right)
		hright = 1 + binary_tree_height_aux(tree->right);

	if (hleft > hright)
		return (hleft);
	return (hright);
}

