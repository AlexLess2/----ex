#include "../library.h"
#include "../prototypes.h"

void ex2_main(void)
{
    int N{};
    int Step;
    int **spiral = NULL;
    int **spiralnew = NULL;

    cout << "Enter the size of an array\n >> ";
    cin >> N;

    if (N <= 0 || cin.fail() || N >= 128)
    {
        cout << "\033[31mIncorrect array size! Ending the program.\033[0m\n";
        cin.clear();
        cin.ignore(256, '\n');
        return;
    }

    spiral = entering_array(N);

    Step = enter_steps();

    printf("Original array:\n");
    display(spiral, N);

    spiralnew = flip_array(spiral, N, Step);

    cout << "NEW ARRAY" << endl;
    display(spiralnew, N);

    for(int i = 0; i < N; ++i)
        delete[] spiral[i];
    delete[] spiral;

    for(int i = 0; i < N; i++)
        delete[] spiralnew[i];
    delete[] spiralnew;

    return;
}
