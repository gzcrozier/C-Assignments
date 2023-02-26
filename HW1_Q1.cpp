#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Please input your string: ";
    cin >> str;
    int len = str.length();
    for (int i = len-1; i >= 0; i = i-1){
        cout << str[i];
    };
    cout << endl;
};