#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t pp = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		pp += 1;
	return (binary_tree_nodes(tree->left) + pp + binary_tree_nodes(tree->right));
}
