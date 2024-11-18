#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long n, y, x;
	vector<long long> save;
	cin>>n;
	while(n){
		cin>>y;
		cin>>x;
		if(y>x){
			if (y%2==0){
				save.push_back(y*y-(x-1));
			}else{
				save.push_back((y-1)*(y-1)+x);
			}
		} else if (x>y){
			if (x%2==0){
				save.push_back((x-1)*(x-1)+y);
			}else{
				save.push_back(x*x-(y-1));
			}
		} else{
			save.push_back(x*x-(x-1));
		}
		n--;
	}
	for (int i = 0; i<save.size(); i++){
		cout<<save[i]<<"\n";
	}
}
