#ifndef AND_CHIP
#define AND_CHIP
#include "NAND.h"

/* a b out
 * 0 0 0
 * 0 1 0
 * 1 0 0
 * 1 1 1
 */

class AND{
public:
    bool get(bool a, bool b, bool &out)
    {
        NAND nand;
        bool o1;
        nand.get(a, b, o1);
        nand.get(o1, o1, out);
        return out;
    }
};
#endif