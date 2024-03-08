#include "../library.h"
#include "../prototypes.h"

void check_array(char* fulltext, int length)
{
	int count = 0;
	int pointcount = 0;
    int coun = 0;
	char a;

    bool f = check_file();

    if ( f == true )
    {
        for (int i = 0; i < length; i++)
        {
            a = fulltext[i];

            switch(a)
            {
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                case '0': { count++;       break; }
                case '.': { pointcount++;  break; }
                default:  { coun++;        break; }
            }
      }

        if ( coun == 1 )
            cout << "imput file is empty"<<endl;

        else
        {
            if(count == 0)
              cout << "imput file has no numbers"<<endl;

            if(pointcount == 0)
              cout << "imput file has no points"<<endl;
        }
    }

}
