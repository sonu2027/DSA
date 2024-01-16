// min in array using recursion
#include<iostream>
using namespace std;
int find_min(int arr[], int start, int n){
    if(start==n-1)
    return arr[start];
    return min(arr[start],find_min(arr, start+1, n));
}
int main(){
    int arr[100]={8,-100,3,2,6};
    cout<<find_min(arr, 0, 5);
}