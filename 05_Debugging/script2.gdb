set pagination off
set logging on

set $num = 0
break 51 if $num++ > 27 && $num < 37
	commands
	printf "###current = %d step = %d start = %d  end = %d\n", i, step, m, n
	c
end
r -100 100 3 > /dev/null
