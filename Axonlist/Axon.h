//
//  Axon.hpp
//  Axonlist
//
//  Created by Rudina Kaprata on 2020-02-29.
//  Copyright © 2020 AZ. All rights reserved.
//

#ifndef Axon_h
#define Axon_h

#include <stdio.h>




class Axon
{
public:
    Axon();
    Axon(double centroid_x, double centroid_y);
    ~Axon();
    
    double get_centroid_x() const;
    double get_centroid_y() const;
    
    void set_centroid_x(double cx);
    void set_centroid_y(double cy);
    
    void print_axon() const;
    
    
private:
    double centroid_x_;
    double centroid_y_;
};












#endif /* Axon_h */
