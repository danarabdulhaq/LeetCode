
class Solution {
public:
  int climbStairs(int n) {
    if (n == 0 || n == 1) {
      return 1;
    }

    int v1 = 1;
    int v2 = 1;
    int val;
    for (int i = 2; i <= n; i++) {
      val = v1 + v2;
      v1 = v2;
      v2 = val;
      // dp[i] = dp[i - 1] + dp[i - 2];
    }
    return val;
  }
};
