#include "Location.h"

// a CityList stores a list of city locations
class CityList
{
private:
  // the number of cities stored in this city list
  int numCities;
  // an array of locations representing cities
  Location* cities;
public:
  CityList(int numCities);
  void setCity(int cityNum, Location city);
  Location getCity(int cityNum);
};

