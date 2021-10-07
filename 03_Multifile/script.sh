TEST=$1

for x in prog prog-a prog-so;
do
	cp -f "$x" "file";
	./file 2> "$TEST/$x.txt";
	./file "hello" >> "$TEST/$x.txt";
	./file "hello" "world" "!" >> "$TEST/$x.txt";
	rm "file"
done
