#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    //base ase
    if(n == 0 || n == 1){
        return 1;
    }
    //recursive case
    return (n * fact(n-1));
}
int main(){
   int n;
   cin>>n;
   fact(n);
   cout<<fact(n);
   return 0;
}