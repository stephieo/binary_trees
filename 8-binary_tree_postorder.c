#include "binary_trees.h"
/**
 * binary_tree_postorder - walks a binary tree with preorder traversal
 * @tree: pointer to root of tree
 * @func: pointer to function to call at each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
