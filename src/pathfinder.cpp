/*
 * Copyright (c) 2016-present, Society for Artificial intelligence - BYUI.
 * All rights reserved.
 *
 * This source code is licensed under license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "node.h"

using namespace std;

//prototypes
vector<Node> pathfinding(vector<Node> map, Node start, Node end);
Node searchLowestFCost(vector<Node> open);
void test();


int main() {
	//run test code here


	return 0;
}






/*
vector<Node> pathfinding(vector<Node> map)
* This function takes a Node collection and performs the A* algorthim
* to return the path to the end node
*
*/
vector<Node> pathfinding(vector<Node> map, Node start, Node end)
{
	//pathfinding code here

	//bool for while loop
	bool pathFound = false;
	//nodes we have yet to visit
	vector<Node> openNodes = vector<Node>();
	//nodes that have been visited
	vector<Node> closedNodes = vector<Node>();

	openNodes.push_back(start);

	while (!pathFound && openNodes.size() > 0)
	{
		//search for node with lowest f cost
		Node current = searchLowestFCost(openNodes);
	}
	
	return map;
}


void test() 
{
	//for testing pathfinding algorithm

}






Node searchLowestFCost(vector<Node> open) {


}