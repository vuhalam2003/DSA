#include <iostream>
using namespace std;

int main(){
	long long n;
	long long x;
	long long sum = 0;
	sum = 0;
	cin>>n;
	int i =n-1;
	while (i){
		cin>>x;
		cout<<"\t";
		sum = sum + x;
		i-=1;
	}
	cout<< n*(n+1)/2 - sum;
}
