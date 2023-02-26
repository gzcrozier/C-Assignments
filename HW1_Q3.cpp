#include <iostream>
using namespace std;

int main(){
    int twod[4][5]= {{1,2,3,4,5},{1,1,1,1,1},{4,-2,-1,12,7},{5,4,3,2,1}};
    int oned[4];
    int len2 = (sizeof(twod)/sizeof(int));
    int len1 = (sizeof(oned)/sizeof(int));

    for (int i=0; i<len1; i++){
        int x = 1;
        for (int k=0; k<5; k++){
            x = x*twod[i][k];
        }
        oned[i] = x;
        cout << oned[i] << endl;
    }
}