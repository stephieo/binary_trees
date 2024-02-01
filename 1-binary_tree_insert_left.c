#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child
 * @value: value to store in new node
 *
 * Description: inserts a left child to a node. if left child
 * is present it becomes left child of the incoming node
 *
 * Return: pointer to created node or NULL if null parent or on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*create node*/
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left  = newnode;

	}
	else
	{
		parent->left = newnode;
	}

	return (newnode);
}

