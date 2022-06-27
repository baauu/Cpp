#include <iostream>
#include <array> 
#include <iterator>
#include <ctime>

using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 


void populate(int a[], int b[], int c[], int size) {
  for (int i = 0; i < size; i++) {
    a[i] = (rand() % 1000);
    b[i] = (rand() % 1000);
    c[i] = (rand() % 1000);
  }
}

void print(int a[], int n) {
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int arr[], int n, int count) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    // Last i elements are already 
    // in place
    for (j = 0; j < n - i - 1; j++){
        if (arr[j] > arr[j + 1]) {
          swap(arr[j], arr[j + 1]);
          count++;
        }
    }
  }
  cout << count << " ";
}

void shellSort(int arr[], int n) {
  int count;
  for (int gap = n/2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; i += 1) {

      int temp = arr[i];
      int j;            
      for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){
        arr[j] = arr[j - gap];
      }
      arr[j] = temp;
      count++;t
    }
    //count++;
  }
  cout << count << " ";
}


int partition (int arr[], int low, int high, int& num)
{
  int pivot = arr[high]; // pivot
  int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

  for (int j = low; j <= high - 1; j++)
  {
    // If current element is smaller than the pivot
    if (arr[j] < pivot)
    {
      i++; // increment index of smaller element
      swap(&arr[i], &arr[j]);
      num++;
    }
  }
  swap(&arr[i + 1], &arr[high]);
  num++;
  return (i + 1);
}

void quickSort(int arr[], int low, int high, int& num) {
  if (low < high)
  {
    /* pi is partitioning index, arr[p] is now
    at right place */
    int pi = partition(arr, low, high, num);

    // Separately sort elements before
    // partition and after partition
    quickSort(arr, low, pi - 1, num);
    num += num;
    quickSort(arr, pi + 1, high, num);
    num += num;
  }
}



void selectionSort(int arr[], int n) 
{ 
  int i, j, min_idx, count = 0;
  // One by one move boundary of 
  // unsorted subarray 
  for (i = 0; i < n-1; i++) 
  { 
    // Find the minimum element in 
    // unsorted array 
    min_idx = i; 
    for (j = i+1; j < n; j++) 
    if (arr[j] < arr[min_idx]) 
      min_idx = j; 

    // Swap the found minimum element 
    // with the first element 
    swap(&arr[min_idx], &arr[i]);
    count++;
  }

  cout << count << " ";
} 




int main() {
  srand(time(0));

  int num = 0;

  int size = 100;
  int count = 0;

  int a1[size];
  int a2[size];
  int a3[size];

  populate(a1, a2, a3, size);

  //test:
  print(a1, size);
  print(a2, size);
  print(a3, size);

  //bublle sort out:
  // bubbleSort(a1, size, count);
  // bubbleSort(a2, size, count);
  // bubbleSort(a3, size, count);
  // cout << endl << endl;

  // shell sort out:
  shellSort(a1, size);
  shellSort(a2, size);
  shellSort(a3, size);
  cout << endl << endl;

  //quick sort out: 
  // quickSort(a1, 0, size, num);
  // cout << num;
  
  
  


  //merge sort out:


  //selection sort:
  // selectionSort(a1, size);
  // selectionSort(a2, size);
  // selectionSort(a3, size);
  // cout << endl << endl;

  }

