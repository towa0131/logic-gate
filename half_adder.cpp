#include "logic.h"

namespace combinational {

    using namespace basic;
    using namespace std;

    adder half_adder(int x_1, int x_2) {
        int _1 = OR(x_1, x_2);
        int C = AND(x_1, x_2);
        int S = AND(_1, NOT(C));

        return make_adder(S, C);
    }

    adder make_adder(int S, int C) {
        return adder(S, C);
    }
}
