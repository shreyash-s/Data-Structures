/* To find the geometric mean of given two numbers */


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
    int a;
    cin >> a; cin.ignore();
    int b;
    cin >> b; cin.ignore();
    int gm; //geometric mean
    gm = pow((a*b),(0.5));
    cout<<gm;

}