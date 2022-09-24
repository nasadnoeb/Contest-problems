#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){

    stringstream srr; char ch;
    string str; cin >> str;
    srr << str; int n1, n2;
    if(str[0] == 'x'){
        srr >> ch >> ch >> n1 >> ch >> n2;
        if(str[1] == '+'){
            cout << n2-n1 << endl;
        } else {
            cout << n2+n1 << endl;
        }
    }
    if(str[2] == 'x'){
        srr >> n1 >> ch >> ch >> ch >> n2;
         if(str[1] == '+'){
            cout << n2-n1 << endl;
        } else {
            cout << n1-n2 << endl;
        }
    }

    if(str[4] == 'x'){
        srr >> n1 >> ch >> n2 >> ch >> ch;
         if(str[1] == '+'){
            cout << n2+n1 << endl;
        } else {
            cout << n1-n2 << endl;
        }
    }

    return 0;
}
