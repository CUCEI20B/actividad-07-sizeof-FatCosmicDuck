#include <iostream>

using namespace std;

int main() {
    
    string dato;

    cin >> dato;

    if(dato.compare("char")==0){
        cout << sizeof(char) << endl;
    }
    else if(dato.compare("int")==0){
        cout << sizeof(int) << endl;
    }
    else if(dato.compare("short")==0){
        cout << sizeof(short) << endl;
    }
    else if(dato.compare("float")==0){
        cout << sizeof(float) << endl;
    }
    else if(dato.compare("double")==0){
        cout << sizeof(double) << endl;
    }
    else if(dato.compare("long")==0){
        cout << sizeof(long) << endl;
    }

    return 0;
}