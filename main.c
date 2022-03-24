#include <stdio.h>
#include "u_ctor.h"

INIT_FUNC_DEFINE(fn) {
    puts(__func__);
}

INIT_FUNC_DEFINE(fn2) {
    puts(__func__);
}

// INIT_FUNC_DEFINE(fn3) {
//     puts(__func__);
// }

int main()
{
    do_user_ctor();


    puts("start");

    return 0;
}
