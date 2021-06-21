#include <cppcount/characters.h>

using namespace std;

unordered_map<char, size_t> countCharacters(const string& str)
{
    unordered_map<char, size_t> counts;

    for (char c : str)
    {
        counts[c]++;
    }

    return counts;
}


unordered_map<char, size_t> countCharactersIgnoreCase(const string& str)
{
    unordered_map<char, size_t> counts;

    for (auto& pair: countCharacters(str))
    {
        counts[toupper(pair.first)] = pair.second;
    }

    return counts;
}
