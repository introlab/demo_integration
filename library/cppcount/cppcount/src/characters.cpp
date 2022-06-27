#include <cppcount/characters.h>
#include <cppcount/values.h>

using namespace std;

unordered_map<char, size_t> countCharacters(const string& str)
{
    return countValues(str.begin(), str.end());
}


unordered_map<char, size_t> countCharactersIgnoreCase(const string& str)
{
    return countValues(str.begin(), str.end(), [](const auto& x) { return static_cast<char>(tolower(x)); });
}
