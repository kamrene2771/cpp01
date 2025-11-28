#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string level = argv[1];
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    int index = -1;

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            index = i;
            break;
        }
    }

    Harl harl;

    switch (index)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;

        default:
            std::cout << "complaining about something else" << std::endl;
    }

    return 0;
}
