
#include <cmd.h>
#include <XMC1400.h>
#include <stdio.h>
#include <string.h>

int exec_cmd(char* x_cmd)
{
    if(strcmp(x_cmd, "reset") == 0)
        NVIC_SystemReset();
    else if(strcmp(x_cmd, "echo") == 0)
        printf("Hello XMC1404\r\n");
    return 0;
}

