#!/bin/sh

cat /etc/passwd | grep -o '^[^#]*' | sed -n '2~2p' |  awk -F: '{ print $1 }' | rev | sort -r
