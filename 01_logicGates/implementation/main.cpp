#include <iostream>
#include "NAND.h"
#include "AND.h"
#include "OR.h"

int main(){
    NAND nand;
    AND and_gate;
    OR or_gate;
    bool out;
    // nand_gate.get(0, 0, out);
    // and_gate.get(0, 1, out);
    or_gate.get(0, 0, out);
    std::cout << out << std::endl;
    return 0;
}