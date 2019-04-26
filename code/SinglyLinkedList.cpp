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

bool SinglyLinkedList::contains(int element) const
{
	return true;
}

SinglyLinkedListNode * SinglyLinkedList::find(int element)
{
	// What is going on here?
	// Explanation: https://stackoverflow.com/questions/856542/

	const SinglyLinkedList * constThis = this;
	return const_cast<SinglyLinkedListNode *>(constThis->find(element));
}

const SinglyLinkedListNode * SinglyLinkedList::find(int element) const
{
	for (SinglyLinkedListNode * node = head; node != nullptr; node = node->next)
	{
		if (node->content == element)
		{
			return node;
		}
	}

	return nullptr;
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
