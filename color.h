//
// Created by andre on 6/11/20.
//

#ifndef RAYTRACING_COLOR_H
#define RAYTRACING_COLOR_H

#include <iostream>

#include "vec3.h"

void write_color(std::ostream& out, color pixel) {
    //Write the translated [0,255] value of each color component.
    out << static_cast<int>(255.999 * pixel.x()) << ' '
        << static_cast<int>(255.999 * pixel.y()) << ' '
        << static_cast<int>(255.999 * pixel.z()) << '\n';
}

#endif //RAYTRACING_COLOR_H
