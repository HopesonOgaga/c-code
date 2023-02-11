#include <iostream>
#include <vector>
#include <cmath>


// c++ program to calculate the molar mass of volume
using namespace std;
int main(){
float n,r,t,p;

cout << "enter your value n : ";
cin >> n;

cout << "enter your value r : ";
cin >> r;

cout << "enter your value t : ";
cin >> t;

cout << "enter your value p : ";
cin >> p;

cout << "the molar mass is: " << (n*r*t)/p << "mol";
}