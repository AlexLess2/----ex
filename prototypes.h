#pragma once

void menu(void);

// Part 1 (exercise 1)
void ex1_main(void);

bool *PickTasks();
void printArray(const int &n, int *array);
int *fillArray(const int &n);
int elemSumSearch(const int &n, int *array, const int &Elem);
int *elemCoordsSearch(const int &n, int *array, const int &ElemNum,
                      const int &Elem);
int minElemSearch(const int &n, int *array);
int pickElem(const int &ElemNum);
int sumAfterElem(const int &n, int *array,
                 const int &ElemNum, int *ElemCoords,
                 const int &ChosenElem);
int *fillUnsortedArray(const int &n, int *array);
int *fillModulusArray(const int &n, int *array);
int *modulusSort(const int &n, int *modulusArray, int *unsortedArray);

// Part 2 (exercise 2)

void ex2_main(void);

void display(int **spiral, int N);
int **entering_array(int N);
int **flip_array(int **spiral, int N,int Step);
int enter_size();
int enter_steps();
int shift_layer(int **spiralnew, int k, int edge, int *shift);
int *enter_layer(int **spiralnew, int k, int N, int edge);

    // Part 3 (exercise 3)

void ex3_main(void);

bool check_file();
int check_size();
char *entering_array_from_text(int length);
void change(char *fulltext, int length);
void check_array(char *fulltext, int length);
