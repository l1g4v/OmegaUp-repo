#include <bits/stdc++.h>
using namespace std;
bool isPal(string x){
	string y (x);
	std::for_each(y.begin(), y.end(), [](char & c){
		c = ::toupper(c);
	});
	string z(y);
	std::reverse(z.begin(),z.end());
	for(int i=0;i<y.size();i++) if(y[i]!=z[i]) return false;
	return true;
}

bool isCPal(string x){
	string y(x);
	std::reverse(y.begin(),y.end());
	for(int i=0;i<y.size();i++) if(y[i]!=x[i]) return false;
	return true;
}
int main() {
	int n;cin>>n;
	vector<string> complete;
	vector<string> partial;
	for(int i=0;i<n;i++){
		string x;cin>>x;
		if(!isPal(x)) continue;
		if(isCPal(x)) complete.push_back(x);
		else partial.push_back(x);
	}
	cout << "\n*PALINDROMOS COMPLETOS*\n";
	if(complete.size()>0)
	for(string x:complete) cout << x << '\n';
	else cout << -1;
	
	cout << "\n*PALINDROMOS PARCIALES*\n";
	if(partial.size()>0)
	for(string x:partial) cout << x << '\n';
	else cout << -1;
}
