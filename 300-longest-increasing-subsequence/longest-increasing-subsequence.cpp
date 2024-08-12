class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) {
            return nums.size();
        }
        vector<int> dp(n, 1);

        int maxele = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {

                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                    maxele = max(maxele, dp[i]);
                }
            }
        }

        return maxele;
    }
};