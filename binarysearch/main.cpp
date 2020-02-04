#pragma once
#include <iostream>
#include "tests.h"

int main(int argc, char* argv[])
{
    const BinarySearchTests tester;
    tester.runTests();

    return EXIT_SUCCESS;
}

