#!/bin/sh

find ./ -type f -name "*.sh" | cut -c3- | sed "s/\.sh$//" | awk -F '/' '{print $NF}'
