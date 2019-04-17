#include "catch2/catch.hpp"

#include "../code/SinglyLinkedList.hpp"

SCENARIO("List initialization", "SinglyLinkedList")
{
	WHEN("Create list")
	{
		SinglyLinkedList list;

		THEN("List is empty")
		{
			REQUIRE(list.isEmpty());
		}
	}
}

SCENARIO("List elements addition", "SinglyLinkedList")
{
	SinglyLinkedList list;

	WHEN("Add element")
	{
		list.addToFront(42);

		THEN ("List is NOT empty")
		{
			REQUIRE_FALSE(list.isEmpty());
		}
	}
}

SCENARIO("List elements reading", "SinglyLinkedList")
{
	SinglyLinkedList list;
	list.addToFront(30);
	list.addToFront(20);
	list.addToFront(10);

	WHEN("Read first element")
	{
		int first = list.getFirst();

		THEN("Its last added element")
		{
			REQUIRE(first == 10);
		}
	}
}
