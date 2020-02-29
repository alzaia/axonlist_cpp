//
//  Axon.cpp
//  Axonlist
//
//  Created by Rudina Kaprata on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#include "Axon.h"
#include <iostream>


Axon::Axon()
{
    centroid_x_ = 0.0;
    centroid_y_ = 0.0;
}

Axon::Axon(double centroid_x, double centroid_y)
    : centroid_x_(centroid_x), centroid_y_(centroid_y)
{}


double Axon::get_centroid_x() const
{
    return centroid_x_;
}

double Axon::get_centroid_y() const
{
    return centroid_y_;
}

void Axon::set_centroid_x(double cx)
{
    centroid_x_ = cx;
}
void Axon::set_centroid_y(double cy)
{
    centroid_y_ = cy;
}

void Axon::print_axon() const
{
    std::cout << "Axon centroid (x,y): ";
    std::cout << "(" << centroid_x_ << "," << centroid_y_ << ")" << std::endl;
}

Axon::~Axon()
{
    
}







