//
//  Axonlist.hpp
//  Axonlist
//
//  Created by Rudina Kaprata on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#ifndef Axonlist_h
#define Axonlist_h

#include <stdio.h>
#include <vector>
#include "Axon.h"



class Axonlist
{
public:
    Axonlist();
    Axonlist(double centroid_x, double centroid_y);
    ~Axonlist();
    
    int get_number_of_axons() const;
    
    void add_axon(Axon& axon);
    
    void print_axonlist() const;
    
    

    
    
private:
    std::vector<Axon> axonlist_;
};







#endif /* Axonlist_h */
