#ifndef _IFACES_H

#define _IFACES_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <pcap.h>
#include <netinet/if_ether.h>
#include "DataAlign.hpp"

   /* "shitty globals" */
   char errbuf[PCAP_ERRBUF_SIZE];

   /* Threads data structure */
   struct t_data {
      char *Interface;
      char *SourceIP;
      char *PCapFilter;
      struct ether_addr **IgnoreMacs;
   };

   /* Sniffer/Packet processing Functions */
   void *start_sniffer(void *);
   void process_arp_header(struct data_registry *, const u_char *);
   void process_packet(u_char *, struct pcap_pkthdr *, const u_char *);

   /* ARP Generation & Injection */
   void inject_init(char *);
   void forge_arp(char *, char *, char *);
   void inject_destroy();

#ifdef __cplusplus
}
#endif

#endif /* _IFACES_H */
