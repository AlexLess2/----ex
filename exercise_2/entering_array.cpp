#include "../library.h"
#include "../prototypes.h"

int** entering_array(int N)
{
    int temp;

    int **spiral = new int*[N];
    for(int i = 0; i < N; i++)
        spiral[i] = new int[N];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
        {
            int check = false;

            while (check == false)
            {
                cout << "enter " << i << " " << j << " element" << endl;
                cin >> temp;

                if (cin.fail())
                {
                    cout << "\n\033[33m Wrong input! Try again.\033[0m\n";
                    cin.clear();
                    cin.ignore(256, '\n');
                }

                else
                {
                    spiral[i][j] = temp;
                    check = true;
                }
            }
        }

    cin.ignore(256, '\n');

    return spiral;
}
