#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, last, first;
	cin>>n;
	int i=2;
	if(n/2==1){
		cout<<"NO SOLUTION";
		return 0;
	}
	while(i<=n){
		cout<<i<<" ";
		i+=2;
		
	}
	i=1;
	while(i<=n){
		cout<<i<<" ";
		i+=2;
	}
}
