#SHELL=/bin/zsh
CC = gcc
FLAGS = -Wall -c -g

SRCS = $(wildcard src/*.c)
OBJS = ${SRCS:.c=.o} 


builds/chamrosh: ${OBJS}
	@${CC} $^ -o $@
	@echo "[$@] ----- built" 


%.o: %.c
	@${CC} ${FLAGS} -I include $< -o $@
	@echo "[$@] ----- built"

clean:
	@for file in $$(find . -type f -name "*.o"); do (echo [$$file] "----- has been removed") ; done 
	@find . -name "*.o" -type f -delete
	@if [ -f builds/chamrosh ]; then rm -rf builds/chamrosh ; echo "[builds/chamrosh] ----- has been removed" ; else echo "no chamrosh file to remove"; fi


.PHONY = clean
