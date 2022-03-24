#include "build/auto-init.h"

void do_user_ctor(void)
{
    int i = 0;
    int n_func_init = sizeof(p_func_init)/sizeof(pfn);

    for (; i < n_func_init; i++)
    {
        p_func_init[i]();
    }
    
}


