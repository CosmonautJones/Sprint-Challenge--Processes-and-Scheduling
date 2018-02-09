// Write a function that allocates an array of `int`s of a specified size.
// (The `cols` parameter holds the size.)
#include <stdio.h>
#include <stdlib.h>

int *alloc_1d(int cols)
{
  int* array = (int*) malloc(cols * sizeof(int));
  return array;
}

void alloc_1d_example(void)
{
	int *my_array = alloc_1d(12);

	my_array[8] = 3490;

	// The same array access could be made with pointer arithmetic:
	// *(my_array+8) = 3490;

	// By the C spec, the array notation and pointer arithmetic notation
	// are 100% equivalent.

	printf("my_array[8] = %d\n", my_array[8]);
}

int main() 
{
  alloc_1d_example();

  return 0;
}













// void alloc_1d_example(void);
// {
//   int *my_array = alloc_1d(12);

//   my_array[8] = 3490;

//   // The same array access could be made with pointer arithmetic:
//   *(my_array + 8) = 3490;

//   // By the C spec, the array notation and pointer arithmetic notation
//   // are 100% equivalent.

//   printf("my_array[8] = %d\n", my_array[8]);
// }

// int *alloc_1d(int cols);
// {
//   int cols;
//   int *array;
//   scanf("Enter a number of columns: %d\n", cols);
//   // array = (int *)malloc(cols * sizeof(int));
//   printf("array = %d\n", array[cols]);
//   // (solution is about 2 lines of code) <----- Duh
// }
