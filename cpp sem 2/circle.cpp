#include <iostream>
#include <cmath>
#include "point.h"
#include "point.cpp"
#include "circle.h"

Circle::Circle(const Point& acenter, float aradius)
{
    mCenter = acenter;
    mRadius = aradius;
}


Circle::Circle()
{
    mCenter = {0.0, 0.0};
    mRadius = 1.0;
}

Circle:: Circle(const Circle& circle)
{
    Center = circle.mCenter;
    Radius = circle.mRadius;
}

Point& Circle::getCenter() const
{
    return (Point&)mCenter;
}

float Circle::getRadius() const
{
    return mRadius;
}

void Circle::setCenter(const Point& acenter)
{
    mCenter = acenter;
}

void Circle::setRadius(float aradius)
{   
    if (aradius <= 0)
        mRadius = 0;
    else
        mRadius = aradius;
}

float Circle::getArea() const
{
    return mRadius * mRadius * 3.1415;
}

float Circle::getDistance(const Point& p) const
{
    float distc = mCenter.distance(p);
    float dist = distc - mRadius;
    return dist;
}

bool Circle::isColliding(const Circle& c) const
{
    float distc = mCenter.distance(c.center);
    float radiusplus = mRadius + c.radius;
    if (radiusplus > distc)
        return true;
    else
        return false;
}

void Circle::move(const Point& p)
{
    mCenter = mCenter + p; 
}        