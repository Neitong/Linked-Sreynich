#include <iostream>
using namespace std;

/**
 * Return whether the given number if inside the given range
 * @param number : the number
 * @param min : the range min
 * @param max : the range max
 * @return true if inside the range, false otherwise
 */
bool isInside(int number, int min, int max) {
    // TODO
    if(min<=number&&number<=max){
        return true;
    }
    else{
        return false;
    }
}

int main() {
 
    // 1-  Input the number
   // TODO
    int number;
    cout<<"Input the number:";
    cin>>number;
    int min,max;
    // 2 - Input the range
    cout<<"Input the range:\n";
    cout<<"Input min:";
    cin>>min;
    cout<<"input max:";
    cin>>max;
    

    // BONUS : If the user accidentally enters a minimum value that is larger
    // than the maximum value, ask them to enter the values again.
   
    // TODO
    while(min>max){
        cout<<"*Please input value of minimum and maximum again*\n";
        cout<<"Input min:";
        cin>>min;
        cout<<"input max:";
        cin>>max;
    }

    // 3-  Check if the number is inside the range
   // TODO
    if(isInside(number, min, max))
    {
        cout << "inside";

    }
    else {
        cout << "outside";
    }

    return 0;
}