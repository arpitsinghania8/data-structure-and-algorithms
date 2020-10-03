#include <iostream>
#include <queue>

using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

node *newNode(int data){
	node *temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

void levelOrder(node *root){
	if (root == NULL)
	{
		return;
	}

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node *temp = q.front();
		std::cout << temp->data << " ";
		q.pop();

		if (temp->left != NULL)
		{
			q.push(temp->left);
		}
		if (temp->right != NULL)
		{
			q.push(temp->right);
		}
	}
}


int main()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
  levelOrader(root);
  
	return 0;
}
