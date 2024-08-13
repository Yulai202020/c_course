# Description
Its standarts of writing code on c (how write code me).

# Rules

## Rule 1, Make casting.

Not like this
```c
char* variable = malloc(size);
```

do this
```c
char* variable = (char*) malloc(size);
```

## Rule 2, check is malloc returned NULL

```c
char* variable = (char*) malloc(size);
if (variable == NULL) {
   // raise error
}
```

## Rule 3, making structs

Not like this
```c
struct SomeStruct {
   // data
}
```

do this
```c
typedef struct {
   // data
} SomeStruct;
```

or

```c
struct SomeStruct {
   // here you can do:
   struct SomeStruct* ptr;
}

typedef struct SomeStruct SomeStruct;
```