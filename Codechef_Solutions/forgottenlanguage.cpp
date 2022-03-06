#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k,counter=0; cin>>n>>k;
		string s[n];
		
		{
			cin>>s[i];
		}
		while(k--)
		{
			int a;cin>>a;
			string s1;
			for(int i=0;i<a;i++)
			{
				cin>>s1;
				for(int j=0;j<n;j++)
				{
					if(s1==s[j])
					counter++;
				}
			}
			cout<<counter<<" ";
		}
	}
	return 0;
}