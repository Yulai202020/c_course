# $1 source code
# $2 lib name
# $4 path to headers
# $3 header file

gcc -c -fPIC $1 -o $1.o
gcc -shared $1.o -o $2.so
# cp $3 /usr/includes/$4
cp $2.so /usr/lib/$2.so