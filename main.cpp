#include <iostream>
#include <functional>
#include <string>
#include "logic.h"

using namespace std;
using namespace basic;
using namespace combinational;

void print_truth_table(function<int(int, int)> fn) {
    cout << string(13, '-') << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << "| " << i << " | " << j << " | " << fn(i, j) << " |" << endl;
        }
    }
    cout << string(13, '-') << endl;
}

void print_truth_table(function<adder(int, int)> fn) {
    cout << string(17, '-') << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << "| " << i << " | " << j << " | " << fn(i, j).C << " | " << fn(i, j).S << " |" << endl;
        }
    }
    cout << string(17, '-') << endl;
}

void print_truth_table_3(function<adder(int, int, int)> fn) {
    cout << string(21, '-') << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 1; k++) {
                cout << "| " << i << " | " << j << " | " << k << " | " << fn(i, j, k).C << " | " << fn(i, j, k).S << " |" << endl;
            }
        }
    }
    cout << string(21, '-') << endl;
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

    cout << "Half Adder" << endl;
    print_truth_table(half_adder);
    cout << endl;

    cout << "Full Adder" << endl;
    print_truth_table_3(full_adder);
    cout << endl;


    return 0;
}
