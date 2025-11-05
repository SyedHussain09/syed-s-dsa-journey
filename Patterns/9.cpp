class Solution {
   public:
    void pattern9(int n) {
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k <= n - i; k++) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i - 1; j++) {
                cout << " ";
            }
            for (int k = 1; k <= 2 * (n - i) + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};