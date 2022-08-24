GCCW = gcc -Wall -Wextra -Werror
DBLD = ../build/
#COMPILE = $(GCCW) -D quest_

all: input.o drawing.o parcing.o stack.o
	$(GCCW) input.o drawing.o parcing.o stack.o graph.c -o $(DBLD)graph

drawing.o:
	$(GCCW) -c drawing.c

input.o:
	$(GCCW) -c input.c

parcing.o:
	$(GCCW) -c parcing.c

stack.o:
	$(GCCW) -c stack.c


clean:
	rm -rf *.o
	rm -rf $(DBLD)graph
	clear

rebuild: clean all


cl:
	clang-format -i *.c
	clang-format -i *.h

ch:
	python3 cpplint.py --extensions=c *.c
	
cpp:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c

pyton-copy:
	cp ../materials/linters/CPPLINT.cfg ./
	cp ../materials/linters/cpplint.py ./