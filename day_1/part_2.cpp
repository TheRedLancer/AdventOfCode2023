#include <iostream>
#include <string>
#include <fstream>

using std::string;

int main()
{
    string s;
    std::ifstream in("part_2.txt");
    int out = 0;

    while (getline(in, s))
    {
        // regex [0:-1] for numbers
        // then regex [1:-1] for numbers
        // if first is empty fill it else fill the last
        // if !last, last = first
        // add first * 10 + last
    }

    in.close();
    std::cout << out << std::endl;
    return 0;
}