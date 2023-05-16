#include "binary_trees.h"
/**
 * binary_tree_delete - fun that delete entire tree
 * @tree: pointer to root node
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
