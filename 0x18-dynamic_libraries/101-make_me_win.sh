#!/bin/bash
wget -p /tmp/ https://raw.github.com/Blessingdev233/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
