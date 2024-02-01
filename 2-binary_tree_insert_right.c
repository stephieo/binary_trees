#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right child
 * @value: value to store in new node
 *
 * Description: inserts a right child to a node. if right child
 * is present it becomes right child of the incoming node
 *
 * Return: pointer to created node or NULL if null parent or on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*create node*/
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
		parent->right  = newnode;

	}
	else
	{
		parent->right = newnode;
	}

	return (newnode);
}

