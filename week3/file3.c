#include <stdio.h>
#include <stdlib.h>

void copylines(FILE *src, FILE *dest, int start, int end) {
	//src file jisme se copy karna hai and dest file jisme copy karna hai 
	//staring line ko track karne ke liye and last line ko track karne ke liye jo dono he inclusive hai 

	int lineno = 1;
	int ch;
	int copiedlines = 0;  // To track the number of lines copied

	while ((ch = fgetc(src)) != EOF) {
		// to check we are within the range or not (start to end)
		if (lineno >= start && lineno <= end) {
			// Print line number followed by the line content
			if (ch == '\n') {
				fprintf(dest, "%d: ", lineno);  // Write line number before content
				copiedlines++;  // Increment copied lines when a newline character is encountered
			}
			fputc(ch, dest);  // Write each character to the destination file
		}

		if (ch == '\n') {
			lineno++;  // Increment line number at the end of each line
		}
	}

	// Print the number of lines copied only if lines were copied in the range
	if (copiedlines > 0) {
		printf("Copied %d lines from this file\n", copiedlines);
	}
}

int main() {
	FILE *file1, *file2, *file3;//

	// Open the source files for reading and destination file for writing
	file1 = fopen("file1.txt", "r");
	file2 = fopen("file2.txt", "r");
	file3 = fopen("file3.txt", "w");

	if (file1 == NULL || file2 == NULL || file3 == NULL) {
		printf("The error in  the file or file not found \n");
		return 1;
	}

	// Copy lines 20 to 80 from file1 to file3 with line numbers
	printf("Copying lines 20 to 80 from file1\n");
	copylines(file1, file3, 20, 80);
	fclose(file1);

	// Copy lines 50 to 90 from file2 to file3 with line numbers
	printf("Copying lines 50 to 90 from file2\n");
	copylines(file2, file3, 50, 90);
	fclose(file2);

	fclose(file3);

	printf("Contents successfully copied to file3.txt \n");

	return 0;
}
