#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool onSame(string x){
    for(int i=0;i<x.size()-1;i++){
        if(x[i]==x[i+1]) return false;
    }
    return true;
}
bool containNumber(string x){
    return (x.find("0") != string::npos
            || x.find("1") != string::npos
            || x.find("2") != string::npos
            || x.find("3") != string::npos
            || x.find("4") != string::npos
            || x.find("5") != string::npos
            || x.find("6") != string::npos
            || x.find("7") != string::npos
            || x.find("8") != string::npos
            || x.find("9") != string::npos ? true:false);
}
bool containVowel(string x){
    return ( x.find("a") != std::string::npos || x.find("A") != std::string::npos
            || x.find("e") != std::string::npos || x.find("E") != std::string::npos
            || x.find("i") != std::string::npos || x.find("I") != std::string::npos
            || x.find("o") != std::string::npos || x.find("O") != std::string::npos
            || x.find("u") != std::string::npos || x.find("U") != std::string::npos ? true:false);

}
int main()
{
//    ios_base::sync_with_stdio(0);
    int n;cin>>n;
    string pw;cin>>pw;
    if(n<12){
        cout << "INSEGURO";return 0;
    }
    if(onSame(pw) && containNumber(pw) && containVowel(pw) ) cout << "SEGURO";
    else cout << "INSEGURO";
}
