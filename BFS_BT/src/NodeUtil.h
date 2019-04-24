/*
 * NodeUtil.h
 *
 *  Created on: Dec 5, 2018
 *      Author: kknight
 */

#ifndef NODEUTIL_H_
#define NODEUTIL_H_

#include "node.h"

class NodeUtil{
private:

public:

public:
	NodeUtil();
	virtual ~NodeUtil();

	node* newNode(int val);
	void bfs(node *node);
};

#endif /* NODEUTIL_H_ */



