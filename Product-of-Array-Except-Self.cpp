#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int s=nums.size();
        for (int i=0;i<s;i++) res.push_back(0);
        if (s==0) return res;
        long long *lp = new long long [s];
        long long *rp = new long long [s];
        for (int i=0; i<s;i++) {lp[i]=1;rp[i]=1;}
        lp[0]=nums[0],rp[s-1]=nums[s-1];
        for (int i=1;i<s-1;i++)
        {
            lp[i] = lp[i-1] * nums[i];
            rp[s-i-1] = rp[s-i] * nums[s-i-1];
        }
        res[0]=rp[1];
        res[s-1]=lp[s-2];
        for (int i=1;i<s-1;i++)
        {
            res[i] = lp[i-1] * rp[i+1];
        }
        return res;
    }

int main()
{
    int a[100]={0,0};
    std::vector<int> v;
    for (int i = 0; i < 2; ++i)
    {
        v.push_back(a[i]);
    }
    productExceptSelf(v);
    return 0;
}