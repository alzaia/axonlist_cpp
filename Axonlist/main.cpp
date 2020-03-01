//
//  main.cpp
//  Axonlist
//
//  Created by Aldo Zaimi on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#include <iostream>
#include "Axon.h"
#include "Axonlist.h"

int main()
{
    Axon axon1;
    Axon axon2 = Axon(2.3,4.67);
    Axon axon3 = Axon(4.5,6.18);
    Axon axon4 = Axon(5.6,7.89);
    
    Axonlist axonlist1;
    axonlist1.add_axon(axon1);
    axonlist1.add_axon(axon2);
    axonlist1.add_axon(axon3);
    axonlist1.add_axon(axon4);
    
    axonlist1.print_axonlist();
    std::cout << "Number of axons: " << axonlist1.get_number_of_axons() << std::endl;
    
    axonlist1.remove_axon(axon2);
    axonlist1.print_axonlist();
    
    Axon axon5 = Axon(5.7,9.89);
    axonlist1.add_axon(axon5);
    axonlist1.print_axonlist();
    
    
    
    return 0;
}
