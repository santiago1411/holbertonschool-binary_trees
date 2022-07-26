#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: if tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r_height = 1 + binary_tree_height(tree->right);
	return (l_height - r_height);
}

/**
 * binary_tree_height - height of the binary tree.
 * @tree: is a pointer to the root node
 * Return: If node is NULL, return
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	if (height_l >= height_r)
		return (height_l + 1);
	return (height_r + 1);
}
