/* 
Program to print a pattern ("+") of given number in rows and columns
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int s;
    cin >> s; cin.ignore();
    
    for(int i=0;i<s;i++){
     for(int j=0;j<s;j++){
         cout<<"+";
     }
     cout<<endl;
        
     
    }
}