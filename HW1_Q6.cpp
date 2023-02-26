#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Please enter value for 'n': " << endl;
    cin >> n;
    int n_stars;
    int n_spaces = n-1;
    for (int i=0; i < n; i++){
        int line = i + 1;
        n_stars = line + (line - 1);
        for(int k=0; k < n_spaces ; k++){
            cout << " ";
        }
        for(int j = 0; j < n_stars; j++){
                cout << "*";
            }
        n_spaces = n_spaces - 1;
        cout << endl;
    }
}