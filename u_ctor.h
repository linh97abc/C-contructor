#ifndef _U_CTOR_H_
#define _U_CTOR_H_

#ifdef __cplusplus
#define START_DECLARE extern "C" {
#else
#define START_DECLARE
#endif

#ifdef __cplusplus
#define END_DECLARE }
#else
#define END_DECLARE
#endif

#define INIT_FUNC_DEFINE(fn) START_DECLARE void __init_function_ ## fn(void); END_DECLARE void __init_function_##fn(void)


START_DECLARE
void do_user_ctor(void);
END_DECLARE


#endif
