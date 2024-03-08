#include "../library.h"
#include "../prototypes.h"

void ex3_main(void)
{
    setlocale(LC_ALL, "RUS");

    int length = 0;
    char *fulltext = NULL;

    check_file();
    length = check_size();

    //char *fulltext = new char[length];

    fulltext = entering_array_from_text(length);
    change(fulltext, length);

    cout << "\nOutput file is created.\n";

    delete [] fulltext;
}
