#include <iostream>

#if(0)
class Node
{
private:
	char name[100];
	Node *next;

public:
	Node();
	int setNext(Node *p);
	Node* getNext();
};
#else //using struct Node
typedef struct Node{
	char name[100];
	Node *next;
}Node;

#endif
class SimpleLinkedList
{
private:
	Node *head;

public:
	SimpleLinkedList();
	~SimpleLinkedList();
	int insert_item(char *_name);
	int remove_item(char *_name);
	int search_list();
	int search_list(char *_name);
};