#include<iostream>
using namespace std;
int search(int arr[],int size,int target){
    
    for (int i = 0; i < size; i++)
    {
        if(target==arr[i])
        return i;
    }
    return 0;
    
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    cout<<search(arr,9,4);
    
}