#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > sub_matrix(vector<vector<int> > v,int len,int y)
{
	vector<vector<int> > temp;
	vector<int> row;
	for(int i=1;i<len;i++)
	{	
		row.clear();
		for(int j=0;j<len;j++)
		{
			if(j==y)continue;
			else
			{
				row.push_back(v[i][j]);
			}
		}
		temp.push_back(row);
	}
	return temp;
}
int det(vector<vector<int> > v,int len)
{
	int ans=0;
	if(len==2)
	{
		ans=(v[0][0]*v[1][1])-(v[0][1]*v[1][0]);
	}
	else if(len>2)
	{
		int t=0;
		for(int i=0;i<len;i++)
		{
			if(i%2==0)t=1;
			else t=-1;
			ans+=t*v[0][i]*det(sub_matrix(v,len,i),len-1);
		}
	}
	return ans;
}
int main()
{
	int n,temp;
	vector<int> row;
	vector<vector<int> > v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		row.clear();
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			row.push_back(temp);
		}
		v.push_back(row);
	}
	cout<<det(v,n);
	return 0;
}
