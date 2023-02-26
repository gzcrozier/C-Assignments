#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Please enter string: " << endl;
    cin >> str;
    int n = sizeof(str)/2;
    for (int i=0; i< n; i++){
        char a = str[i];
        if (a >= 65 && a <= 90) {
            a = a + 32;
        }
        else if (a >= 97 && a <= 122){
            a = a - 32;
        }
        str[i] = a;
    }
    cout << str << endl;
}