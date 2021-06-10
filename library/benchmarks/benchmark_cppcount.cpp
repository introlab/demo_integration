#include <cppcount/cppcount.h>

#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

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

int main(int argc, char* argv[])
{
    benchmarkCountCharacters();

    return 0;
}
