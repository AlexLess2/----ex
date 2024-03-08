#include "../library.h"
#include "../prototypes.h"

int sumAfterElem ( const int &n, int *array,
                   const int &ElemNum, int *ElemCoords,
                   const int &ChosenElem )
{
  int sum{};

  for (int i = ElemCoords[ChosenElem]+1; i < n; ++i)
    sum += array[i];

  return sum;
}
