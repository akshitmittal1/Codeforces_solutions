#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		int queries;
		cin>>queries;
		int array[queries] = {0};
		int pos=-1;
		for (int j=0; j<queries; j++)
		{
			cin>>array[j];
			if(array[j]==1) pos=j;
		}
		bool left = true;
		bool right = true;
		
		for (int j=0; j<queries; j++)
		{
			right &= (array[(j+pos+queries)% queries] == j+1);
			left &= (array[(pos-j+queries)%queries] == j+1);
		}
		
		if (left || right) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	}
	return 0;
}

