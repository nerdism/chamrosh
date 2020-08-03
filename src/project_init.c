#include "chamrosh/project_init.h"
#include "sys/types.h"
#include "sys/stat.h"
#include "stdio.h"



/* return 0 if project is sucessfully made, otherwise it returns -1. */
//TODO: 1) mkdir src 2) mkdir include 3) mkdir lib
//TODO: before those check if they already exist or not.
void project_init() {

   if (!make_src() && !make_include() && !make_test()) {
       printf("%s\n", "project initialized!");
   }
   else 
       printf("%s\n", "project initialization failed");
}

int make_src() {

    return mkdir("./src", 0700);
}

int make_include() {

    return mkdir("./include", 0700);
}

int make_test() {

    return mkdir("./test", 0700);
}
