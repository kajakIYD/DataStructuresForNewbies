#pragma once

#include <iosfwd>

class SinglyLinkedListNode
{
public:

	SinglyLinkedListNode * getNext() const;
	int getContent() const;

private:

	int content;
	SinglyLinkedListNode * next;

	friend class SinglyLinkedList;
};

class SinglyLinkedList
{
public:

	SinglyLinkedList();
	~SinglyLinkedList();

	bool isEmpty() const;
	void addToFront(int element);
	int getFirst() const;
	SinglyLinkedListNode * getHead() const;
	void removeFromFront();
	void clear();

private:

	SinglyLinkedListNode * head;

	friend std::ostream & operator<<(std::ostream & out, const SinglyLinkedList & list);
};
