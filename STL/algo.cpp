#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9,2,4};
    int n = sizeof(arr)/sizeof(int);

    int key; 
    cin>>key;
    auto it = find(arr,arr+n, key);
    int index = it-arr;
    if(index == n){
        cout<<key<<" not present";
    }
    else{
        cout<<"present at index"<<index;
    }

    return 0;
}