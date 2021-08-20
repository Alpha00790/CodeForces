#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
int table[3][2]={{1,0},{1,2},{2,2}};
int state=0,check=1,i;
getline(cin,str);
	for(i=0;i<str.length();i++)
	{
		if(str[i]=='0')
		state=table[state][0];
		else if(str[i]=='1')
		state=table[state][1];
		else
		check=0;
	}
	if(state==2&&check==1)
	printf("The String is accepted.");
	else
	printf("\nThe String is not accepted.");
}
