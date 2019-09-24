#include "CityList.h"

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

