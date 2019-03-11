#pragma once

#include "binarysearch.h"

#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
    std::vector<int> testVector = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    //testVector
    auto position = bsearch(testVector, 3);

    return EXIT_SUCCESS;
}

