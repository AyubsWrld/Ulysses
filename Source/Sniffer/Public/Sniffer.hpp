#pragma once
#include <pcap.h>
#include <memory>
#include <pcap/pcap.h>
#include <string>
#include <iostream>
#include <vector>

#define PROMISCUOUS_ON  1
#define PROMISCUOUS_OFF 0

using   FPacketCaptureHandle  =   pcap_t*; 
using   FPacketCaptureNode    =   pcap_if_t; 

class FSniffer
{

  std::string NetworkInterface;
  char ErrorBuffer[PCAP_ERRBUF_SIZE];
  FPacketCaptureHandle Session; // Define default deleter here. 
 
public:

  FSniffer(std::string InNetworkInterface)
    : NetworkInterface(InNetworkInterface)
  {
  }

  FSniffer()
    : FSniffer(FindDevice())
  {
  }
  
  FSniffer(const FSniffer& Other) = default;
  FSniffer& operator=(const FSniffer& Other) = default;

  FSniffer(FSniffer&& Other) = default;
  FSniffer& operator=(FSniffer&& Other) = default;

  ~FSniffer() = default;

  std::vector<const char*> EnumerateNetworkDevices()
  {
    std::vector<const char*> ReturnValue(8);
    pcap_if_t* NetworkDevices;
    // case first pcap_if_t is null, this does not constitute failure.
    int Result = pcap_findalldevs(&NetworkDevices, ErrorBuffer);
    if ( Result = pcap_findalldevs(&NetworkDevices, ErrorBuffer); Result == PCAP_ERROR || !NetworkDevices )
    {
      std::cout << ErrorBuffer << '\n';
    }

    while(NetworkDevices)
    {
      ReturnValue.emplace_back(NetworkDevices->name);
      NetworkDevices = NetworkDevices->next;
    }

    return std::vector<const char*>{"Didn't work"};
  }


  const char* FindDevice()
  {
    pcap_if_t* NetworkDevices;
    int Result = pcap_findalldevs(&NetworkDevices, ErrorBuffer);
    // case first pcap_if_t is null, this does not constitute failure.
    if ( Result = pcap_findalldevs(&NetworkDevices, ErrorBuffer); Result == PCAP_ERROR || !NetworkDevices )
    {
      std::cout << ErrorBuffer << '\n';
      return nullptr; 
    }

    return NetworkDevices->name;
  }

  void OpenInterface(std::string InName)
  {
    std::cout << "Opening Interface: " << InName << '\n';
  }

  void OpenInterface()
  {
    if ( const char* NetworkDevice = FindDevice(); NetworkDevice )
    {
      // open device for sniffing.
      pcap_t* Packets = pcap_open_live(NetworkDevice, BUFSIZ, PROMISCUOUS_ON, 1000, ErrorBuffer);
      // compiler program. 
    }
  }
};
