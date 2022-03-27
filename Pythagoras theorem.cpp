/* Pythogoras Theorem */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <tgmath.h>

using namespace std;


int main()
{
    int x; //base of the right angled triangle
    int h; //height of the right angled triangle
    cin >> x >> h; cin.ignore();

    int d= floor(pow(pow(x,2)+pow(h,2),(0.5)));//hypotenuse of the right angled triangle
    cout<<d;
    cout<<endl;

}