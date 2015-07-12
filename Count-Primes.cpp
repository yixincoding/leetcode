#include <iostream>
#include <array>
#include <cmath>
using namespace std;

int countPrimes(int n) {
    if (n<2) return 0;
    int *f=new int [n];
    for (int i = 0; i < n; ++i)
    {
        f[i]=0;
    }
    int res=n-2;
    for (int i=2;i<sqrt(n)+1;i++)
    {
        if (f[i]==1) continue;
        for (int j=i*i;j<n;j+=i)
        {
            if (f[j]==0)
                res--;f[j]=1;
        }
    }
    // for (int i=2;i<n;i++)
    // {
    //     for (int j=2;j<sqrt(i);j++)
    //     {
    //      if (f[j]==1) continue;
    //         if (i % j == 0 && f[i]==0) 
    //         {
    //             f[i]=1; res--;
    //             break;
    //         }
    //     }
    // }
    delete [] f;
    return res;
}

int main(int argc, char const *argv[])
{
	cout << countPrimes(13)<<endl;
	return 0;
}