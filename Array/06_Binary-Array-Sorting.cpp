// ******** Given a binary array A[] of size N. The task is to arrange the array in increasing order ********

// <======== Example ========>
// Input: N = 5, A[] = {1, 0, 1, 1, 0}
// Output: 0 0 1 1 1

// Input: N = 10, A[]  = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 0 0 0 0 1 1 1 1 1 1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    vector<int> sortBinaryArray(int n, vector<int> &arr) {
        int ZeroCount=0;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==0){
                ZeroCount++;
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(ZeroCount>0){
                arr[i]=0;
                ZeroCount--;
            }
            else{
                arr[i]=1;
            }
        }
        return arr;
        
    }
};