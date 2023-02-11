#include <iostream>
#include<vector>
using namespace std;

int main (){
    std:: string name;
    int age;
    cout << "what is your name: "<< endl;
    getline(cin >> ws, name) ;
    cout << " what is your age ";
    cin >> age;
     cout << " hello " << name << "\n" << "you're " << age << endl;
    return 0;
}