/* To check if the given three numbers form a pythogorean triplet */

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int check(int x,int y,int z){
	
	int a=max(x,max(y,z));
	int b;
	int c;
	if(a==x){
		b=y;
		c=z;
	}
	else if(a==y){
		b=x;
		c=z;
	}
	else{
		b=x;
		c=y;
	}
	if(pow(a,2)==pow(b,2)+pow(c,2)){
		return true;
	}
	else{
		return false;
	}
}

int main() {
	//To check if the given numbers are a pythogorean triplet
	int x,y,z;
	cin>>x>>y>>z;
	if(check(x,y,z)){
		cout<<"It is a pythogorean triplet";
	}
	else{
		cout<<"Not a pythogorean triplet";
	}
}