#include <cppcount/values.h>

#include <gtest/gtest.h>

#include <cmath>
#include <string>

using namespace std;

TEST(valuesTests, countValues)
{
    vector<int> values = {-1, 1, 1, 5, 6, -1, 1};
    unordered_map<int, size_t> counts = countValues(values.begin(), values.end());
    unordered_map<int, size_t> expected_counts = {{-1, 2}, {1, 3}, {5, 1}, {6, 1}};

    EXPECT_TRUE(counts == expected_counts);
}

TEST(valuesTests, countValuesWithMapInt)
{
    vector<int> values = {-1, 1, 1, 5, 6, -1, 1};
    unordered_map<int, size_t> counts = countValues(values.begin(), values.end(), [](const auto& x) { return abs(x); });
    unordered_map<int, size_t> expected_counts = {{1, 5}, {5, 1}, {6, 1}};

    EXPECT_TRUE(counts == expected_counts);
}

TEST(valuesTests, countValuesWithMapString)
{
    vector<int> values = {-1, 1, 1, 5, 6, -1, 1};
    unordered_map<string, size_t> counts =
        countValues(values.begin(), values.end(), [](const auto& x) { return to_string(x); });
    unordered_map<string, size_t> expected_counts = {{"-1", 2}, {"1", 3}, {"5", 1}, {"6", 1}};

    EXPECT_TRUE(counts == expected_counts);
}
