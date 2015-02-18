#include <iostream>
using namespace std;

class LinkedList
{
public:
	LinkedList()
		:head(nullptr)
	{}
	~LinkedList()
	{
		Node* temp;
		while (head != nullptr)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
	}
	void addToList(int value)	//add to end of LinkedList
	{
		Node* nodeToAdd = new Node;
		nodeToAdd->num = value;
		nodeToAdd->next = nullptr;
		if (head == nullptr)
		{
			head = nodeToAdd;
		}
		else
		{
			Node* ptr = head;
			while (ptr->next != nullptr)
				ptr = ptr->next;
			ptr->next = nodeToAdd;
		}
	}
	int JosephusCircle(int N)
	{
		int n = 0;
		Node* p = head;

		while (head != nullptr && head->next != nullptr)
		{
			n++;
			if (n == N)
			{
				if (p == head)
				{
					p = p->next;
					delete head;
					head = p;
				}
				else
				{
					Node* p2 = p;
					p = p->next;
					Node* prev = head;
					while (prev->next != p2)
						prev = prev->next;
					prev->next = p;
					delete p2;
				}
				if (p->next == nullptr)
					p = head;
				else
					p = p->next;
				n = 0;
			}
		}
		if (head != nullptr)
			return head->num;
		return -1;
	}
private:
	struct Node
	{
		int num;
		Node* next;
	};
	Node* head;
};

int main()
{
	int i, N;

	for (N = 1; N < 7; N++)
	{
		LinkedList a;
		for (i = 1; i <= N; i++)
		{
			a.addToList(i);
		}
		cout << "Number " << a.JosephusCircle(2);
		cout << " is the last guy standing..." << endl;
	}
}

