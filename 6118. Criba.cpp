#include <bits/stdc++.h>
using namespace std;
#define MAX 1000002
bool prime[MAX];
void docr(){
	for(int i=2;i<MAX;i++){
		if(!prime[i]){
			for(int j=i+i;j<MAX;j+=i){
				prime[j]=true;
			}
		}
	}
}
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		docr();
		int t;
		cin>>t;
		while(t--){
			int x;
			cin>>x;
			if(!prime[x])cout <<"SI\n";
			else cout <<"NO\n";
		}
	}
