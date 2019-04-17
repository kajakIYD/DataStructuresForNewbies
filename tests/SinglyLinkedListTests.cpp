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
