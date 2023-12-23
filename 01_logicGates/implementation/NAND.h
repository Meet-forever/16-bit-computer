#ifndef NAND_CHIP
#define NAND_CHIP

/* a b out
 * 0 0 1
 * 0 1 1
 * 1 0 1
 * 1 1 0
 */
class NAND{
    public:
        bool get(bool a, bool b, bool& out){
            out = !(a & b);
            return out;
        }
};
#endif