#include <iostream>
#include <algorithm>

#define MAXN 1000000

using namespace std;

int N, K, a[MAXN];

int main(){
	int ans = -(1<<25);

    cin>>N>>K;
	for (int i = 0; i < N; i++)
		cin>>a[i];

	for (int i = K-1; i < N; i++)
		ans = max(ans, a[i] - a[i-K+1]);

	cout << ans;
}
