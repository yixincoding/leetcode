#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int compareVersion(string version1, string version2) {
	if (version1 == "") 
	{
		if (version2 == "") return 0;
		else return -1;
	}
	if (version2 == "") return 1; 
	int l1=version1.length(),l2=version2.length();
	char *p = new char [l1], *q = new char [l2];
	strcpy ( p, version1.c_str()); strcpy (q, version2.c_str());

	int *t1 = new int [l1], *t2 = new int [l2];

	int index=0;
	char *tmp;
	tmp = strtok(p, ".");
	while (tmp!=NULL) 
	{
		t1[index++] = atoi(tmp);
		tmp = strtok(NULL, ".");
	}
	int len1=index;
	index=0;
	tmp = strtok(q, ".");
	while (tmp!=NULL)
	{
		t2[index++] = atoi(tmp);
		tmp = strtok(NULL, ".");
	}
	int len2 = index;

	index=0;
	while (index < len1 && index < len2)
	{
		if (t1[index]<t2[index]) return -1;
		if (t1[index]>t2[index]) return 1;
		index++;
	}
	if (len1 < len2)
	{
		for (int i = len1; i < len2; ++i)
		{
			if (t2[i]!=0) return -1;
		}
		return 0;
	}
	if (len1 > len2)
	{
		for (int i = len2; i<len1; i++)
		{
			if (t1[i]!=0) return 1;
		}
		return 0;
	}
	return 0;
}
int main()
{
	cout << compareVersion("15.2.4","13.14.0")<<endl;
	return 0;
}