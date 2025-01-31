#include <stdio.h>
#include <stdlib.h>

void copy_lines(FILE *src, FILE *dest, int start, int end) {
    int line_no = 1;
    int ch;
    int copied_lines = 0;  // To track the number of lines copied

    while ((ch = fgetc(src)) != EOF) {
        // When we're within the line range (start to end)
        if (line_no >= start && line_no <= end) {
            // Print line number followed by the line content
            if (ch == '\n') {
                fprintf(dest, "%d: ", line_no);  // Write line number before content
                copied_lines++;  // Increment copied lines when a newline character is encountered
            }
            fputc(ch, dest);  // Write each character to the destination file
        }

        if (ch == '\n') {
            line_no++;  // Increment line number at the end of each line
        }
    }

    // Print the number of lines copied only if lines were copied in the range
    if (copied_lines > 0) {
        printf("Copied %d lines from this file.\n", copied_lines);
    }
}

int main() {
    FILE *file1, *file2, *file3;

    // Open the source files for reading and destination file for writing
    file1 = fopen("/home/gmendiratta/Assignments/Assignments/week3/file1.txt", "r");
    file2 = fopen("/home/gmendiratta/Assignments/Assignments/week3/file2.txt", "r");
    file3 = fopen("/home/gmendiratta/Assignments/Assignments/week3/file3.txt", "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("The error in opening the file\n");
        return 1;
    }

    // Copy lines 20 to 80 from file1 to file3 with line numbers
    printf("Copying lines 20 to 80 from file1...\n");
    copy_lines(file1, file3, 20, 80);
    fclose(file1);

    // Copy lines 50 to 90 from file2 to file3 with line numbers
    printf("Copying lines 50 to 90 from file2...\n");
    copy_lines(file2, file3, 50, 90);
    fclose(file2);

    fclose(file3);

    printf("Contents successfully copied to file3.txt with line numbers.\n");

    return 0;
}

