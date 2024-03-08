#include "../library.h"
#include "../prototypes.h"

void change(char* fulltext, int length)
{
    int i = 0;
    char a;


    for (i = 0; i < length; i++)
    {
        a = fulltext[i];
        switch(a)
        {
            case '1': { cout << "one";       break; }
            case '2': { cout << "two";       break; }
            case '3': { cout << "three";     break; }
            case '4': { cout << "four";      break; }
            case '5': { cout << "five";      break; }
            case '6': { cout << "six";       break; }
            case '7': { cout << "seven";     break; }
            case '8': { cout << "eight";     break; }
            case '9': { cout << "nine";      break; }
            case '0': { cout << "zero";      break; }
            case '.': { cout << "\n";        break; }
            case ' ': { cout << " ";         break; }
            default:  { cout << fulltext[i]; break; }
        }
    }
}
