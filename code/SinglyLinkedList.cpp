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
	return head == nullptr;
}

void SinglyLinkedList::addToFront(int element)
{
	SinglyLinkedListNode * newNode = new SinglyLinkedListNode;
	newNode->content = element;
	newNode->next = head;

	head = newNode;
}

int SinglyLinkedList::getFirst() const
{
	return head->getContent();
}

SinglyLinkedListNode * SinglyLinkedList::getHead() const
{
	return head;
}

void SinglyLinkedList::removeFromFront()
{
	SinglyLinkedListNode * nodeToRemove = head;
	head = nodeToRemove->next;
	delete nodeToRemove;
}
