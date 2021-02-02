#include "calculator.h"

#include <sstream>
#include <iostream>
using std::istringstream;
using std::string;

int stringCalculate(const string & str)
{
    int result = 0;
    
    if (str.empty())
        return 0;

    istringstream iss(str);
    
    while(true)
    {
      int n;
      iss >> n; 

      if (!iss)
      {
        if (iss.eof())
          break;
        iss.clear();
        iss.ignore(1);
      }

      result +=n;
    }
    
    return result;
}
