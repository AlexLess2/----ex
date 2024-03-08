#include "../library.h"
#include "../prototypes.h"

int minElemSearch(const int &n, int *array)
{
  int minElem = array[0];
  for (int i = 0; i < n; ++i)
    if (array[i] < minElem)
      minElem = array[i];

  return minElem;
}
