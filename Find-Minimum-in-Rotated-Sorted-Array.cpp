class Solution {
public:
int findMin(vector<int>& nums) {
    int s=nums.size();
    int l=0, r=s-1, mid;
    while (l<r)
    {
        mid = (l+r)>>1;
        if (nums[mid]>nums[r]) l=mid+1;
        else r=mid;
    }
    return nums[l];
    
}
};