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
      
      if (iss.eof() || iss.bad()){
        break;
      }
      else if (iss.fail()){
        iss.clear();
        iss.ignore(1);
      }
      else {
        result +=n;
      }
    }
    
  
    
    return result;
}
