//Experiment to find out what happens when printf 's argument string contains \c, where c is some character not listed above.

#include <stdio.h>
int main(void) {
	printf("\\n for newline \n and \\t for tab \t and \\\\ for backslash \\ and \\b for backspace\b. \n");

	/* answers from web */
	printf("\\a Audible or visual alert. \a\n");  
	printf("\\f Form feed. (换页符) \f\n");
	printf("This escape, \r, \\r moves the active position to the initial position of the current line.\n");
	printf("\\v Vertical tab \v is tricky, as its behaviour is unspecified under certain conditions.\n");

	return 0;
}