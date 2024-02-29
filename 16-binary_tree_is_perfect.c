#include "binary_trees.h"

/**
 * compare_depth - compare size
 *
 * @tree: pointer to the root
 * Return: size
 */
int compare_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

