/*
 * NodeUtil.cpp
 *
 *  Created on: Dec 5, 2018
 *      Author: kknight
 */

#include <iostream>
#include "NodeUtil.h"
#include <queue>

using namespace std;

NodeUtil::NodeUtil() {
}

NodeUtil::~NodeUtil() {
}


node* NodeUtil::newNode(int val) {
	node *newnode = new node;
	newnode->data = val;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void NodeUtil::bfs(node *currentroot) {
	queue<node *> q;
	q.push(currentroot);

	while(q.size()) {
		node *tmp = q.front();

		cout << tmp->data << endl;

		if (tmp->left != NULL)
			q.push(tmp->left);
		if (tmp->right != NULL)
			q.push(tmp->right);

		q.pop();
	}
}



