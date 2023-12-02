#include <iostream>
#include <string>
#include <fstream>
#include <regex>

using std::string;

int main()
{
    string s;
    std::ifstream in("part_2.txt");
    int out = 0;

    while (getline(in, s))
    {
        int first = 0;
        int last = 0;
        for (int i = 0; i < s.length(); i++)
        {
            string short_str = s.substr(i, s.length() - i);
            std::regex r("[1-9]|one|two|three|four|five|six|seven|eight|nine");
            std::smatch m;
            std::regex_search(short_str, m, r);
            int num = 0;
            for (auto v : m)
            {
                if (!v.compare("one"))
                    num = 49;
                else if (!v.compare("two"))
                    num = 50;
                else if (!v.compare("three"))
                    num = 51;
                else if (!v.compare("four"))
                    num = 52;
                else if (!v.compare("five"))
                    num = 53;
                else if (!v.compare("six"))
                    num = 54;
                else if (!v.compare("seven"))
                    num = 55;
                else if (!v.compare("eight"))
                    num = 56;
                else if (!v.compare("nine"))
                    num = 57;
                else
                {
                    num = ((string)v)[0];
                }
                // std::cout << v << ": " << num << ", ";
            }
            if (!first)
            {
                first = num;
            }
            else if (num)
            {
                last = num;
            }
            if (!last)
                last = first;
        }
        // std::cout << "First: " << first << ", Second: " << last << std::endl;
        out += (first - 48) * 10 + (last - 48);
        // std::cout << std::endl;
    }

    in.close();
    std::cout << out << std::endl;
    return 0;
}