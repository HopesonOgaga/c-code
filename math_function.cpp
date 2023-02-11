#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main (){

float a,b;
cout << "enter  value for a" << "\n";
cin >> a;
cout << "enter value for b" << "\n";
cin >> b;
float new_a = pow(a, 2);
float new_b = pow(a, 2);
float c = sqrt(new_a + new_b);
cout << "the hypotenus of a right hand triangle is " << c << endl;
    return 0;
}