#include "../library.h"
#include "../prototypes.h"

void ex1_main(void)
{
  bool *tasks = PickTasks();

  cout << "Enter the size of an array\n >> ";
  int n;
  cin >> n;

  if (n <= 0 || cin.fail() || n >= 128)
    {
      cout << "\033[1;31mIncorrect array size! Aborting...\033[0m\n";
      cin.clear();
      cin.ignore(256, '\n');
      return;
    }

  int *array = NULL;
  int Elem{};
  int ZeroNum;             // Number of zeros in array
  int *ZeroCoords = NULL;  // Coorditates of zeros
  int ElemNum;             // Number of minimal elements in array
  int *ElemCoords = NULL;  // Coorditates of minimal elements
  // Arrays for sorting
  int *modulusArray = NULL;
  int *unsortedArray = NULL;
  int *sortedArray = NULL;

  array = fillArray(n);
  printArray(n, array);
  if ( tasks[0] )
    {
      /// Find all zeros
      ZeroNum = elemSumSearch(n, array, Elem);
      ZeroCoords = elemCoordsSearch(n, array, ZeroNum, Elem);

      cout << "<< Number of zeros is " << ZeroNum << ":";

      for (int i = 0; i < ZeroNum; ++i)
        cout << " [" << ZeroCoords[i] << "]";
      cout << endl;
    }

  if ( tasks[1] )
    {
      Elem = minElemSearch(n, array);
      ElemNum = elemSumSearch(n, array, Elem);
      ElemCoords = elemCoordsSearch(n, array, ElemNum, Elem);

      cout << "\n\033[35mMinimum number in array is " << Elem << ".\033[0m\n"
           << "there is " << ElemNum << " minimum numbers in the array:\n";
      for (int i = 0; i < ElemNum; ++i)
        cout << "| [" << ElemCoords[i] << "](" << i << ") ";
      cout << '|' << endl;

      int P = pickElem(ElemNum);
      if (((n - 1) - ElemCoords[P]) <= 1)
        cout << "\n\033[33mCannot calculate a sum after chosen "
          "element!\033[0m\n";
      else
        {
          int sum = sumAfterElem(n, array, ElemNum, ElemCoords, P);
          cout << "\nSum after element " << ElemCoords[P] << " is " << sum
               << '\n';
        }
    }

    if ( tasks[2] )
      {
        unsortedArray = fillUnsortedArray(n, array);
        modulusArray = fillModulusArray(n, array);
        sortedArray = modulusSort(n, modulusArray, unsortedArray);

        cout << "\nArray after sorting: \n";
        printArray(n, sortedArray);
        cout << endl;
      }

  delete[] array;
  delete[] ZeroCoords;
  delete[] ElemCoords;
  delete[] modulusArray;
  delete[] sortedArray;
}
