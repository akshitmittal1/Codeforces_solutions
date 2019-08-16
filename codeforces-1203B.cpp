#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin>>q;
	for (int i=0; i<q; i++)
	{
		int n;
		cin>>n;
		long long int array[4*n] = {0};
		for (int j=0; j<4*n; j++)
		{
			cin>>array[j];
		}
		int s = sizeof(array)/sizeof(array[0]);
		sort(array, array+s);
	
		bool flag = true;
		
		for(int j=0; j<2*n; j++)
		{
			if (array[2*j] != array[2*j+1]) flag=false;
		}
		
		if(flag)
		{
			long long int area = array[0]*array[4*n-1];
			for(int j=0; j<2*n; j++)
			{
				if ( array[2*j]*array[2*(2*n-j)-1] != area) 
				{
					
				flag=false;
				break;}
			}
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

