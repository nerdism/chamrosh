#include "argp.h"
#include "chamrosh/arg_handler.h"
#include "chamrosh/project_init.h"
#include "chamrosh/command.h"
#include "stdio.h"
#include "string.h"
#include "unistd.h"



void arg_parse(int argc, char *argv[]) {
    
    if (argc <= 1){
        usage();
    }

}

