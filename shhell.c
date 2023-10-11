#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main()
{
    char buffer[BUFFER_SIZE];
    int status = 1;

    while (status) {
        printf("shell> ");
        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL)
            break;

        if (buffer[strlen(buffer) - 1] == '\n')
            buffer[strlen(buffer) - 1] = '\0';

        if (strlen(buffer) == 0)
            continue;

        pid_t pid = fork();
        if (pid < 0) {
            perror("fork failed");
            exit(1);
        } else if (pid == 0) {
            // Child process
            int ret = execlp(buffer, buffer, NULL);
            if (ret < 0) {
                perror("exec failed");
                exit(1);
            }
        } else {
            // Parent process
            waitpid(pid, &status, 0);
        }
    }

    return 0;
}
