#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,key,mid,c=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>key;
		int l=0,h=n-1,p=0;
		while(l<=h)
		{
	                mid=(l+h)/2;
	                c++;
	                if(arr[mid]==key)
	                {
		    p=6;
	                break;
	   }
	                else if(arr[mid]<key)
	                {
	                	l=mid+1;
		   }
		   else
		   {
		   	h=mid-1;
		   }
		}
		if(p==6)
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
