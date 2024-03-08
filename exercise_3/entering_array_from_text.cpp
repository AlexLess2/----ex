#include "../library.h"
#include "../prototypes.h"

char* entering_array_from_text(int length)
{
    int i = 0;
    char a;
    char *fulltext = new char[length];

    std::fstream File;
    File.open("input.txt");

    if(File)
    {
        while(i < length)
        {
            File.get(a);
            fulltext[i]=a;
            i++;
        }

        File.close();
    }

    return fulltext;
}

