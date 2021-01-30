#include "calculator.h"

#include <sstream>
using std::istringstream;
using std::string;

int stringCalculate(const string & str)
{
    if (str.empty())
        return 0;

    istringstream iss(str);

    int result;
    iss >> result;

    return result;
}