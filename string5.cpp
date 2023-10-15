/*scan array of n integers from user.Define function search to search a number in
array.Define function remove() to remove searched number from array.*/

#include<iostream>
using namespace std;

int search(int * p,int x,int n)
{
	for(int i=0;i<n;i++)
	{
		if(*(p+i)==x)
		{
			return 1;
		}
	}
}

void remove(int * p,int x,int n)
{
	int i;
	for( i=0;i<n;i++)
	{
		if(*(p+i)==x)
		break;
		
		for(int j=i+1;j<=n;j++)
		{
			if(i<n)
			{
//				p[i]=p[j];
				*(p+i)=*(p+j);
			}
    	}
    }
//    p[i]=0;
}

int main()
{
	int n;
	cout<<"\n Enter number of elements : ";
	cin>>n;
	int * p;
	p=new int[n];
	cout<<"\n Enter elements for array : ";
	for(int i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	int x;
	cout<<"\n Enter number to search : ";
	cin>>x;
	if(search(p,x,n)==1)
	{
		cout<<"\n Number is found ";
	}
	else
	{
		cout<<"\n Number is not found ";
	}
	
	remove(p,x,n);
	cout<<"\n After Removing number which you search : ";
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i);
	}
	return 0;
}

