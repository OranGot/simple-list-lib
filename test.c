#include <stdio.h>
#include "list_lib.h"
int main(){
    List l = init_list();
    printf("test\n");
    l = push_to_list(l, "hello world");
    printf("%s", (char*)l.contents[1]);
    terminate_list(l);
    return 0;
}