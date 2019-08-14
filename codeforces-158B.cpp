#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	int array[4] ={0};
	for (int i=0; i<n; i++)
	{
		int group;
		cin>>group;
		array[group-1]++;
	}

	int count =0;
	count+=array[3];
	count+= array[1]/2;
	int rem = array[1]%2;
	if (array[0]>array[2])
	{
		count+= array[2];
		array[0]-= array[2];
		count+= array[0]/4;
		if (array[0]%4>2 && rem>0) count+=2;
		else if (array[0]%4==0 && rem==0) count+=0;
		else count+=1;
	}
	else if (array[2]>=array[0])
	{
		count += array[0];
		array[2] -= array[0];
		count+= rem;
		count+= array[2];
	}
	
	cout<<count<<endl;
	return 0;
}

