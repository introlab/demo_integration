#include <cppcount/characters.h>

#include <gtest/gtest.h>

using namespace std;

TEST(charactersTests, countCharacters)
{
    unordered_map<char, size_t> counts = countCharacters("Bonjour Bob");
    unordered_map<char, size_t> expected_counts(
        {{'B', 2}, {'o', 3}, {'n', 1}, {'j', 1}, {'u', 1}, {'r', 1}, {' ', 1}, {'b', 1}});

    EXPECT_EQ(counts, expected_counts);
}

TEST(charactersTests, countCharactersIgnoreCase)
{
    unordered_map<char, size_t> counts = countCharactersIgnoreCase("BonjOur BOb");
    unordered_map<char, size_t> expected_counts({{'B', 3}, {'O', 3}, {'N', 1}, {'J', 1}, {'U', 1}, {'R', 1}, {' ', 1}});

    EXPECT_EQ(counts, expected_counts);
}
