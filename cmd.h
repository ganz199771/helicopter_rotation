
#ifndef _MNDAC_CMD_H_
#define _MNDAC_CMD_H_

#include <stdint.h>

enum mndac_cmd
{
    reset,
    echo,
    list,
    history
};

int exec_cmd(char* x_cmd);

#endif

