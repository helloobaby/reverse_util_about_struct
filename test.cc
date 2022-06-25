#include "util_stru.hh"

#include <iostream>
struct ETHREAD
{
    union
    {
        struct 
        {
            make_offset(0x4C8);
            void* Cid[2];
        };
        struct 
        {
            make_offset(0x560);
            uint32_t CrossThreadFlags;
        };
    };
};

int main()
{
    std::cout << std::hex;
    std::cout << "offset Cid is : " << offsetof(ETHREAD,Cid) << std::endl; 
    std::cout << "offset Flags is : " << offsetof(ETHREAD,CrossThreadFlags) << std::endl; 
    return 0;
}
