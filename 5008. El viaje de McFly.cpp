#include <bits/stdc++.h>
#define M_PI  3.14159265358979323846
using namespace std;


int main(){
	unsigned long long n;cin>>n;
	unsigned long long sum=1;
	for(int i=1;i<=n;i++){
		sum+=sum;
		if(sum>n){
			cout << i-1;
			return 0;
		}
		else if(sum==n){
			cout << i;
			return 0;
		}
	}	
	
}
