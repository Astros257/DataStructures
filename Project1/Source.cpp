#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
};
///stuff
bool search(node* s, int val)
{
	while (s != NULL)
	{
		if (s->data == val)
			return true;
		s = s->next;
	}
	return false;
}

void printnode(node* s)
{
	while (s != NULL)
	{
		cout << s->data << "->";
		s = s->next;
	}
	cout << "Null \n";
}

int main()
{
	node* head = new node();
	node* second = new node();
	node* third = new node();


	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printnode(head);

	return 0;
}