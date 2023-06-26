/*
 * jetson.c
 *
 * Useful helper functions for jetson based applications.
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


/**
 * get_jetson() - return the jetson model, as a number
 * 
 * Returns the jetson model as an enum if successful, -ERR if not
 */
int get_jetson();

/**
 * get_jetson_str() - return the jetson model, as a string
 * 
 * Returns a pointer to a char array containing the jetson model as string,
 *  -ERR if not
 */
char * get_jetson_str();

