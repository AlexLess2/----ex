#include "../library.h"
#include "../prototypes.h"

int check_size()
{
    std::fstream File;
    File.open("input.txt");

    char a;
    int length = 0;

    if (File)
    {
        while(File.get(a))
            length++;

        File.close();
    }

    return length;
}

