#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using std::string;

int main()
{
    string text;
    std::ifstream inputFile("input.txt");
    while (getline(inputFile, text))
    {
        std::cout << text;
    }

    inputFile.close();
    return 0;
}