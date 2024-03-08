#include "../library.h"
#include "../prototypes.h"

int *fillModulusArray(const int &n, int *array)
{
    int *modulusArray = new int[n];

    for (int i = 0; i < n; ++i)
    {
        if (array[i] < 0)
            modulusArray[i] = -array[i];

        else
            modulusArray[i] =  array[i];
    }

    return modulusArray;
}
