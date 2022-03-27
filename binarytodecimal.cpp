/* To convert a binary number to a decimal number */


#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int convert(long n){
     
	 int decimal =0;
	 int rem;
	 int i =0;
	 while(n!=0){
		 rem = n%10;
		 n = n/10;
		 decimal = decimal + rem*pow(2,i);
		 i++;
	 }
	 return decimal;
}

int main() {
	
	long n;
	cout<<"Enter the binary number : "<<endl;
	cin>>n;
	cout<<"The binary number is: "<<n<<endl;

	cout<<"The decimal number is: "<<convert(n)<<endl;

   
}