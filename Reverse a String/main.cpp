#include <bits/stdc++.h>
using namespace std;

int main() {

	string s;

	cout<<"Please Input a string: ";
	cin>>s;

	vector<char> reverseString;

	for(int i=(int)s.length()-1; i>=0; i--)
	{
		reverseString.push_back(s[i]);
	}
	cout<<"Reversing string: ";

	for(auto i:reverseString) cout<<i;
	cout<<'\n';

}
