#include "arg_handler.h"
#include "unistd.h"
#include "string.h"
#include "project_init.h"



void arg_parse(int argc, char *argv[]) {
    
    if (argc < 2)
        return;
    
    if (strcmp(argv[1], "init")) {
        project_init();
    }

}
