//File input handling in C.

int main(void) {
	FILE *infile, *outfile;
	char current_char;

	if ((infile = fopen("data.txt", "r")) == NULL ) {
		puts("Input file error.\n");
		exit(EXIT_FAILURE);
	}

	while (fscanf(infile, "%c", &current_char) != EOF) {
		printf("%c", current_char);
	}

	fclose(infile);
}
