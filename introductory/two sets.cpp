#include <iostream>
#include <set>
#include <map>
#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	set<long long> set1, set2;
	cin>>n;
	long long a =n*(n+1)/2;
	std::set<long long>::iterator it;

	if(a%2==1){
		cout<<"NO";
	}else{
		cout<<"YES\n";
		a = a/2;
		while (a > n){
			a = a - n;
			set1.insert(n);
			n--;
		}
		set1.insert(a);
		cout<<set1.size()<<"\n";
		for(it = set1.begin(); it != set1.end(); it++){
			cout<<*it<<" ";
		}
		for (long long i =1;i<=n;i++){
			if(set1.count(i) == 0){
				set2.insert(i);
			}			
		}
		cout<<"\n"<<set2.size()<<"\n";
		for(it = set2.begin(); it != set2.end(); it++){
			cout<<*it<<" ";
		}
		}
		return 0;
}

