#include "SinglyLinkedList.hpp"

#include <ostream>

SinglyLinkedList::SinglyLinkedList():
	head(nullptr)
{

}

SinglyLinkedList::~SinglyLinkedList()
{
	clear();
}

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

void SinglyLinkedList::clear()
{
	while (!isEmpty())
	{
		removeFromFront();
	}
}

std::ostream & operator<<(std::ostream & out, const SinglyLinkedList & list)
{
	out << "[";

	if (!list.isEmpty())
	{
		SinglyLinkedListNode * head = list.getHead();
		out << head->getContent();

		for (SinglyLinkedListNode * node = head->getNext(); node != nullptr; node = node->getNext())
		{
			out << ", " << node->getContent();
		}
	}

	out << "]";
	return out;
}
