#include "../library.h"
#include "../prototypes.h"

int *modulusSort(const int &n, int *modulusArray, int *unsortedArray)
{

    // Reversed Shell sort
    for (int gap = n/2; gap > 0; gap/=2)
        for (int i = gap; i < n; ++i)
            for (int j = i; j >= gap; j -= gap)
                if (modulusArray[j] > modulusArray[j - gap])
                {
                    int temp1 = modulusArray[j];
                    modulusArray[j] = modulusArray[j-gap];
                    modulusArray[j-gap] = temp1;

                    int temp2 = unsortedArray[j];
                    unsortedArray[j] = unsortedArray[j-gap];
                    unsortedArray[j-gap] = temp2;
                }

    return unsortedArray;
}
