#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,b,m;
		cin>>n>>b>>m;
		long long min,sp,ans,sum=0;
		while(n>0){
			if(n%2==0){
				sp=n/2;		//4/2=2
				min=sp*m;	//2*4=8
				ans=min+b;	//8+1=9
				sum+=ans;
				n-=sp;
				m*=2;
			}
			else if(n%2!=0){
				sp=(n+1)/2;		//5
				min=sp*m;		//5*2=10
				if(sp==1){
					ans=min;
				}
				else{
					ans=min+b;
				}
				sum+=ans;
				n-=sp;			//9-5=4
				m*=2;			//2*2=4
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
