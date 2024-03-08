#include "../library.h"
#include "../prototypes.h"

void printArray(const int &n, int *array)
{
    cout << '\n';

    for (int i = 0; i < n; ++i)
        cout << array[i] << " | ";
}
