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
        char firstNum = 0;
        char lastNum = 0;
        for (int c : s) // for each line
        {
            if (c >= 48 && c <= 57) // is number
            {
                if (!firstNum)
                {
                    firstNum = c;
                }
                else
                {
                    lastNum = c;
                }
            }
        }
        if (!lastNum)
        {
            lastNum = firstNum;
        }
        // std::cout << "First: " << firstNum << ", Second: " << lastNum << std::endl;
        out += (firstNum - 48) * 10 + (lastNum - 48);
    }

    in.close();
    std::cout << out << std::endl;
    return 0;
}