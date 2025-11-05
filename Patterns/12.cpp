class Solution {
public:
    void pattern12(int n) {
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << j;
            }
            for(int k = 1; k <= 2*(n-i); k++){
                cout << " ";
            }
            for(int a = i; a > 0; a--){
                cout << a;
            }
            cout << endl;
        }
    }
};