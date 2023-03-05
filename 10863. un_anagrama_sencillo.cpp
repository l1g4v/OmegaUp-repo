#include <bits/stdc++.h>

using namespace std;


int main()
{
	string a,b,c,d;
	int x=0,y=0;
	int arr[30]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
	int ar[30]={0};
	int array[30]={0};
	cin>>a;
	cin>>b;

	if(a.length()!=b.length())
	{
		cout<<"Las cadenas tienen longitud diferente.\nOperacion Cancelada!";
		return 0;
	}

	for(int i=0;i<a.length();i++)
	{
		x=a[i];
		y=b[i];
		for(int z=0;z<27;z++)
		{
			if(x==arr[z])
			{
				ar[z]++;
			}

			if(y==arr[z])
			{
				array[z]++;
			}
		}

	}
	for(int i=0;i<27;i++)
	{
		if(ar[i]!=array[i])
		{
			cout<<"NO es un Anagrama!";
			return 0;
		}
	}
	cout<<"SI es un ANAGRAMA!";
}
