#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n){
    //base case
    if(n == 0) return 0;

    //recursive case
    return ((n%10) + sumOfDigits(n/10));
}
int main(){
    int n;
    cin>>n;
    sumOfDigits(n);
    cout<<sumOfDigits(n);
    return 0;
}