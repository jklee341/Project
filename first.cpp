#include <iostream>
using namespace std;

int square(int a){
    return a*a;
}

int main(){
    cout << "Hello World\n";
    for (int i=0; i<9; i++){
        cout << square(i) << '\n';
    }
    return 0;
}