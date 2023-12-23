#ifndef OR_CHIP
#define OR_CHIP
#include "NAND.h"

/* a b out
 * 0 0 0
 * 0 1 1
 * 1 0 1
 * 1 1 1
 */

class OR
{
public:
    bool get(bool a, bool b, bool &out)
    {
        NAND nand;
        bool o1, o2;
        nand.get(a, a, o1);
        nand.get(b, b, o2);
        nand.get(o1, o2, out);
        return out;
    }
};
#endif