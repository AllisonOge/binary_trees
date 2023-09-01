#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse the tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to callback function for each node
 * Return: nothing
 * Description: If tree or func is NULL, do nothing else traverse
 * from the left, then to the right, then to the root
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
		return;

	binary_tree_postorder(tree->left, (*func));
	binary_tree_postorder(tree->right, (*func));
	(*func)(tree->n);
}
