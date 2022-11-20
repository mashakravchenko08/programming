#pragma once
#include "point.h"
#include "point.cpp"

class Circle
{
    private:
        const Point& mCenter;
        float mRadius;

    public:
        Circle(const Point& acenter, float aradius);
        Circle();

        Point& getCenter() const;
        float getRadius() const;

        void setCenter(const Point& acenter);
        void setRadius(float aradius);

        float getArea() const;
        float getDistance(const Point& p) const;
        bool isColliding(const Circle& c) const;
        void move(const Point& p);

};