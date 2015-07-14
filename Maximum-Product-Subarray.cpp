class Solution {
public:
int func(vector<int> v, int p){
    int s=v.size();
    if (s==0) return 0;
    if (s==1) return v[0];
    int res=0;
    if (p>0) return p;
    int t1=p, t2=p;
    for (int i=0;i<s;i++)
    {
        t1 /= v[i];
        if (t1>0) break;
    }
    for (int i=s-1;i>=0;i--)
    {
        t2 /=v[i];
        if (t2>0) break;
    }
    return max(t1,t2);

}

int maxProduct(vector<int>& nums) {
    int s=nums.size();
    if (s==0) return 0;
    if (s==1) return nums[0];
    int j=0, res=0, pro=1;
    while (nums[j]==0) j++;
    std::vector<int> v;
    for(int i=j;i<s;i++)
    {
        if (nums[i] != 0) 
        {
            v.push_back(nums[i]);
            pro *= nums[i];
        }
        else
        {
            res = max(res, func(v, pro));
            v.clear();
            pro=1;
        } 
        if (i==s-1)
        {
            res = max(res, func(v, pro));
        }
    }
    return res;
}
};