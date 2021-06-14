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
