CFLAGS = -O0 -g -ggdb

all: range
 
range: range.c
	cc $(CFLAGS) range.c -o range 

test: range script1.gdb script2.gdb output.txt
	gdb --batch-silent --command=script1.gdb -q ./range
	gdb --batch-silent --command=script2.gdb -q ./range
	cat gdb.txt | grep '###' > result.txt
	cmp result.txt output.txt
clean:
	rm -r range gdb.txt result.txt