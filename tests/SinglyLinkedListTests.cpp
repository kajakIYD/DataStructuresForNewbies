#include "catch2/catch.hpp"

#include <sstream>
#include <vector>

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
	GIVEN("Empty list")
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
}

SCENARIO("List elements reading", "SinglyLinkedList")
{
	GIVEN("List with three elements")
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

		WHEN("Read elements")
		{
			std::vector<int> readElements;
			for (SinglyLinkedListNode * node = list.getHead(); node != nullptr; node = node->getNext())
			{
				readElements.push_back(node->getContent());
			}

			THEN("Read all added elements")
			{
				REQUIRE(readElements.size() == 3);

				REQUIRE(readElements[0] == 10);
				REQUIRE(readElements[1] == 20);
				REQUIRE(readElements[2] == 30);
			}
		}
	}
}

SCENARIO("List elements removing", "SinglyLinkedList")
{
	GIVEN ("List with three elements")
	{
		SinglyLinkedList list;
		list.addToFront(30);
		list.addToFront(20);
		list.addToFront(10);

		WHEN("Remove front element")
		{
			list.removeFromFront();

			THEN("First element is pre-last-added")
			{
				REQUIRE(list.getFirst() == 20);
			}
		}

		WHEN("Remove all elements")
		{
			list.removeFromFront();
			list.removeFromFront();
			list.removeFromFront();

			THEN("List is empty")
			{
				REQUIRE(list.isEmpty());
			}
		}

		WHEN("Clear list")
		{
			list.clear();

			THEN("List is empty")
			{
				REQUIRE(list.isEmpty());
			}
		}
	}
}

SCENARIO("List elements printing", "SinglyLinkedList")
{
	GIVEN("Empty list")
	{
		SinglyLinkedList list;

		WHEN("Write list to output stream")
		{
			std::ostringstream outputStream;
			outputStream << list;

			THEN ("List content is printed out")
			{
				REQUIRE(outputStream.str() == "[]");
			}
		}
	}

	GIVEN("List with some elements")
	{
		SinglyLinkedList list;
		list.addToFront(30);
		list.addToFront(20);
		list.addToFront(10);

		WHEN("Write list to output stream")
		{
			std::ostringstream outputStream;
			outputStream << list;

			THEN ("List content is printed out")
			{
				REQUIRE(outputStream.str() == "[10, 20, 30]");
			}
		}
	}
}
