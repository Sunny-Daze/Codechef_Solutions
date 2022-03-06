#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;cin>>x;
	while(x--){
		string P;
		int count0(0),count1(0);
		cin>>P;
		for (int i = 0; i < P.length(); ++i)
		{
			if(P[i] == '0')
				count0++;
			else
				count1++;
		}
		 
		if(count0 == 1 || count1 == 1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

	}
	return 0;
}