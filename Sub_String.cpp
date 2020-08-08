#include<iostream>
#include<string>
using namespace std;
int find_substring(string s1,string s2)
{
	int i,j,len1=s1.length(),len2=s2.length();
	for(i=0;i<=len1-len2;i++)
	{
		if(s1[i]==s2[0])
		{
			for(j=0;j<len2;j++)
			{
				if(s1[i+j]!=s2[j])
				{
					break;
				}
			}
			if(j==len2)
			{
				return i;
			}
		}
	}
	return -1;
}
int main()
{
	string s1,s2;
	cout<<"Enter the first string\n";
	getline(cin,s1);
	cout<<"enter the substring\n";
	getline(cin,s2);
	int ans=find_substring(s1,s2);
	if(ans!=-1)
	{
		cout<<"string found at position "<<ans+1;
	}	
	else cout<<"Not found";
}
