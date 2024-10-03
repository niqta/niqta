#ifndef OCTAGON_HPP
#define OCTAGON_HPP

class Octagon {
private:
    double innerRadius;

    static double areaFormula(double radius);
    static double perimeterFormula(double radius);

public:
    Octagon(double radius);
    
    double calculateArea() const;
    double calculatePerimeter() const;
};

#endif


