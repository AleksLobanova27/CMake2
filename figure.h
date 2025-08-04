#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
protected:
    std::string name;

    Figure(const std::string& name);

public:
    virtual ~Figure() = default;

    virtual void print_info() const = 0;

    const std::string& get_name() const;
};

#endif // FIGURE_H