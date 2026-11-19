#!/bin/sh
set -eu

gcc -Wall -Wextra -std=c11 main.c -o mad-libs-c

echo "Starting Soon Qzi's Mad Libs Game..."
./mad-libs-c