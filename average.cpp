#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
// c++ program to calculate the average of 4 programs
int main()
{
    /* code */
    float average_a, average_b, average_c , average_d;

    cout << "enter value a: " << endl;
    cin >> average_a;
    cout << "enter value b: " << endl;
    cin >> average_b;
    cout << "enter average c: " << endl;
    cin >> average_c;
    cout << "enter average d: " << endl;
    cin >> average_d;
    
    cout << "the average is : " << (average_a + average_b + average_c + average_d)/4;

    return 0;
}
