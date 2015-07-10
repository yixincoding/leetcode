#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stdlib.h>

using namespace std;
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.empty()) return res;
        int size=nums.size();
        int begin=0;
        for (int i=1;i<size;i++)
        {
            if (nums[i] == nums[i-1]+1) continue;
            else
            {
                if (begin == i-1) res.push_back(to_string(nums[begin]));
                else res.push_back(to_string(nums[begin])+"->"+to_string(nums[i-1]));
                begin=i;
            }
        }
        if (begin == size-1) res.push_back(to_string(nums[size-1]));
        else
            res.push_back(to_string(nums[begin])+"->"+to_string(nums[size-1]));
        return res;
    }

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	int a[100]={0,1,2,4,5,7};
	for (int i = 0; i < 6; ++i)
	{
		v.push_back(a[i]);
	}
	std::vector<string> res = summaryRanges(v);
	for (int i = 0; i < res.size(); ++i)
	{
		cout << res[i]<<endl;
	}
	return 0;
}