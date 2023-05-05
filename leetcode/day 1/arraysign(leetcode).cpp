class Solution {
public:
    int arraySign(vector<int>& nums)
    {
        int ans=0;
        for(auto index:nums)
        {
            if(index<0)
            {
                ans++;
            }
            else if(index==0)
            {
                return 0;
            }
        }
        if(ans%2!=0)
        {
            return -1;
        }
        return 1;
    }
    
};