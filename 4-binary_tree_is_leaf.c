#include "binary_trees.h"
/**
* *binary_tree_is_leaf -  function that creates a binary tree.
* @node:  is a pointer to the node to check
* Return: If node is NULL, return 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
