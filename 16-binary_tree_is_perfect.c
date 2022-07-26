#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_full = 0, r_full = 0, l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (0);

	l_full = binary_tree_is_full(tree->left);
	r_full = binary_tree_is_full(tree->right);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_full == r_full && l_height == r_height)
		return (1);
	return (0);
}

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

#include "binary_trees.h"
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
