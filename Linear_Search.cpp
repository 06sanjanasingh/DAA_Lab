#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,key,c=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>key;
		for(i=0;i<n;i++)
		{
	                  c++;
	                  if(arr[i]==key)
	                    break;
		}
		if(i!=n)
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
