#include <iostream>
#include<string>
using namespace std;

int main(){
	int best = 1;
	int k =1;
	string n;
	cin>>n;
	
	for (int i = 0;i<n.length()-1;i++){
		if (n[i] == n[i+1]){
			k++;
			if(k>best){
				best =k;
			}
		}else{
			k=1;
			if(k>best){
				best =k;}
		}
		
	}
	cout<<best;
}
