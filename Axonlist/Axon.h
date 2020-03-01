//
//  Axon.hpp
//  Axonlist
//
//  Created by Aldo Zaimi on 2020-02-29.
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
    double get_diameter() const;
    
    void set_centroid_x(double cx);
    void set_centroid_y(double cy);
    void set_diameter(double diam);
    
    void print_axon() const;
    double compute_axon_area() const;
    
    
private:
    double centroid_x_;
    double centroid_y_;
    double diameter_;
};












#endif /* Axon_h */
