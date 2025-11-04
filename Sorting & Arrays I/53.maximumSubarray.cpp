class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxm = INT_MIN;
        int n =  nums.size();
        for(int i = 0; i < n; i++){
                 int sum = 0; 
            for(int j = i; j < n; j++){ 
               sum += nums[j];
                maxm = max(maxm, sum);
                }
            }
       
        
        return maxm;
    }
};

//O(n^2) time and O(1) space

// Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int curSum = 0;
        for(int i = 0; i < nums.size(); i++){
            curSum += nums[i];
            if((curSum > maxi)){
                maxi = curSum;
            }
            if(curSum < 0){
                curSum = 0;
            }
        }
        return maxi;
    }
};

//O(n) time and O(1) space