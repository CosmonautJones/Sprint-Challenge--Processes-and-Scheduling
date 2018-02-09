#include <stdio.h>
#include <stdlib.h>

int **alloc_2d(int rows, int cols)
{
  int i;
  int **array = malloc(rows * sizeof(int *));

  for (i = 0; i < rows; i++) {
    array[i] = malloc(cols * sizeof(int));
  }

  return array;
}

void alloc_2d_example(void)
{
  int **my_array = alloc_2d(5, 10);

  // First array index is row, second is column:
  my_array[2][3] = 3490;

  // The same array access could be made with pointer arithmetic:
  // *(*(my_array + 2) + 3) = 3490;

  // By the C spec, the array notation and pointer arithmetic notation
  // are 100% equivalent.

  printf("my_array[2][3] = %d\n", my_array[2][3]);
}

int main()
{
  alloc_2d_example();

  return 0;
}