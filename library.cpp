#include <iostream>
#include "library.h"

using namespace std;

// for(int i = 0; i < CAPACITY; i++) {
//   cout << "Array #" << i+1 << " " << arr[i] << endl;
// }

void display(const int arr[], int size) {
  cout << endl;
  for(int i = 0; i < size; i++) {
    cout << "Array pos #" << i << " " << arr[i] << endl;
  }
}

void add_to_array(int arr[], const int size) {
  for(int i = 0; i < size-1; i++) { // insert elements for all elements in the array named "arr"
    arr[i] = (rand() % 10) + 1;
    // cout << "Array pos #" << i << "\t" << arr[i] << endl;
  }
} // end function


void find_max(const int arr[], const int size) {
  // Write a C++ program to find the largest element of a given array of integers.
  int max = 0;
  int pos = 0;
  for(int i = 0; i < size; i++) { // find max value in array
    if(arr[i] > max) {
      max = arr[i];
      pos = i;
    }
  }
  cout << "\nMax is " << max << " at pos #" << pos << endl;
} // end function


void find_three_maxes(const int arr[], const int size) {
  // Write a C++ program to find the largest three elements in an array.
  int max = 0, max2 = 0, max3 = 0;
  int pos = 0, pos2 = 0, pos3 = 0;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < size; j++) {
      if(arr[j] > max) { // largest value
        max = arr[j];
        pos = j;
      }
      if(arr[j] < max && arr[j] > max2) { // second largest value
        max2 = arr[j];
        pos2 = j;
      }
      if(arr[j] < max2 && arr[j] > max3) { // third largest value
        max3 = arr[j];
        pos3 = j;
      }
    } // end for loop(var j)
  } // end for loop(var i)
  cout << "\nLargest value is " << max << " at pos #" << pos << endl;
  cout << "Second largest value is " << max2 << " at pos #" << pos2 << endl;
  cout << "Third largest value is " << max3 << " at pos #" << pos3 << endl;
} // end func

void selection_sort(int arr[], const int size) { // iterates through array then places in next smallest position
  for(int i = 0; i < size-1; i++) { // iterate through entire array
    for(int j = i; j < size; j++) { // reiterate through entire array from position i
      if(arr[i] > arr[j]) { // if current > next then swap
        swap(arr[i], arr[j]);
      }
    }
  } // end for
}

void bubble_sort(int arr[], const int size) { // swaps until sorted
  for (int i = 0; i < size - 1; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    } // end nested for
  } // end outer for
}

void insertion_sort(int arr[], const int size) { // place smallest at beginning
  for (int i = 1; i < size; ++i) { // iterate through array starting at pos 1
    int key = arr[i];
    int j = i - 1; // j starts at 0

    while (j >= 0 && arr[j] > key) { // while j < 0 and val at pos > input
      arr[j + 1] = arr[j]; // shift values over 1 position
      j = j - 1; // decrement j
    }

    arr[j + 1] = key;
  }
}

void insert(int arr[], int &size, const int val) {
  int i;
  for(i = 0; i < size; i++) { // iterate through entire array
    if(arr[i] >= val) { // beginning or middle
      for(int j = size-1; j >= i; j--) { // reverse traverse from end til position of significance
        arr[j+1] = arr[j]; // shift entire array over 1
      } // end inner for
      arr[i] = val; // set value of significance to input
      size++; // increment size
      break; // exit for loop
    }
  } // end outer for
  
  if(i == size) { // if at end of array
    size++; // increment size of array;
    arr[i] = val; // set value of significance to input
  } // end if
} // end func
