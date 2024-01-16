// sum of array element using recursion
#include<iostream>
using namespace std;
int find_sum(int arr[], int start, int n){
    if(start==n)
    return 0;
    return arr[start]+find_sum(arr, start+1, n);
}
int main(){
    int arr[100]={8,-100,3,2,6};
    cout<<find_sum(arr, 0, 5);
}