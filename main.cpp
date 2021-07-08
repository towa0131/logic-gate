#include <iostream>
#include <functional>
#include <string>
#include "basic.h"

using namespace std;
using namespace basic;

void print_truth_table(function<int(int, int)> fn) {
    cout << string(13, '-') << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << "| " << i << " | " << j << " | " << fn(i, j) << " |" << endl;
        }
    }
    cout << string(13, '-') << endl;
}

int main(void) {
    cout << "OR" << endl;
    print_truth_table(OR);
    cout << endl;

    cout << "AND" << endl;
    print_truth_table(AND);
    cout << endl;

    cout << "NOR" << endl;
    print_truth_table(NOR);
    cout << endl;

    cout << "NAND" << endl;
    print_truth_table(NAND);
    cout << endl;

    cout << "XOR" << endl;
    print_truth_table(XOR);
    cout << endl;

    return 0;
}
