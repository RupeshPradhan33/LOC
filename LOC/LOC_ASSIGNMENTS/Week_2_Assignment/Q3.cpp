/*3. Write a C++ program to sort a given array using function.*/


#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  sort(arr, arr + n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}