class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        if(n == 0) return n;
        uint32_t res = 0;
        for(int i = 31; i >= 0; i--) {
            if((1<<i)&n) res += (1<<(31 - i));
        }
        return res;
    }

    uint32_t reverseBits(uint32_t n) {
        queue<int> x;
        for (int i=0;i<32;i++)
        {
            x.push(n & 1);
            n >>= 1;
        }
        uint32_t res=0;
        for (int i=0;i<32;i++)
        {
            res <<=1;
            res +=x.front();
            x.pop();
        }
        return res;
    }
};