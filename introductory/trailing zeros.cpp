#include <iostream>

using namespace std;
int main(){
	long long n, count=0;
	cin>>n;
	while (n>=5){
		count += n/5;
		n /= 5;
	}
	cout<<count;
}
