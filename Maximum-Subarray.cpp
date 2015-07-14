class Solution {
public:
int maxSubArray(vector<int>& nums) {
    int size=nums.size();
    if (size==0) return 0;
    int sum=0,res=0, m=0, ss=nums[0];
    for (int i=0;i<size;i++)
    {
        if (ss<nums[i]) ss=nums[i];
        sum += nums[i];
        m = max(sum, m);
        if (sum < 0) 
        {
            res = max(res, m);
            sum=0;
        }
    }
    res = max(res, m);
    if (res == 0) res = ss;
    return res;
}
};