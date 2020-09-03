//
// Created by Fabio-PC on 01/09/2020.
//

#include <iostream>

using namespace std;

/*char *RolaMoeda (void) {
    int r;
    r = rand () % 2;
    if (r == 1) return "cara";
    else return "coroa";
}*/

int main() {
    const int VECSIZE = 10;
    const int LOOPSIZE = 10000;

    int v[VECSIZE];

    for (int i = 0; i < LOOPSIZE; ++i) {
        cout << i << "\t" << v[i] << endl;
    }
}