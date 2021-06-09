#include <cppcount/version.h>

using namespace std;

string getVersion()
{
#ifdef CPP_COUNT_VERSION
    return CPP_COUNT_VERSION;
#else
    return "dev";
#endif
}
