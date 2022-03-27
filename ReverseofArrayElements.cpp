/* To reverse an array from a given index*/




#include <iostream>
using namespace std;

int main(){

    cout<<" Size of array : "<<endl;
    int n;
    int num[n];
    cin>>n;
    cout<<"size of array is : "<<n<<endl;
    cout<<"enter the number for the arrays: "<<endl;
    for(int a=0;a<n;a++){
      cin>>num[a];
    }
    cout<<"Display the number ";
    for(int a=0;a<n;a++){
        cout<<num[a]<<" ";
    }
    int ind;
    cout<<endl;
    cout<<"the position to be reversed = "<<endl;
    cin>>ind;
    cout<<"the postion to be reversed is "<<ind<<endl;
    cout<<"the new array is : "<<endl;
    

    int y=ind-1;
    for( y;y>=0;y--){
        cout<<num[y]<<" ";
    }
    for(int x=ind;x<n;x++){
        cout<< num[x]<<" ";
    }
    
    
    
}