class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int ans = 0, cnt = 0;
      for (auto num: nums) {
        if (num == 1) {
          cnt++;
          ans = max(ans, cnt);
        } else {
          cnt = 0;
        }
      }
      return ans;
    }
};
