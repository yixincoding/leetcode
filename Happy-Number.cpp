#include <iostream>
#include <map>
#include <cmath>
using namespace std;

/* 4ms */

// bool isHappy(int n) {
//         if(n == 1)
//             return true;
//         int result = 0;
//         while(1)
//         {
//             while(n < 10)
//                 n = n * n;
//             while(n > 0)
//             {
//                 result += (n%10) * (n%10);
//                 n = (n - n%10) / 10;
//             }
//             if(result == 1 || result ==7)
//                 return true;
//             else if(result < 10)  
//                 return false;
//             else
//             {
//                 n = result;
//                 result = 0;
//             }
//         }
//     }

/* 4ms */

bool isHappy(int n){
       while (true) {
            if (n == 1) { return true; }
            if (n == 4) { return false; }
            int next = 0;
            while (n) { next += (n % 10) * (n % 10), n /= 10; }
            n = next;
        } 
}

/* 32ms shity*/
// int func(int x)
// {
//     int res=0;
//     while (x>0)
//     {
//         res += pow(x%10, 2);
//         x/=10;
//     }
//     return res;
// }
// bool isHappy(int n) {
//     map<int, bool> f;
//     while(1)
//     {
//         if ( (n=func(n))==1 ) return true;
//         cout << n<<endl;
//         if (f.find(n) != f.end()) return false;
//         else f[n]=true;
//     }
//     return 0;
// }

int main()
{
    for (int i = 1; i < 10; ++i)
    {
        cout << isHappy(i)<<' ';
        /* code */
    }
    // cout <<isHappy(16)<<endl;
    return 0;
}