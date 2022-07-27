#!/bin/bash

gcc -wall -pedantic -Werror -Wextra - *.c

ar rc liball.a *.o
