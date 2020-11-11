cmake_minimum_required(VERSION 3.17)
project(raytracing)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-O3")

add_executable(raytracing main.cpp vec3.h color.h ray.h hittable.h sphere.h hittable_list.h raytracing.h camera.h material.h)