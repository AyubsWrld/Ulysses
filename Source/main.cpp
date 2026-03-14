#include <cstdint>
#include <iostream>
#include <pcap/pcap.h>

struct FMain
{
    std::int32_t Compareables = 0;
    std::int32_t FlagPassiveMode = 0;
    std::int32_t FlagScanRange = 0;
    std::int32_t FlagScanList = 0;
    std::int32_t FlagAssumeRoot = 0;
    std::int32_t NoParseableHeader = 0;
};

int flag_fast_mode;
int flag_repeat_scan;
int flag_supress_sleep;
int flag_network_octect;
int flag_ignore_files;
int flag_auto_scan;
long flag_sleep_time;

int main (int argc, char *argv[]) 
{
    using std::cout; 

    auto [ Compareable, FlagPassiveMode, FlagScanRange, FlagScanList,
        FlagAssumeRoot, NoParseableHeader ] = FMain{};

    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t *handle;
    
    // Open device "eth0" for packet capture
    handle = pcap_open_live("eth0", 65535, 1, 1000, errbuf);
    if (handle == NULL) {
    fprintf(stderr, "Error: %s\n", errbuf);
    return 1;
    }
    
    printf("Capture started on eth0...\n");
    pcap_close(handle);
    return 0;
}
