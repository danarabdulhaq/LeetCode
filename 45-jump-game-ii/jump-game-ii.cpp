class Solution {
public:
    int jump(vector<int>& nums) {

        int farthest = 0;
        int jump = 0;
        int curr = 0;
        int len =  nums.size()-1;
        
        for (int i = 0; i < len ; i++) {
            farthest = max(farthest, nums[i] + i);
            if (i == curr) {
                curr = farthest;
                jump++;
            }
        }

        return jump;
    }
};