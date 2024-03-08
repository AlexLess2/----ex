#include "../library.h"
#include "../prototypes.h"

void ex3_main(void)
{
  setlocale(LC_ALL, "RUS");

  int length = 0;
  char *fulltext = NULL;

 // check_file();
  length = check_size();

  fulltext = entering_array_from_text(length);


  check_array(fulltext, length);
  change(fulltext, length);

  delete [] fulltext;
}
