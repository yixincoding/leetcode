#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string convertToTitle(int n) {
        string res="";
        while (n > 0) 
        {
        	if (n%26==0){
        		res += 'Z';
        		n /= 26;
        		n--;
        	}
        	else
        	{
	            res += (char)( n % 26 + 'A' -1);
	            n /= 26;
        	}
        }
        int len = res.length();
        for (int i=0;i<len/2;i++)
        {
            char tmp = res[i];
            res[i]=res[len-i-1];
            res[len-i-1] = tmp;
        }
        return res;
    }

int main()
{
	for (int i = 0; i < 55; ++i)
	{
		cout << convertToTitle(i)<<' ';
		if (i%26==0) cout <<endl;
	}
}