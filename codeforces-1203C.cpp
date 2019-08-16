#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int a[n] = {0};
	long long int g=0;
	for (long long int i=0; i<n; i++)
	{
		cin>>a[i];
		g = __gcd(g,a[i]);
	}
	
	long long int count=0;
	for (int i=1; i<=sqrt(g); i++)
	{
		if (g%i==0) 
		{
			count++;
			if(i != g/i)
			{
				count++;
			}
		}
		
	}
	cout<<count<<endl;
	return 0;
}

