#include "binary_trees.h"

/**
* binary_tree_uncle - function that finds the sibling of a node
* @node: a pointer to the node to find the sibling
* Return: a pointer to the sibling node
* If node is NULL or the parent is NULL, return NULL
* If node has no sibling, return NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node ||
		!node->parent ||
		!node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
