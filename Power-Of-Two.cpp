#include <iostream>
using namespace std;

    bool isPowerOfTwo(int n){
        return (n>0) && !(n&(n-1));
    }
    // bool isPowerOfTwo(int n) {
    //     if (n<1) return false;
    //     if (n==1) return true;
    //     while (n>1)
    //     {
    //         if (n & 1) return false;
    //         n >>= 1;
    //     }
    //     return true;
    // }

int main(int argc, char const *argv[])
{
	for (int i = 1; i < 30; ++i)
	{
		cout << isPowerOfTwo(i)<<' ';
		if (i % 5==0) cout <<endl;
	}
	return 0;
}