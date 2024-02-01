#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to node to check
 *
 * Return: 1 if node is a root, 0 if null or internal node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int tag = 0;

	if (node->parent == NULL &&  node->left != NULL && node->right != NULL)
	{
		tag = 1;
	}
	return (tag);

}
