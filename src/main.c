#include "chamrosh/arg_handler.h"
#include "chamrosh/command.h"
#include <stdio.h> 



int main(int argc, char *argv[]) {

    command_t *command = parse_command(argv[1], argv[2]);

    if (command == NULL) 
        usage();

    return 0;
}
