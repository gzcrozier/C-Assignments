#include <iostream>
using namespace std;

int main(){
    int variable1;
    int variable2;
    cout << "Enter value for variable 1: \n";
    cin >> variable1;
    cout << "Enter value for variable 2: \n";
    cin >> variable2;
    cout << "Variable1 : " << variable1 << " and Variable2 : " << variable2 << endl;
    int transvar = variable1;
    variable1 = variable2;
    variable2 = transvar;
    cout << "Variable1 : " << variable1 << " and Variable2 : " << variable2 << endl;
}