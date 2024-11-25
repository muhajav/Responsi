#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

	int n=5;
    ll factorial=1;

	if(n==0)
	{
		cout<<"0! = "<<1<<'\n';
	}
	else {

		for(int i=1; i<=n; i++)
		{
			factorial*=i;
		}
	}

    if(n==5&&factorial==120) cout<<"SUCCESSFUL"<<'\n';
    else cout<<"UNSUCCESSFUL"<<'\n';
	
}