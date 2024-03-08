#include "../library.h"
#include "../prototypes.h"

int *fillArray(const int &n) {
  int temp;
  bool loop = true;
  int *array = new int[n];

  cout << "Fill an array with numbers\n >> ";

  do {
    for (int a = 0; a < n; ++a) {
      cin >> temp;

      if (cin.fail()) {
        cout << "\n\033[1;31m"
             << " Wrong input! One of the elements is not a number.\n"
             << "Please, fill the array again.\n"
             << "\033[0m";

        cin.clear();
        cin.ignore(256, '\n');

        a = 0;
        cout << "\n >> ";
      }

      else
        array[a] = temp;
    }

    loop = false;
  } while (loop);

  cin.ignore(256, '\n');
  return array;
}
