/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Element.h"

Element::Element(std::string title, std::string author, std::string publisher, std::string date, std::string category):_title(title), _author(author), _publisher(publisher), _date(date), _category(category), _next(NULL)
{
}
