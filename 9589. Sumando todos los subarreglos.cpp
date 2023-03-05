#include <bits/stdc++.h>
using namespace std;

int bro(int arr[], int n, int k) 
{ 

    int res = 0; 
    for (int i=0; i<k; i++) 
       res += arr[i]; 
       
    int curr_sum = res; 
    cout << curr_sum << ' ';
    for (int i=k; i<n; i++) 
    { 
       curr_sum += arr[i] - arr[i-k]; 
       cout << curr_sum << ' ';//res = max(res, curr_sum); 
    } 
  
    return res; 
} 

int main(){
	ios_base::sync_with_stdio(0);
	int n,k;cin>>n>>k;
	
	if(n==k){
		int sum=0;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			sum+=x;
		}
		cout << sum;
		return 0;
		
	}

	int arr[1000000];
	for(int i=0;i<n;i++) cin>>arr[i];			
	bro(arr,n,k);	
	return 0;

	
	
		
	
}
