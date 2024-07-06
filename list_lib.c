#include <stdlib.h>
#include <stdint.h>
#include "list_lib.h"
#include <stdio.h>
List init_list(){
    List l;
    l.amount_of_entries = 1;
    l.contents = malloc(sizeof(void*));
    return l;
}
void terminate_list(List l){
    for(uint64_t i = 0; i<l.amount_of_entries-1; i++){
        free(l.contents[i]);
    }
    free(l.contents);
}
List push_to_list(List l, void* item){
    if(item == NULL){
        printf("ERR: NULL item\n");
        return l;
    }
    l.amount_of_entries++;
    l.contents = realloc(l.contents, l.amount_of_entries*sizeof(void*));
    l.contents[l.amount_of_entries-1] = item;
    return l;
}