#include "chamrosh/command.h"
#include "chamrosh/common.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void usage() {
    
    char *help = "Usage: charmosh [options] \n"
                 " Options: \n"
                 " -h, --help           print this help\n"
                 " -i, --init <name>    Create a new project by [NAME] \n";

    printf("%s", help);
    exit(1);
}



command_t * parse_command(char *raw_cmd, char *arg) {


    int i = 0;
    command_t *command;


    if (raw_cmd == NULL) return NULL;


    while (i < 2) {
        if(raw_cmd[i] == '-') i++;
        else break;
    }

    if (i == 0 || i > 2) return NULL; 
    
    command = (command_t *) malloc(sizeof(command_t));
    command->cmd = strdup((i + raw_cmd));
    if (arg != NULL)
        command->cmd = strdup(arg);


    return command;
}
