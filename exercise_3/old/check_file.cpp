#include "../library.h"
#include "../prototypes.h"

bool check_file()
{
    std::fstream File;
    while(!File.is_open())
    {
        File.open("input.txt");

        if(File.is_open())
        {
            cout << "\033[32m'input.txt' was found!\033[0m" << endl;
            File.close();
            return true;
        }

        else
        {
            cout << "\033[1;31merror:'input.txt' not found\033[0m" << endl;
            File.close();
            break;
        }
    }

    return false;
}

