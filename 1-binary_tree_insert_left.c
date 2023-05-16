#include "binary_trees.h"
/**
 * binary_tree_insert_left - func addd nodes at left
 * @parent: parent node
 * @value: value of node
 * Return: return NULL of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
