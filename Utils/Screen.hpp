/*
   ================================================================================================================
   ================================================================================================================
                                                    FILE OVERVIEW

   @file:               Screen.hpp

   @purpose:            Defines 


   @design:             Token 

   @usage:              Token 

   @notes:              This file 

   ================================================================================================================
*/

#ifndef _SCREEN_H
#define _SCREEN_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <sys/ioctl.h>

/* ARP types definitions */
#define NARP_REQUEST 1
#define NARP_REPLY 2

/* Screen modes definitions */
#define SMODE_REPLY 0
#define SMODE_REQUEST 1
#define SMODE_HELP 2
#define SMODE_HOST 3

/* Known Hosts highlight color */
//#define KNOWN_COLOR "\33[42;30m%s\33[0m\n"
#define KNOWN_COLOR "\33[1m%s\33[0m\n"

/* Ohh no, more globals */
struct winsize win_sz;
char *current_network;
int parsable_output, continue_listening;


/* Screen functions */
void PrintScreen();
void FillScreen();
void ReadKey();
void InitScreen();
void SignalHandler(int);


#ifdef __cplusplus
}
#endif

#endif /* _SCREEN_H */
