#!/usr/bin/env bash

gcc int_oflow.c -o int_oflow
gcc obo.c -o obo -lreadline
gcc sign.c -o sign -lreadline
