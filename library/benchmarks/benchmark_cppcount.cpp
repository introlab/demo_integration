#include <cppcount/cppcount.h>

#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

constexpr size_t N = 100;

void benchmarkCountCharacters()
{
    ifstream inputFile("input.txt");
    stringstream buffer;
    buffer << inputFile.rdbuf();

    string inputString = buffer.str();

    chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (size_t i = 0; i < N; i++)
    {
        countCharacters(inputString);
    }
    chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    chrono::duration<double> elapsedTime = end - begin;

    cout << __FUNCTION__ << ": " << elapsedTime.count() / N << " s" << endl;
}

void benchmarkCountValues()
{
    ifstream inputFile("input.txt");
    stringstream buffer;
    buffer << inputFile.rdbuf();

    string inputString = buffer.str();
    vector<int> values;
    transform(
        inputString.begin(),
        inputString.end(),
        back_inserter(values),
        [](char x) { return static_cast<int>(x); });

    chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (size_t i = 0; i < N; i++)
    {
        countValues(values.begin(), values.end());
    }
    chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    chrono::duration<double> elapsedTime = end - begin;

    cout << __FUNCTION__ << ": " << elapsedTime.count() / N << " s" << endl;
}

void benchmarkCountValuesMap()
{
    ifstream inputFile("input.txt");
    stringstream buffer;
    buffer << inputFile.rdbuf();

    string inputString = buffer.str();
    vector<int> values;
    transform(
        inputString.begin(),
        inputString.end(),
        back_inserter(values),
        [](char x) { return static_cast<int>(x); });

    chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (size_t i = 0; i < N; i++)
    {
        countValues(values.begin(), values.end(), [](int x) { return x * x; });
    }
    chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    chrono::duration<double> elapsedTime = end - begin;

    cout << __FUNCTION__ << ": " << elapsedTime.count() / N << " s" << endl;
}

int main(int argc, char* argv[])
{
    benchmarkCountCharacters();
    benchmarkCountValues();
    benchmarkCountValuesMap();

    return 0;
}
