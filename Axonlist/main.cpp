//
//  main.cpp
//  Axonlist
//
//  Created by Rudina Kaprata on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#include <iostream>
#include "Axon.h"
#include "Axonlist.h"

int main()
{
    Axon axon1;
    Axon axon2 = Axon(2.3,4.67);
    
    axon1.print_axon();
    axon2.print_axon();
    
    Axonlist axonlist1;
    axonlist1.add_axon(axon1);
    axonlist1.add_axon(axon2);
    axonlist1.print_axonlist();
    
    
    
    
    
    return 0;
}
