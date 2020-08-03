#include "chamrosh/common.h" 
#include "string.h"




char * replace(char *str, char old, char new) {


    char *current = strchr(str, old);

    while(current) {
        *current = new;
        current = strchr(str, old);
    }

    return str;
}
