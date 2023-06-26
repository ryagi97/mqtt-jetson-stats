/*
 * jetsonstats.c
 *
 * Collects metrics and statistics from jetson devices, and stores them in a 
 * struct jetsonstats.
 *
 * Authors: Ryan Agius  <ryagius17@gmail.com>
 * 
 * BUGS:
 *  Hmm... there must be something here :)
 *
 * Copyright (C) 2023 Ryan Agius
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file COPYING in the main directory of this archive
 * for more details. 
 */

#include <stdio.h>

struct memory {
    int used;
    int free;
    int tot;
};

struct cpu {
    int id;
    int online;
    int load;
    int freq;
};

struct emc {
    int 
};



struct jetsonstats
{

    int swap_used;
    int swap_tot;
    
};
