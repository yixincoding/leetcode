class Solution {
public:
    
    /* 36ms random */
    /*
    int count(vector<int> &nums, int x)
    {
        int res=0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i] == x) res++;
        }
        return res;
    }
    vector<int> majorityElement(vector<int>& nums) {
        int size=nums.size();
        vector<int> res;res.clear();
        if (size==0) return res;
        srand (time(NULL));
        int p=-1;
        int index=size;
        while (index > 0)
        {
            int tmp = rand() % size;
            if (p!=-1)
            {
                while (nums[tmp] == nums[p]) tmp = rand() % size;
            }
            int s = count (nums, nums[tmp]);
            if (s> (size/3) ) 
            {
                res.push_back(nums[tmp]);
                if (s> (size*2/3) || p!=-1) return res;
                p=tmp;
            }
            index -- ;
        }
    }
    */
    
    
    /* Boyer-Moore majority vote algorithm 24ms */
    
    int count(vector<int> &nums, int x)
    {
        int res=0;
        for (int i=0;i<nums.size();i++)
        {
            res+=(nums[i]==x);
        }
        return res;
    }
    
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;res.clear();
        int size=nums.size();
        if (size==0) return res;
        int c1=0,c2=0,p=0,q=0;
        for (int i=0;i<size;i++)
        {
            if (c1==0 || nums[i] == nums[p])
            {
                c1 += 1;
                p=i;
            }
            else
            {
                if (c2==0 || nums[i] == nums[q])
                {
                    c2 += 1;
                    q=i;
                }
                else
                {
                    if (nums[i] != nums[p] && nums[i] != nums[q])
                    {
                        c1 --;
                        c2 --;
                    }       
                }
            }
        }
        if (count(nums, nums[p]) > size/3) res.push_back(nums[p]);
        if (nums[q] != nums[p] && count(nums, nums[q]) > size/3) res.push_back(nums[q]);
        return res;
    }
    
    
    /* 40ms, last for cpp */
    /*
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;res.clear();
        int size=nums.size();
        if (size==0) return res;
        sort(nums.begin(), nums.end());
        int p=size/3, q=size*2/3;
        int cp=0,cq=0;
        for(int i=0;i<size;i++)
        {
            if (nums[i] == nums[p]) cp++;
            if (nums[i] == nums[q]) cq++;
        }
        if (cp > size/3) res.push_back(nums[p]);
        if (cq > size/3 && nums[p] != nums[q]) res.push_back(nums[q]);
        return res;
    }
    */
};