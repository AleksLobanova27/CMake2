#include "figure.h"
#include <iostream>

Figure::Figure(const std::string& name) : name(name) {}

const std::string& Figure::get_name() const {
    return name;
}