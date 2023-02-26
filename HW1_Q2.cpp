#include <iostream>
using namespace std;

int main(){
    int array[15] = {-12,4,12,3,1,7,25,0,25,1,127,-15,12,13,25};
    int max = array[0];
    int min = array[0];
    int len = (sizeof(array))/(sizeof(int));
    int i;
    for (i = 0; len>i; i=i+1){
        if (array[i] < min)
            min = array[i];
        else if (array[i] > max)
            max = array[i];
    }
    cout << "The minimum value in the array is: " << min << endl;
    cout << "The maximum value in the array is: " << max << endl;
}