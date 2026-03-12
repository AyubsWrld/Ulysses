#include <cstdint>
#include <iostream>

struct FMain
{
    std::int32_t Compareables = 0;
    std::int32_t FlagPassiveMode = 0;
    std::int32_t FlagScanRange = 0;
    std::int32_t FlagScanList = 0;
    std::int32_t FlagAssumeRoot = 0;
    std::int32_t NoParseableHeader = 0;
};

int main (int argc, char *argv[]) 
{
    using std::cout; 

    auto [ Compareable, FlagPassiveMode, FlagScanRange, FlagScanList,
        FlagAssumeRoot, NoParseableHeader ] = FMain{};


    for (const auto& Value : {FlagPassiveMode, FlagScanRange, FlagScanList,FlagAssumeRoot, NoParseableHeader}) 
    {
        cout << Value << "\n";
    }
    return 0;
}
