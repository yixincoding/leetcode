#include <iostream>
using namespace std;

int trailingZeroes(int n) {
    if (n<5) return 0;
    long long res=0;
    int m=n;
    if (n!=INT_MAX) m++;
    for (long long i=5;i<m;i*=5)
    {
        res += n/i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
	cout << trailingZeroes(1808548329)<<endl;
	return 0;
}