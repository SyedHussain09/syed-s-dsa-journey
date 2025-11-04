class Solution {
public:
    void merge(vector<int>& arr, int st, int mid, int end) {
        vector<int> temp;
        int i = st, j = mid + 1;

        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
            else temp.push_back(arr[j++]);
        }

        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= end) temp.push_back(arr[j++]);

        for (int k = st; k <= end; k++)
            arr[k] = temp[k - st];
    }

    void mergeSortHelper(vector<int>& arr, int st, int end) {
        if (st >= end) return;
        int mid = (st + end) / 2;
        mergeSortHelper(arr, st, mid);
        mergeSortHelper(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }

    vector<int> mergeSort(vector<int>& nums) {
        mergeSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};
