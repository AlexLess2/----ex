#include "../library.h"
#include "../prototypes.h"

int enter_steps()
{
    int N;
    bool k = true;

    while (k == true)
    {
        cout << "Please,enter the number of steps" << endl;
        cin >> N;

        if (N <= 0 || cin.fail() || N >= 256)
        {
            cout << "\033[33mOh no, the number is incorect, please try again!\033[0m" << endl;

            cin.clear();
            cin.ignore(256, '\n');
        }

        else
            k = false;
    }

    cin.ignore(256, '\n');

    return N;
}
