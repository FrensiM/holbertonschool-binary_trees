/**
 *binary_tree_postorder- Lists elements in postorder traversal
 *
 * @tree: The tree to traverse
 * @func: The function we use to print
 *
 *Return: Returns nothing
 */


#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}
