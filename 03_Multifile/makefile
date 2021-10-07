CFLAGS = -Wall -fPIC
GENERATES = prog README
TRASH = *.o *~ o.* *.a *.so
TEST = test
CC = cc
CURRENT_DIR = $(shell pwd)
all:	README prog-a prog-so

prog.o:  outlib.h
fun.o:  outlib.h


prog-so:export LD_LIBRARY_PATH=$(CURRENT_DIR)
prog-so:	prog.o liboutput.so
	$(CC) -L. $< -loutput -o $@

prog:	const.o fun.o prog.o
prog-a: prog.o liboutput_static.a
	$(CC) -L. $< -loutput_static -o $@
	
	
test:export LD_LIBRARY_PATH=$(CURRENT_DIR)
test:	prog prog-a prog-so
	mkdir -p $(TEST)
	./script.sh $(TEST)
	cmp $(TEST)/prog.txt $(TEST)/prog-a.txt
	cmp $(TEST)/prog.txt $(TEST)/prog-so.txt
	cmp $(TEST)/prog-a.txt $(TEST)/prog-so.txt
	rm -rf $(TEST)

liboutput_static.a:	const.o fun.o
	ar -rcs $@ $^

liboutput.so: const.o fun.o
	$(CC) -shared $^ -o $@

README:	prog
	./$< 2> $@



clean:	
	rm -f $(TRASH)

distclean:	clean
	rm -rf $(GENERATES)
