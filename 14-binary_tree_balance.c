#include <stdlib.h>
#include <stdio.h>
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
* height - Calculates the height of a binary tree.
* @tree: pointer to the root node of the tree to measure the height
*
* Return: the height of the tree, or 0 if the tree is NULL
*/
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (-1);

	return (max(height(tree->left), height(tree->right)) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left) + 1;
	right_height = height(tree->right) + 1;

	return (left_height - right_height);

}
