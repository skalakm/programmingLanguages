#include "Location.h"

Location::Location()
{
  name = "none";
  this->longitude = 0.0;
  this->latitude = 0.0;
}

Location::Location(string name, double longitude, double latitude)
{
  this->name = name;
  this->longitude = longitude;
  this->latitude = latitude;
}

string Location::getName() 
{
  return name;
}

double Location::getLongitude()
{
  return longitude;
}

double Location::getLatitude()
{
  return latitude;
}

void Location::print()
{
  cout << "Location " << name << " is at latitude " << latitude 
       << " and longitude " << longitude << endl;
}
