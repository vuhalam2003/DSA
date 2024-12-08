#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(){
	string n;
	cin>>n;
	map<char, long long> m;
	int odd_count = 0;
	
	for (long long i = 0; i < n.length(); i++)
	{
		m[n[i]]++;
	}
	
	for (auto &c : m)
	{
		if (c.second%2 == 1){
			odd_count++;
		}
		if (odd_count>1)
		{
			cout<<"NO SOLUTION";
			return 0;
		}
	}
	
	for (auto &c : m)
	{
		if (c.second%2==0 && c.second!=0)
		{
			cout<< string(c.second/2, c.first);
		}
	}
	for (auto &c : m)
	{
		if (c.second%2==1 && c.second!=0)
		{
			cout<< string(c.second, c.first);
		}
	}
	for (auto c = m.rbegin(); c != m.rend(); ++c) {
		if (c->second%2==0){
			cout<< string(c->second/2, c->first);
		}
    }
}
