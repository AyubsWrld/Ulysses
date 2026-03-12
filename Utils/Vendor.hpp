/*
   ================================================================================================================
   ================================================================================================================
                                                    FILE OVERVIEW

   @file:               Vendor.hpp

   @purpose:            Defines 


   @design:             Token 

   @usage:              Token 

   @notes:              This file 

   ================================================================================================================
*/

#ifndef _MISC_H
#define _MISC_H

#include "DataAlign.hpp"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Functions */
    char *search_vendor(unsigned char[6]);
    void string_cutter(char *, int);
    int load_known_mac_table(char *);
    void search_mac(struct data_registry *);
	
#ifdef __cplusplus
}
#endif

#endif /* _MISC_H */
