#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node in a binary tree
* @node: pointer to the node to find the uncle for
*
* Return: pointer to the uncle node, or NULL if no uncle exists
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
