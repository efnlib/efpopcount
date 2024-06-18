#include "efpopcount.h"

uint32_t efpopcount(uint32_t x) {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t result;
    a = x - ((x >> 0x01) & 0x55555555);
    b = (((a >> 0x02) & 0x33333333) + (a & 0x33333333));
    c = (((b >> 0x04) + b) & 0x0F0F0F0F);
    d = c + (c >> 0x08);
    e = d + (d >> 0x10);
    result = e & 0x0000003F;
    return result;
}
