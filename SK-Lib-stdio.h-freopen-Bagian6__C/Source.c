#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    puts("stdout is printed to console");

    if (freopen("redir.txt", "w", stdout) == NULL) {
        perror("freopen() failed");
        return EXIT_FAILURE;
    }

    puts("stdout is redirected to a file"); // this is written to redir.txt
    fclose(stdout);
    
    _getch();
    return EXIT_SUCCESS;
}