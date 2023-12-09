#include "shell.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        /*Interactive mode*/
        exe_command_i();
    } else if (argc == 2) {
        /* Non-interactive mode*/
        exe_command_nil(argv[1]);
    } else {
        fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
