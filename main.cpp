#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector<string> mi_vector;
    mi_vector.push_back("A");
    mi_vector.push_back("E");
    mi_vector.push_back("I");
    mi_vector.push_back("O");
    mi_vector.push_back("U");

    mi_vector[2]="X";

    mi_vector.push_back("Y");
    mi_vector.pop_back();

    for (int i = 0; i < mi_vector.size() ; ++i) {

        cout<<mi_vector[i]<<endl;
    }
    return 0;

}