/* To check if a number is prime or composite */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n;
	cout<<"Enter the number: ";
	cout<<endl;
	cin>>n;
	int flag=0;
	
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Composite"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0){
           cout<<"Prime"<<endl;
	}
	

}