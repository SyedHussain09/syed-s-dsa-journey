class Solution {
   public:
    void pattern11(int n) {
        int st = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                st = 1;
            else
                st = 0;
            for (int j = 0; j <= i; j++) {
                cout << st << " ";
                st = 1 - st;
            }
            cout << endl;
        }
    }
};