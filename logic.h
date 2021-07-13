#ifndef LOGIC_H_
#define LOGIC_H_

namespace basic {
    int OR(int, int);
    int AND(int, int);
    int NAND(int, int);
    int NOR(int, int);
    int XOR(int, int);
    int NOT(int);
}

namespace combinational {
    class adder {
        public:
            int S;
            int C;

            adder(int S, int C) : S(S), C(C) {

            }
    };

    adder half_adder(int, int);
    adder full_adder(int, int, int);
    adder make_adder(int, int);
}


#endif  // LOGIC_H_
