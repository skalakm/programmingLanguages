#include "CityList.h"

CityList::CityList(int numCities)
{
  this->numCities = numCities;
  cities = new Location[numCities];
}

void CityList::setCity(int cityNum, Location city)
{
  cities[cityNum] = city;
}

Location CityList::getCity(int cityNum)
{
  return cities[cityNum];
}

