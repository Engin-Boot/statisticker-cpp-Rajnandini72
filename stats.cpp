#include "stats.h"
#include <iostream>
#include <functional>   
#include <numeric>
#include <algorithm>
#include <math.h>
using namespace std;

Stats Statistics::ComputeStatistics(const std::vector<float>& numList) {

    //Implement statistics here
    Stats numStatics;

    if (numList.empty())   
    {
        numStatics = { NAN,NAN,NAN };  
        return numStatics;
    }//Empty error checking

    numStatics.min = *min_element(numList.begin(), numList.end());
    numStatics.max = *max_element(numList.begin(), numList.end());
    numStatics.average = accumulate(numList.begin(), numList.end(), 0.0) / numList.size();

    return numStatics;

}
