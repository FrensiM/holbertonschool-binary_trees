#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height >= right_height)
			return (left_height + 1);
		return (right_height + 1);
	}
}
