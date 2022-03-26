/* A C++ Code to find the Arithmetic Mean
   of given two numbers.
   -Shreyash Saripalli
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cin >> n; cin.ignore();
    int num[n];
    for (int i = 0; i < n; i++) {
        
        cin >> num[i]; cin.ignore();
    }
      
    double am;
    double sum =0;
    for(int j=0;j<n;j++){
        sum = sum + num[j];
    }
     am = sum/n;
     
    cout<<am<<endl;


  
}
