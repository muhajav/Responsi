#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

	int n;
	cout<<"n: ";
	cin>>n;

	if(n==0)
	{
		cout<<"0! = "<<1<<'\n';
	}
	else {
		ll factorial=1;

		for(int i=1; i<=n; i++)
		{
			factorial*=i;
		}

		cout<<n<<"! = "<<factorial<<'\n';
	}
	
}
