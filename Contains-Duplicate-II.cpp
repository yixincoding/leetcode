#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++){
        if(m.find(nums[i])!=m.end()&&m[nums[i]]>=i-k)
            return true;    
        m[nums[i]]=i;
    }
    return false;
    
}
    // bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     map<int, int> res;
    //     map<int, int>::iterator it;
    //     int size=nums.size();
    //     if (size<2) return false;
    //     for (int i=0;i<size;i++)
    //     {
    //       it=res.find(nums[i]);
    //       if (it !=res.end())
    //       {
    //           if (it->second + k >= i) return true;
    //           else
    //               it->second = i; 
    //       }
    //       else
    //       {
    //           res[nums[i]] = i;
    //       }
    //     }
    //     return false;
    // }

int main(int argc, char const *argv[])
{
    std::vector<int> v;
    v.push_back(99);
    v.push_back(99);
    cout <<containsNearbyDuplicate(v,2)<<endl;
    return 0;
}
