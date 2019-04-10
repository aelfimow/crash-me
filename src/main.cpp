#include <cstdlib>

#include "div_arithm.h"


int main(int argc, char *argv[])
{
    div_param dp;

    dp.with_Z1(2).with_Z2(0).with_N(2);
    div_arithm(&dp);

    dp.with_Z1(2).with_Z2(0x8000000000000000).with_N(2);
    div_arithm(&dp);

    return EXIT_SUCCESS;
}
