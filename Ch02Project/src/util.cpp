/*
 * util.cpp
 *
 *  Created on: Jun 5, 2014
 *      Author: cvora
 */
#include "util.h"

void printCwd()
{
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL)
        fprintf(stdout, "Current working dir: %s\n", cwd);
    else
        perror("getcwd() error");

}




