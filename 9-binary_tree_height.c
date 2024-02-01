#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: pointer to root node
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t leftheight, rightheight;

	leftheight = rightheight = 0;
	if (tree == NULL)
		return (height);
	
	leftheight += binary_tree_height(tree->left);
	rightheight += binary_tree_height(tree->right);

	if (tree->left || tree->right)
	{
		 if (leftheight > rightheight)
			height = 1 + leftheight;
		else if (rightheight >= leftheight)
			height = 1 +  rightheight;
	}
	return (height);
}
