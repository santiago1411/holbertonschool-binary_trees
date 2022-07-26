#include "binary_trees.h"
/**
 * binary_tree_depth - depht of the binary tree.
 * @tree: is a pointer to the root node
 * Return: If node is NULL, return
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
