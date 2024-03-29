#include "library.h"
#include "prototypes.h"
void menu(void) {
  cout << "\x1B[2J\x1B[H"; // clear unix term
  cout << "\n\n"
       << "        ██╗      █████╗ ██████╗      ██╗\n"
       << "        ██║     ██╔══██╗██╔══██╗    ███║\n"
       << "        ██║     ███████║██████╔╝    ╚██║\n"
       << "        ██║     ██╔══██║██╔══██╗     ██║\n"
       << "        ███████╗██║  ██║██████╔╝     ██║\n"
       << "        ╚══════╝╚═╝  ╚═╝╚═════╝      ╚═╝\n\n"
       << "  --- Лабораторная работа №1 - Вариант 14 ---\n\n"
       << "    Парадигма структурного программирования\n"
       << "            Неуправляемый код С++\n";

  bool loop = true;
  do {
    cout << "\033[36m\n\nCurrent Data type is "
         << "Integer"
         << "\033[0m";
    cout << "\n\n Options:\n"
         << "    h          Show program explanation\n"
         << "    1, 2, 3    Execute an exercise\n"
         // << "    c          Change data type\n"
         << "    q          Exit a program."
         << "\n\n >> ";

    char option;
    cin >> option;
    cin.ignore(256, '\n');

    switch (option) {

    case 'H':
    case 'h':
      cout << " ---- --- --- --- --- ----\n\n"
           << " -- Exercise 1\nВ одномерном массиве, состоящем из n "
              "вещественных "
              "элементов:\n"
           << " 1) Вычислоить количество элементов, равных 0 и их координаты;\n"
           << " 2) Найти сумму элементов массива, расположенных после "
              "минимального "
              "элемента. Если в\n"
           << "массива несколько минимумов, то пользователь выбирает, после "
              "какого "
              "из них нужно\n"
           << "вычислить сумму. Необходимо вывести значение минимального "
              "элемента, "
              "его позицию и\n"
           << "вычисленную после него сумму;\n"
           << " 3) Упорядочить элементы массива по убыванию модулей "
              "элементов.\n\n"
           << " -- Exersise 2\n"
           << "  Осуществить циклический сдвиг элементов квадратной матрица "
              "размерности MxN\n"
           << "вправо на k элементов таким образом:\n"
           << "элементы 1-й строки сдвигаются в последний столбец сверху вниз, "
              "из "
              "него -\n"
           << "в последнюю строку справа налево, из неё -\n"
           << "в первый столбец снизу вверх, из него - в первую строку.\n"
           << "Для остальных элементов - аналогично.\n\n"
           << " -- Exercise 3\n"
           << "Вывести на экран весь текст из документа, заменив в нём цифры "
              "от 0 "
              "до 9 на слова:\n"
           << " 'ноль', 'один' ... 'девять', - и написав каждое предложение с "
              "новой строки."
           << "\n\n ---- --- --- --- --- ----";
      break;

    case '1':
      cout << "\n\n --- -- Exercise 1 -- ---\n\n";
      ex1_main();
      cout << "\n --- -- Ex. 1 end# -- ---\n";
      break;

    case '2':
      cout << "\n\n --- -- Exercise 2 -- ---\n\n";
      ex2_main();
      cout << "\n --- -- Ex. 2 end# -- ---\n";
      break;

    case '3':
      cout << "\n\n --- -- Exercise 3 -- ---\n\n";
      ex3_main();
      cout << "\n --- -- Ex. 3 end# -- ---\n";
      break;

    case 'Q':
    case 'q':
      cout << "\n\n --- -- Goodbye! -- ---\n";
      return;

    default:
      cout << "\n\033[1;31m"
           << "!!!  Wrong option! Please use only numbers from 1 to 3."
           << "\033[0m\n";
    }

    cout << "\nDo you wish to continue? (y/N) >> ";

    cin >> option;
    if (option == 'y') {
      cout << "\x1B[2J\x1B[H"; // clear unix term
      cin.ignore(256, '\n');
    } else
      loop = false;

  } while (loop == true);

  cout << "\n --- -- Goodbye! -- ---" << endl;
}
