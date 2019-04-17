#include "SinglyLinkedList.hpp"

SinglyLinkedListNode * SinglyLinkedListNode::getNext() const
{
	return next;
}

int SinglyLinkedListNode::getContent() const
{
	return content;
}

bool SinglyLinkedList::isEmpty() const
{
	return empty;
}

void SinglyLinkedList::addToFront(int element)
{
	empty = false;
	front = element;

	SinglyLinkedListNode * newNode = new SinglyLinkedListNode;
	newNode->content = element;
	newNode->next = head;

	head = newNode;
}

int SinglyLinkedList::getFirst() const
{
	return front;
}

SinglyLinkedListNode * SinglyLinkedList::getHead() const
{
	return head;
}
