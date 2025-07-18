// search this problem in gfg 


// ******** Given an integer array and another integer element. The task is to find if the given element is present in array or not ********

// <======== Example ========>
// Input: n = 4, arr[] = {1,2,3,4}, x = 3
// Output: 2

// Input: n = 5, arr[] = {1,2,3,4,5}, x = 5
// Output: 4

// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 3)
            cout << i;
    }
}

// for solution of gfg 
class Solution
{
public:
    int search(vector<int> &arr, int x)
    {
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                return i;
            }
        }
        return -1;
    }
};