#include <iostream>
#include <string>
#include "Profile.h"

int main()
{
    Profile sam("Sam",30,"USA","he/him");

    
    sam.add_hobby("listening to the music");
    sam.view_profile();

    return 0;
}   
