class Solution {
public:
    //O(1) space

    void swap(int &x, int &y)
    {
        int t=x;x=y;y=t;
    }
    
    void r_arr(vector<int>& nums, int l, int r)
    {
        int mid=(l+r)>>1;
        for (int i=l;i<mid;i++)
        {
            swap(nums[i], nums[l+r-i-1]);
        }
    }

    void rotate(vector<int>& nums, int k){
        int n=nums.size();
        if (n<2 || k % n==0) return;
        k %= n;
        k = n-k;
        r_arr(nums, 0, k);
        r_arr(nums, k, n);
        r_arr(nums, 0, n);
        return;
    }

    // O(n) space
    // void rotate(vector<int>& nums, int k) {
    //     vector<int> res;
    //     int size=nums.size();
    //     if (size<2 || k % size == 0) return;
    //     k %= size;
    //     for(int i=0; i<size;i++)
    //     {
    //         res.push_back( nums[(i-k+size) % size] );
    //     }
    //     nums = res;
    //     return ;
    // }
};