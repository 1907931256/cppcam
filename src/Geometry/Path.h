/* -*- coding: utf-8 -*-

Copyright 2014 Lode Leroy

This file is part of PyCAM.

PyCAM is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

PyCAM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with PyCAM.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __PATH_H
#define __PATH_H

#include "Point.h"
#include <vector>


struct Run {
    std::vector<Point> m_points;
};

struct Path {
    std::vector<Run> m_runs;
    double rot_x;
    void to_OpenGL();
};

#endif
