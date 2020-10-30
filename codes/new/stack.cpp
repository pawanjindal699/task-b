#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	stack<int> s;
	int min=1000000000;
	int x;
	int y;
	while(cin>>x)
	{
		s.push(x);
		if(s.top<min)
			min=s.top;
	}
	cout<<min<<endl;
}
