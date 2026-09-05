#include <iostream>
#include<fstream>
using namespace std;
int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    getline(cin, s);
    cout<<s;


    ofstream a;
    a.open("output.txt");

    a<<"hi";

    return 0;
}