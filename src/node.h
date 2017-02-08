using namespace std;

#include <vector>
#include <string>

class Node
{
public:
	Node();
	~Node();

	bool operator<(const node& rhs) { return name < rhs.name; }
	bool operator>(const node& rhs) { return name > rhs.name; }

	void addConnection(Node n);
	bool isConnected(Node n);

	String name;
	Vector<int> weights;
	Vector<node*> connects;
private:
	bool isVisited; // maybe unnecessary, but toggled true if already visited.
};


// n is the node to add, w is the weight between the two nodes
void Node::addConnection(Node *n, int w) {
	// First, connect this node to n.
	connects.pushBack(n);
	weights.pushBack(w);
	// Then, connect the n node to this node.
	n->connects.pushBack(this);
	n->weights.pushBack(w);
}

bool Node::isConnected(Node *n) {
	for (int i = 0; i < connects.length(); i++) {
		if (n == connects[i])
			return true;
	}
	return false;
}

bool Node::Node() {
	connects.pushBack(n);
}

Node::Node()
{
}

Node::~Node()
{
}