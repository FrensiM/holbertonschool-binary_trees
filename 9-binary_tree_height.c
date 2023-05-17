#include "binary_trees.h"
/**
 * max_height - find the maximum value between two variables
 * @a: first num
 * @b: second num
 * Return: the max value
 */
size_t max_height(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}
/**
 * binary_tree_height - fun that find height
 * @tree: node
 * Return: return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max_height(left_height, right_height) + 1);
}
