#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long n;
	long steps=0;
	cin>>n;
	long long v_old, v_new;
	cin>>v_old;
	cout<<" ";
	for (int i =0;i<n-1;i++){
		cin>>v_new;
		if(v_old>v_new){
			steps = steps+v_old-v_new;
		}else{
			v_old=v_new;
		}
	}
	cout<<steps;
}
