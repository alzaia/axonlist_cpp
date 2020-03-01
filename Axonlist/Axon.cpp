//
//  Axon.cpp
//  Axonlist
//
//  Created by Rudina Kaprata on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#include "Axon.h"
#include <iostream>

const double PI = 3.1416;


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

double Axon::get_diameter() const
{
    return diameter_;
}

void Axon::set_centroid_x(double cx)
{
    centroid_x_ = cx;
}
void Axon::set_centroid_y(double cy)
{
    centroid_y_ = cy;
}
void Axon::set_diameter(double diam)
{
    diameter_ = diam;
}

void Axon::print_axon() const
{
    std::cout << "Axon centroid (x,y): ";
    std::cout << "(" << centroid_x_ << "," << centroid_y_ << ")" << std::endl;
}

double Axon::compute_axon_area() const
{
    return (PI * (diameter_/2.0) * (diameter_/2.0));
}

Axon::~Axon()
{
    
}







