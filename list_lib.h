#ifndef LIST_LIB
#define LIST_LIB
#include <stdint.h>
typedef struct{
    void** contents;
    uint64_t amount_of_entries;
}List;
List init_list();
void terminate_list(List l);
List push_to_list(List l, void* item);
#endif