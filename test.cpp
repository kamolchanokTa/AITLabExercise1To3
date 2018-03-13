#include <iostream>
#include <cstdlib>

int main(){
    using std::cout;
    using std::endl;
    cout << "Content-type: text/html; charset=utf-8" << endl << endl;
    cout << "<title>Lab Exercise 2</title>" << endl;
    cout << "<table>" << endl;
    for(int i =0; i < 11; i++) {
        cout << "<tr><td>" << i << "</td></tr>" << endl;
    }
} 