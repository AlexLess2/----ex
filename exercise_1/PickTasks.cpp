#include "../library.h"
#include "../prototypes.h"

bool *PickTasks()
{
  bool *tasks = new bool[3];
  std::fill(tasks, tasks+3, true);

  cout << " This exersize consists of 3 tasks:\n"
       << "   1 - Zeros\n"
       << "   2 - Minimum elements\n"
       << "   3 - Modulus sorting\n\n"
       << " If you want to exclude any of this tasks from execution,\n"
       << " please, pick a number of task or insert '0' if you wish to "
    "continue.\n >> ";

  char temp{};
  do
    {
      cin >> temp;
      if (cin.fail())
        {
          cout << "\033[1;31mIncorrect option!\033[0m\n";
          cin.clear();
          cin.ignore(256, '\n');
        }

      else
        {
          switch (temp)
            {
            case ('0'):
              break;

            case ('1'):
              tasks[0] = false;
              break;

            case ('2'):
              tasks[1] = false;
              break;

            case ('3'):
              tasks[2] = false;
              break;

            default:
              cout << "\n\033[33m Wrong option!\033[0m\n";
              cin.clear();
              cin.ignore(256, '\n');
              break;
            }
        }
    }
  while (temp != '0');

    cin.clear();
    cin.ignore(256, '\n');
    cout << "\n --- -- -- ----\n\n";

    return tasks;
}
