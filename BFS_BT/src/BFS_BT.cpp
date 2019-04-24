//============================================================================
// Name        : BFS_BT.cpp
// Author      : Keith Knight
// Version     :
// Copyright   : Your copyright notice
// Description : Breath First Search on existing Binary Tree, Ansi-style
//============================================================================

#include "NodeUtil.h"

int main() {

	NodeUtil *nodeUtil = new NodeUtil();

	// Create Binary Tree
	node *root = nodeUtil->newNode(9);
	root->left = nodeUtil->newNode(2);
	root->right = nodeUtil->newNode(5);
	root->left->left = nodeUtil->newNode(7);
	root->left->right = nodeUtil->newNode(8);
	root->right->left = nodeUtil->newNode(4);
	root->right->right = nodeUtil->newNode(3);

	// Perform Breadth First Search on created Binary Tree
	nodeUtil->bfs(root);

	return 0;
}
