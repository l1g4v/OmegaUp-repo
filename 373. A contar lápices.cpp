#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,k;cin>>n>>k;
	int c=0;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x==k)c++;
	}
	cout << c;
	
}
