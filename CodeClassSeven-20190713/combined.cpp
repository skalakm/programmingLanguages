#include <iostream>
#include <string>

using namespace std;

class Location {
private:
  string name;
  double longitude;
  double latitude;

public:
  Location()
  {
    name = "none";
    this->longitude = 0.0;
    this->latitude = 0.0;
  }

  Location(string name, double longitude, double latitude)
  {
    this->name = name;
    this->longitude = longitude;
    this->latitude = latitude;
  }

  string getName() 
  {
    return name;
  }

  double getLongitude()
  {
    return longitude;
  }

  double getLatitude()
  {
    return latitude;
  }

  void print()
  {
    cout << "Location " << name << " is at latitude " << latitude 
         << " and longitude " << longitude << endl;
  }
};

// a CityList stores a list of city locations
class CityList
{
private:
  // the number of cities stored in this city list
  int numCities;
  // an array of locations representing cities
  Location* cities;
public:
  CityList(int numCities)
  {
    this->numCities = numCities;
    cities = new Location[numCities];
  }

  void setCity(int cityNum, Location city)
  {
    cities[cityNum] = city;
  }

  Location getCity(int cityNum)
  {
    return cities[cityNum];
  }
};

int main(int argn, char* argv[])
{
  int numCities = 3;
  Location sanfrancisco("San Francisco", 122, 37);
  Location chicago("Chicago", 87, 41);
  Location carlisle("Carlisle", 77, 40);

  CityList cityList(numCities);
  cityList.setCity(0, sanfrancisco);
  cityList.setCity(1, chicago);
  cityList.setCity(2, carlisle);

  for(int i=0; i<numCities; i++){
    cityList.getCity(i).print();
  }
}

