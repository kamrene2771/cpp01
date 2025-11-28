#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace filename s1 s2\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];


    if (s1.empty())
    {
        std::cout << "Error: s1 empty\n";
        return 1;
    }

    std::ifstream infile(argv[1]);
    if (!infile)
    {
        std::cout << "Error: cannot open input file\n";
        return 1;
    }

    std::string content;
    std::string line;

    while (std::getline(infile, line))
    {
        content += line;
        if (!infile.eof())
            content += "\n"; 
    }

    infile.close();

    std::string result;
    std::size_t pos = 0;

    while (true)
    {
        std::size_t found = content.find(s1, pos);

        if (found == std::string::npos)
        {
            result += content.substr(pos);
            break;
        }

        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    filename = filename + ".replace";
    const char *str = filename.c_str();

    std::ofstream outfile(str);
    if (!outfile)
    {
        std::cout << "Error: cannot open output file\n";
        return 1;
    }

    outfile << result;
    outfile.close();

    return 0;
}
