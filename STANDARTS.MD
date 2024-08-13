# Description
Its standarts of writing code on c (how write code me).

# Rules

## Rule 1
Make casting.

Not like this:
```c
char* variable = malloc(size);
```
do this:
```c
char* variable = (char*) malloc(size);
```

## Rule 2

if malloc returned NULL
```c
char* variable = (char*) malloc(size);
if (variable == NULL) {
   // raise error
}
```