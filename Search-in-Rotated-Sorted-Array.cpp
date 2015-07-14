#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target)
{
    int s=nums.size();
    if (s==0) return -1;
    if (s==1) return (nums[0]==target)-1;
    int l=0, r=s-1;
    while (l<r)
    {
        int mid = (l+r) >> 1;
        if (nums[mid] == target) return mid;
        if (nums[l] == target) return l;
        if (nums[r] == target) return r;
        if (nums[mid] > nums[r])
        {
            if (nums[mid] < target) l=mid+1;
            else
            {
                if (nums[l] < target) r=mid-1;
                else l=mid+1;
            }
        }
        else
        {
            if (nums[mid] > target) r=mid-1;
            else 
            {
                if (nums[r] > target) l=mid+1;
                else r= mid -1;
            }
        }
    }
    return -1;
}

int main()
{
    int a[100]={4,5,6,7,8,0,1,2};
    std::vector<int> v;
    for (int i = 0; i < 8; ++i)
    {
        v.push_back(a[i]);
    }
    cout << search(v, 8)<<endl;
    return 0;
}