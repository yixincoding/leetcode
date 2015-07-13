class Solution {
public:
    int numTrees(int n) {
        if (n<3) return n;
        int *f=new int [n+1];
        for (int i=0;i<n+1;i++) f[i]=0;
        f[1]=1;f[2]=2;f[3]=5;f[0]=1;
        for (int i=4;i<n+1;i++)
        {
            for (int j=0;j<i;j++)
            {
                f[i]+=f[j]*f[i-j-1];       
            }
        }
        int res=f[n];
        delete [] f;
        return res;
    }
};