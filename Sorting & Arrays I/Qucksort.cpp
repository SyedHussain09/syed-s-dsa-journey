class Solution {
public:
    int partition(vector<int>& a, int st, int end) {
        int pivot = a[end], i = st - 1;
        for (int j = st; j < end; j++) {
            if (a[j] < pivot) swap(a[++i], a[j]);
        }
        swap(a[i + 1], a[end]);
        return i + 1;
    }

    void qs(vector<int>& a, int st, int end) {
        if (st >= end) return;
        int p = partition(a, st, end);
        qs(a, st, p - 1);
        qs(a, p + 1, end);
    }

    vector<int> quickSort(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};
