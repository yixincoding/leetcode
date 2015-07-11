class Solution {
public:
    
    int robrob(vector<int> nums, int x, int y) {
        int size=y-x+1;
        if (size==0) return 0;
        if (size==1) return nums[x];
        nums[x+1]=max(nums[x],nums[x+1]);
        for (int i=x+2;i<y+1;i++)
        {
            nums[i]=max(nums[i-1], nums[i-2] + nums[i]);
        }
        return nums[y];
    }    

    int rob(vector<int>& nums) {
        int size=nums.size();
        if (size==0) return 0;
        if (size==1) return nums[0];
        return max(robrob(nums,0,size-2), robrob(nums,1,size-1));
    }
};