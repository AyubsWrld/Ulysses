#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include <pcap.h>
#include <netinet/if_ether.h>
#include "DataAlign.hpp"

    #define PCAP_TOUT 512

   /* "shitty globals" */
    inline char errbuf[PCAP_ERRBUF_SIZE];

    /* Threads data structure */
    struct FThreadData {
        char *Interface     = nullptr;
        char *SourceIP      = nullptr;
        char *PCapFilter    = nullptr;
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
    void GetMac(char *disp);

#ifdef __cplusplus
}
#endif

