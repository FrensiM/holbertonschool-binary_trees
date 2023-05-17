/**
 *binary_tree_is_root- Checks if a node is root
 *
 *@node: The node to check
 *
 *Return: Returns a 1 if its a root, otherwise 0
 */

#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
