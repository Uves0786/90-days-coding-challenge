// question link 
//https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/

//solution:


class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        // Sort the input nums.
        sort(nums.begin(), nums.end());
        int res = 0, size= nums.size(), l = 0, r = size - 1, mod = 1e9 + 7;
        vector<int> pows(size, 1);
        
        // Calculate pow[1:n] for each.
        for (int i = 1 ; i < size ; ++i)
            pows[i] = pows[i - 1] * 2 % mod;
        
        while (l <= r) {
            if (nums[l] + nums[r] > target)
            {
                r--;
            }
            else
            {
                res = (res + pows[r - l++]) % mod;
            }
        }
        return res;
    }
};