# $1 source code (smth .c)
# $2 headers (smth .h)
# $3 lib name
# $4 path to headers

gcc -c $1 -o $1.o
ar rcs $3 $1.o
cp $2 /usr/includes/$4
cp $3 /usr/lib/$3