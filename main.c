#include <stdio.h>

int main() {

    /**
     * Start by opening a file.
     */
    FILE *stream;
    stream = fopen("/home/romano/CLionProjects/lexical-analysis/Files/empty.language", "r");

    if (stream == NULL) {
        printf("Error while opening the given file.");
        return 1;
    }

    /**
     * Reading the file line by line.
     */

    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&line, &len, stream)) != -1) {
        printf("Line length %zu:\n", read);
        printf("%s", line);
    }


    return 0;
}