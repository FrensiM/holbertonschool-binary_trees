/**
 *binary_tree_preorder- Lists elements in preorder traversal
 *
 * @tree: The tree to traverse
 * @func: The function we use to print
 *
 *Return: Returns nothing
 */

#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
