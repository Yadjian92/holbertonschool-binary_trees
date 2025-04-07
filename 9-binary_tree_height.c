#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* max - function that computes the max between two integers
* @a: first integer
* @b: second integer
*
* Return: a or b
*/

int max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
* height - function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: the height
*/

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (-1);

	return (max(height(tree->left), height(tree->right)) + 1);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height of the tree, or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree));
}
