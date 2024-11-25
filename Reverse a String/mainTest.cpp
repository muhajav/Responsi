#include <bits/stdc++.h>
using namespace std;

int main() {

	string s = "javier";

	vector<char> reverseString;

	for(int i=(int)s.length()-1; i>=0; i--)
	{
		reverseString.push_back(s[i]);
	}

	int l=0;
	int r=5;
	while(l<=r)
	{
		if(s[r]!=reverseString[l])
		{
			cout<<"UNSUCCESSFUL"<<'\n';
			return 0;
		}
		l++;
		r--;
	}

	cout<<"SUCCESSFUL"<<'\n';

}