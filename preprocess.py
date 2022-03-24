import re

regex = r'^INIT_FUNC_DEFINE\(([\w_0-9]+)\)'

c_file = 'main.c'
fn_list = []
with open(c_file, 'r') as f:
    for line in f:
        fn = re.findall(regex, line)
        if fn:
            fn_list.append("__init_function_" + fn[0])

tmpl = '''
%s;
typedef void (*pfn)(void);
static pfn p_func_init[]={%s};
'''
with open('build/auto-init.h', 'w') as f:
    f.write(tmpl % (
        ';'.join(["extern void %s(void)" % i for i in fn_list]),
        ','.join(fn_list))
    )
