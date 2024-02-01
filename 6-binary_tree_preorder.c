#include "binary_trees.h"
/**
 * binary_tree_preorder - walks a binary tree with preorder traversal
 * @tree: pointer to root of tree
 * @func: pointer to function to call at each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
