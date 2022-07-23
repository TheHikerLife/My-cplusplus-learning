#include <iostream>
#include <cmath>
using namespace std ;
main() {
    int i;
    float x;
    float racx;
    const int ntime = 5;
    cout <<"Hello beautiful person\n";
    cout <<"I'm gonna a calculation of " <<ntime <<" square root\n";
    for (i=0; i<ntime; i++){
        cout <<"Give a number : ";
        cin >> x;
        if (x < 0.0){
            cout << "The number " << x << "don't have a square root\n";
        }
        else{
            racx = sqrt (x);
            cout << "The number " << x << " have " << racx << "for square root\n";
        }
    }
    cout << "This is the end";
}