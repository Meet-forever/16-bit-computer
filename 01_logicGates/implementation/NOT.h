#ifndef AND_CHIP
#define AND_CHIP
#include "NAND.h"

/* a out
 * 0 1
 * 1 0
 */

class AND
{
public:
    bool get(bool a, bool &out)
    {
        NAND nand;
        nand.get(a, a, out);
        return out;
    }
};
#endif