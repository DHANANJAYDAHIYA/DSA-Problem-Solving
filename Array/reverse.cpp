#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}
string reverseWord(string str){
    for(int i= 0; i<str.length()/2; i++)
    {
        char temp= str[i];
        str[i]=str[str.length()-i-1];
        str[str.length()-i-1]=temp;
    }
    return str;
}