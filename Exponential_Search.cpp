#include<iostream>
using namespace std;
int linearSearch(int arr[],int l,int h,int key,int *c)
{
	for(int i=l;i<=h;i++)
	{
		(*c)++;
		if(arr[i]==key)
		  return 1;
	}
	return 0;
}
int newSearch(int arr[],int n,int key,int *c)
{
	int i=2,k=0;
	(*c)++;
	if(arr[0]==key)
	   return 1;
	while(i<n)
	{
		(*c)++;
		if(arr[i]>key){
		(*c)++;
		break;
	}
	     
	   i=i*2;
}
return linearSearch(arr,i/2,min(i,n-1),key,c);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,key,c=0,k;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>key;
		k=newSearch(arr,n,key,&c);
		if(k==1)
		{
			cout<<"PRESENT ";
		}
		else
		{
			cout<<"NOT PRESENT ";
		}
		cout<<c;
	}
	return 0;
}
