#pragma once

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

	bool isEmpty() const;
	void addToFront(int element);
	int getFirst() const;
	SinglyLinkedListNode * getHead() const;
	void removeFromFront();

private:

	SinglyLinkedListNode * head = nullptr;
};
