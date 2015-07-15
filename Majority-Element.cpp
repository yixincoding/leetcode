class Solution {
public:
    /* divide and conquer -- not right */
    // int count (vector<int> &nums, int t)
    // {
    //     int res=0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         res += (nums[i]==t);
    //     }
    //     return res;
    // }

    // int majorrr(vector<int> &nums, int l, int r)
    // {
    //     if (l==r) return nums[l];
    //     int mid=(l+r)>>1;
    //     int ml = majorrr(nums, l, mid);
    //     int mr = majorrr(nums, mid+1, r);
    //     if (ml == mr) return nums[ml];
    //     else
    //     {
    //         return count(nums, ml) > count(nums, mr)? ml : mr;
    //     }
        
    // }
    

    // int majorityElement(vector<int>& nums){
    //     return majorrr(nums, 0, nums.size()-1);
    // }

    /*16ms */
    int majorityElement(vector<int>& nums) {
        int major, counts = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (!counts) {
                major = nums[i];
                counts = 1;
            }
            else counts += (nums[i] == major) ? 1 : -1;
        }
        return major;
    }

    /* 32ms */
    // int majorityElement(vector<int>& nums){
    //     int s=nums.size();
    //     int count[50]={0};
    //     int res=0,t=1;
    //     for (int i=0;i<32;i++)
    //     {
    //         for (int j=0;j<s;j++)
    //         {
    //             count[i] += (nums[j]>>i) & 1;
    //         }
    //         if (count[i] > s/2) res+=t;
    //         t *= 2;
    //     }
    //     return res;
    // }

/* shitty 36ms */
//     int majorityElement(vector<int>& nums) {

//  std::map<int, int> m;
//  for (int i=0;i<nums.size();i++){
//      m[nums[i]]++;
//      if (m[nums[i]] > nums.size()/2) return nums[i];
//  }
// }
};