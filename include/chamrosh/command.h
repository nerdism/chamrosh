#ifndef COMMAND_H
#define COMMAND_H



typedef struct {

    char *cmd;
    char *arg;

}command_t;



command_t* parse_command(char *raw_cmd, char *arg);
void usage();


#endif
