//
//  Axonlist.hpp
//  Axonlist
//
//  Created by Aldo Zaimi on 2020-02-29.
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
    
    unsigned long get_number_of_axons() const;
    
    void add_axon(Axon& axon);
    bool remove_axon(Axon& axon);
    
    void print_axonlist() const;
    
    bool are_equal(const Axon& axon1, const Axon& axon2) const;
    
    double compute_average_diameter() const;

    
    
private:
    std::vector<Axon> axonlist_;
};







#endif /* Axonlist_h */
