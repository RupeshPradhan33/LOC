/* 6. Write a C++ program to find maximum occurring integer in an array.*/

 
#include<iostream>
using namespace std;

void most_occurred_number(int nums[], int size)
{
    int max_count = 0;
    cout << "\nMost occurred number: ";

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;

        if (count > max_count)
            max_count = count;


    }

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;

        if (count == max_count)
            cout << nums[i] << ", Occurred " <<max_count << " Times " << endl;
    }
}

int main()
{
    int nums[] = {7, 7, 9, 12, 9, 22, 45, 7, 7, 7, 7, 5, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    most_occurred_number(nums, n);
    return 0;
}