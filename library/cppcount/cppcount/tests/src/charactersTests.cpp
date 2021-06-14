#include <cppcount/characters.h>

#include <gtest/gtest.h>

using namespace std;

TEST(charactersTests, countCharacters)
{
    unordered_map<char, size_t> counts = countCharacters("Bonjour Bob");
    unordered_map<char, size_t> expected_counts(
            {{'B', 2},
             {'o', 3},
             {'n', 1},
             {'j', 1},
             {'u', 1},
             {'r', 1},
             {' ', 1},
             {'b', 1}});

    EXPECT_TRUE(counts == expected_counts);
}
