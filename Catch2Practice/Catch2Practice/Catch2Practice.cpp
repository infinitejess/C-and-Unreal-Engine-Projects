
#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"

#include "../T9Predict/WordsTree.h"
#include "../T9Predict/Engine.h"

TEST_CASE("Called with empty digit list --> returns no results")
{
	WordsTree emptytree;
	Engine t9engine(emptytree);

	Digits digits;

	auto result = t9engine.GetWordsByDigits(digits);

	REQUIRE(result.size() == 0);

}