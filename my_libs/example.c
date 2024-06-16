#include <stdio.h>
#include "string.c"


char* readFile(const char* filename) {
    FILE *file = fopen(filename, "rb"); // Open the file in binary mode
    char *buffer = NULL;
    long length;

    if (file) {
        fseek(file, 0, SEEK_END); // Move the file pointer to the end
        length = ftell(file);     // Get the current file pointer (size of the file)
        fseek(file, 0, SEEK_SET); // Move the file pointer to the beginning

        buffer = (char*)malloc(length + 1); // Allocate memory for the file content + null terminator
        if (buffer) {
            fread(buffer, 1, length, file); // Read the file content into the buffer
            buffer[length] = '\0';          // Null-terminate the string
        }
        fclose(file); // Close the file
    }

    return buffer; // Return the buffer
}

int main() {
//    char* a[2] = {"a", "hello world"};
//    char* c = join(a, 2, " ");
//    printf("%s\n", c);
//    capitalize(c);
//    printf("%s\n", c);
//    upper(c);
    //printf("%s\n", c);
  //  if (is_upper(c)) {
//        printf("variable c is in uppercase.\n");
    //}

//    printf("%d\n", rfindc(c, 'O'));
  //  printf("%d\n", find(c, "HELLO"));



    char* b = "bab";
    printf("count: %d\n", count(b, "b"));

    printf("%d\n", strlen(b));
    printf("%d\n", rfind(b, "bbbba"));

    int* array = findallc("bbbb", 'b');
    int count = 0;

    while (array[count] != -1) {
        printf("%d\n", array[count]);
        count++;
    }

    //char** tmp = split("bbbb", 'b');
    //count = 0;
   // while (tmp[count] != "\0") {
     //   printf("%s\n", tmp[count]);
//    }
    return 0;

}