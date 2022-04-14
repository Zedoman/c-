//searching
#include <stdio.h>

//for binary search
int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

//for linear search
int linearSearch(int array[], int n, int x) {
  
  // Going through array sequencially
  for (int i = 0; i < n; i++){
  	if (array[i] == x)
  	{
	  return i;	
	  }
  }
  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  printf("For Binary search:\n");
  int result1 = binarySearch(array, x, 0, n - 1);
  if (result1 == -1)
    printf("Not found\n");
  else
    printf("Element is found at index %d\n", result1);
  
  int y = 9;
  printf("For Linear search:\n");
  int result2 = linearSearch(array, n, y);
  if (result2 == -1)
    printf("Not found\n");
  else
    printf("Element is found at index %d\n", result2);
  return 0;
}