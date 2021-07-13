#include "logic.h"

namespace combinational {

    using namespace basic;
    using namespace std;

    adder full_adder(int x_1, int x_2, int c) {
        adder _1 = half_adder(x_1, x_2);
        adder _2 = half_adder(_1.S, c);

        return make_adder(_2.S, OR(_1.C, _2.C));
    }
}
