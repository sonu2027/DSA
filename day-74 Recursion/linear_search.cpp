// Linear search using recursion

#include<iostream>
using namespace std;

bool linear_search(int arr[], int n, int target){
    if(n==-1)
    return false;
    if(arr[n]==target)
    return true;
    else
    return linear_search(arr, n-1, target);
}

int main(){
    int arr[100]={4,1,7,8,0,3,5,21};
    cout<<linear_search(arr, 7, 8);
}