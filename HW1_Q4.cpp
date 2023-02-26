#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Please enter string: " << endl;
    cin >> str;
    int n = str.length();
    bool pal;
    if (n == 0 || n == 1){
        cout << "This string is a palindrome." << endl;
    }
    else {
        for (int i=0; i < n/2; i++){
            int j = n - (i+1);
            if (str[i] != str [j]){
                pal = 0;
                break;
            }
            else{
                pal = 1;
            }
        }
        if ( pal == 1){
            cout << "This string is a palindrome." << endl;
        }
        else if ( pal == 0){
            cout << "This string is not palindrome." << endl;
        }
    }
}