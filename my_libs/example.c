#include <stdio.h>
#include <yulai/string.h> // its string.c, you can replace it to #include "string.c"

// dont run it cuz its just a temporary im testing here my lib

char* readFile(const char* filename) {
    FILE* file = fopen(filename, "rb"); // Open the file in binary mode
    char* buffer = NULL;
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

int main(int argc, char** argv) {
    char* tmp = sjoin(argv, 0, argc, " ");

    printf(tmp);

    return 0;

}
