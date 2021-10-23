set pagination off
set logging on

break 36 if i % 5  == 0
	commands
	printf "###current = %d step = %d start = %d  end = %d\n", i, step, m, n
	c
end
r 1 12 > /dev/null
