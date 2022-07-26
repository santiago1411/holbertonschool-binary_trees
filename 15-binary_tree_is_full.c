#include "binary_trees.h"

/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: a pointer to the root node of the tree to count the number of nodes
* Return: If tree is NULL, your function must return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/**size_t l_full = 0, r_full = 0;**/

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	/**
	*l_full = 1 + binary_tree_is_full(tree->left);
	*r_full = 1 + binary_tree_is_full(tree->right);
	*if (l_full == r_full)
	*	return (1);
	*return (0);
	**/
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
