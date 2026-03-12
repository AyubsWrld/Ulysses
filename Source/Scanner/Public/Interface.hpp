#pragma once
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
   struct FThreadData {
      char *Interface;
      char *SourceIP;
      char *PCapFilter;
      struct ether_addr **IgnoreMacs;
   };

   /* Sniffer/Packet processing Functions */
   void *StartSniffer(void *);
   void ProcessArpHeader(struct data_registry *, const u_char *);
   void ProcessPacket(u_char *, struct pcap_pkthdr *, const u_char *);

   /* ARP Generation & Injection */
   void InjectInit(char *);
   void ForgeArp(char *, char *, char *);
   void InjectDestroy();

#ifdef __cplusplus
}
#endif

