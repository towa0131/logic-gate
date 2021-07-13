#include "logic.h"

namespace basic {

    int NOT(int x) {
        return NOR(x, x);
    }

}
