//
//  Axonlist.cpp
//  Axonlist
//
//  Created by Rudina Kaprata on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#include "Axonlist.h"
#include <iostream>


Axonlist::Axonlist()
{
    
}


Axonlist::Axonlist(double centroid_x, double centroid_y)
{
    
}

Axonlist::~Axonlist()
{
    
}
    
int Axonlist::get_number_of_axons() const
{
    return axonlist_.size();
}
    
void Axonlist::add_axon(Axon& axon)
{
    axonlist_.push_back(axon);
}
    
void Axonlist::print_axonlist() const
{
    for (int i = 0; i < axonlist_.size(); i++)
    {
        axonlist_[i].print_axon();
    }
    
    
    
}
    











