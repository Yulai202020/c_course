filename = string.c
c_flag = -lm

lib:
	gcc -c -fPIC $(filename) -o $(filename).o ${c_flag}
	gcc $(filename).o -shared -o $(filename).so ${c_flag}