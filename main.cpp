#include <iostream>
#include "library.h"

using namespace std;

int main() {
  srand(time(NULL));
  const int CAPACITY = 15;
  int size = 5;
  int max = 0;
  int pos;
  int arr[CAPACITY];

  add_to_array(arr, size);
  cout << "Before sort:\n";
  display(arr, size);

  cout << "\nAfter sort:\n";
  insertion_sort(arr, size);
  display(arr, size);

  cout << "\nAfter insert:\n";
  insert(arr, size, 5);
  display(arr, size);


  // find_max(arr, CAPACITY);

  // find_three_maxes(arr, CAPACITY);

  // string str = "ateslaa";
  // add_to_beg_and_end(str);
  
  
  return 0;
}
