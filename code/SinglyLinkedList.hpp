#pragma once

class SinglyLinkedList
{
public:

	bool isEmpty() const;
	void addToFront(int element);
	int getFirst() const;

private:

	bool empty = true;
	int front;
};
