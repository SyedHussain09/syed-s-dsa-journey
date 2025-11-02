#include<bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int size, int target){
    int min = 0, max = size-1, mid;

    while(min <= max){
        mid = (min+max)/2;

        if(arr[mid] == target) return mid;
        else if (arr[mid] < target) min = mid+1;
        else max = mid-1;
    }
    return -1;
}
int main(){
    int arr[5] = {1,3,5,7,9};
    cout<< binSearch(arr, 5, 9);
    return 0;
    
}