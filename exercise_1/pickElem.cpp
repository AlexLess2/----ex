#include "../library.h"
#include "../prototypes.h"

int pickElem(const int &ElemNum)
{
    switch (ElemNum)
    {
    case 1:
      break;

    default:
        bool loop = true;
        while (loop)
        {
            cout << "\nChoose an element to calculate sum after\n >> ";

            int tempChosenElem;
            cin >> tempChosenElem;
            cin.ignore(256, '\n');

            if (tempChosenElem < 0 || cin.fail() || tempChosenElem >= ElemNum)
            {
                cin.clear();
                cout << "\n\033[31mThere's no such element!\033[0m\n";
            }

            else
                return tempChosenElem;
        }
    }

    return 0;
}
