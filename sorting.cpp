//sorting
#include<stdio.h>

//for bubble sort
void bubbleSort(int array[], int size) {

  
  for (int step = 0; step < size - 1; ++step) {
      
    
    for (int i = 0; i < size - step - 1; ++i) {
      
      
      if (array[i] > array[i + 1]) {
        
        
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

//for quick sort
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) {
  

  int pivot = array[high];
  int i = (low - 1);

  
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      
      i++;
      
      
      swap(&array[i], &array[j]);
    }
  }

 
  swap(&array[i + 1], &array[high]);
  
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    
    int pi = partition(array, low, high);
    
    
    quickSort(array, low, pi - 1);
    
    
    quickSort(array, pi + 1, high);
  }
}

//for merge sort
// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {
	
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  printf("In bubble sort\n");
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
  
  printf("In quick sort:\n");
  quickSort(data, 0, size - 1);
  printf("Sorted array in ascending order: \n");
  printArray(data, size);
  
  printf("In merge sort:\n");
  mergeSort(data, 0, size - 1);
  printf("Sorted array in ascnding orde: \n");
  printArray(data, size);
}
