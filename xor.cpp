#include "logic.h"

namespace basic {

    int XOR(int x_1, int x_2) {
        return AND(OR(x_1, x_2), NAND(x_1, x_2));
    }

}
