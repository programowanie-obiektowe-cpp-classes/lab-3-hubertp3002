#pragma once

#include "Stocznia.hpp"

#include <print>

unsigned int transportujFlota(unsigned int towar)
{
    if(towar == 0)
        {
        return 0;
        }
    else {
        int licznik_towaru = 0;
        int licznik_zagli = 0;

        Stocznia stocznia{};
       

        
            
        while (licznik_towaru < towar) {
            Statek* s1 = stocznia();

            licznik_towaru += s1->transportuj();

            if (dynamic_cast< Zaglowiec* >(s1)) {

                licznik_zagli += 1;

            }


            delete s1;

        }



        return licznik_zagli;
    }


    return 0;
}