#include "binary_trees.h"
/**
 * binary_tree_inorder - walks a binary tree with inorder traversal
 * @tree: pointer to root of tree
 * @func: pointer to function to call at each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
