/*Pattern
1
6  2
10 7  3
13 11 8  4
15 14 12 9  5
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int ans=i;
		for(int j=1;j<i;j++)
			ans+=n-j;
		for(int j=1;j<i;j++)
		{
			cout<<ans<<"\t";
			ans-=n+j-i;
		}
		cout<<i<<endl;
	}
	return 0;
}

