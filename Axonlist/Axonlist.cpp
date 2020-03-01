//
//  Axonlist.cpp
//  Axonlist
//
//  Created by Aldo Zaimi on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#include "Axonlist.h"
#include <iostream>


Axonlist::Axonlist()
{}

Axonlist::Axonlist(double centroid_x, double centroid_y)
{}

Axonlist::~Axonlist()
{}
    
unsigned long Axonlist::get_number_of_axons() const
{
    return axonlist_.size();
}
    
void Axonlist::add_axon(Axon& axon)
{
    axonlist_.push_back(axon);
}

bool Axonlist::remove_axon(Axon& axon)
{
    bool axon_removed = false;
    for (int i = 0; i < axonlist_.size(); i++)
    {
        if (are_equal(axon, axonlist_[i]))
        {
            axonlist_.erase(axonlist_.begin()+i);
            std::cout << "The following axon was removed: \n";
            axon.print_axon();
            axon_removed = true;
        }
    }
    if (axon_removed == false)
    {
        std::cout << "Axon not found in axonlist \n";
    }
    return axon_removed;
}

bool Axonlist::are_equal(const Axon& axon1, const Axon& axon2) const
{
    return (axon1.get_centroid_x() == axon2.get_centroid_x() && axon1.get_centroid_y() == axon2.get_centroid_y());
}


    
void Axonlist::print_axonlist() const
{
    if (axonlist_.size() != 0)
    {
        std::cout << " - - - Printing axonlist - - - " << std::endl;
        for (int i = 0; i < axonlist_.size(); i++)
        {
            axonlist_[i].print_axon();
        }
        std::cout << " - - - - - - - - - - - - - - - " << std::endl;
    }
    else
    {
        std::cout << "The axonlist is empty. \n";
    }
}
    


double Axonlist::compute_average_diameter() const
{
    double sum = 0.0;
    
    for (int i = 0; i < axonlist_.size(); i++)
    {
        sum += axonlist_[i].get_diameter();
    }
    
    return sum/axonlist_.size();
}








