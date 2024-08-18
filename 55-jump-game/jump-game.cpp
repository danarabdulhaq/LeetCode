class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Idx = nums[0];
        int len = nums.size();

        for (int i = 0; i < len; i++) {

            if (Idx >= len - 1)
                return true;
            if (nums[i] == 0 and Idx == i)
                return false;

            if (i + nums[i] > Idx)
                Idx = i + nums[i];
        }

        return true;
    }
};