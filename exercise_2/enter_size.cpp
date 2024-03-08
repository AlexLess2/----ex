#include "../library.h"
#include "../prototypes.h"

int enter_size()
{
    int N;
    bool k = true;

    while (k == true)
    {
        cout << "Please,enter the size of array" << endl;
        cin >> N;

        if(N > 0)
            k = false;

        else
            cout << "Oh no,the size is incorect,please try again" << endl;

    }

    return N;
}
