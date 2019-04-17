#include "SinglyLinkedList.hpp"

bool SinglyLinkedList::isEmpty() const
{
	return empty;
}

void SinglyLinkedList::addToFront(int element)
{
	empty = false;
	front = element;
}

int SinglyLinkedList::getFirst() const
{
	return front;
}
