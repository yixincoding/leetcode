class Solution {
public:
    void swap (int &x, int &y)
    {
        int t=x;x=y;y=t;
    }
    void sortColors(vector<int>& nums) {
        int s=nums.size();
        if (s==0) return;
        int lp=0, rp=s-1;
        while (lp < rp)
        {
            if (nums[lp] == 2 && nums[rp]==0)
            {
                swap(nums[lp], nums[rp]);
            }
            if (nums[lp] != 2) lp++;
            if (nums[rp] != 0) rp--;
        }
        lp=0;rp=s-1;
        while (lp<rp)
        {
            if (nums[lp] == 1 && nums[rp]==0)
            {
                swap(nums[lp], nums[rp]);
            }
            if (nums[lp] != 1) lp++;
            if (nums[rp] != 0) rp--;
        }
        lp=0;rp=s-1;
        while (lp < rp)
        {
            if (nums[lp] == 2 && nums[rp]==1)
            {
                swap(nums[lp], nums[rp]);
            }
            if (nums[lp] != 2) lp++;
            if (nums[rp] != 1) rp--;
        }
    }
};