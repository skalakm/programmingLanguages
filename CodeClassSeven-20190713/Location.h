#include <iostream>
#include <string>

using namespace std;

class Location {
private:
  string name;
  double longitude;
  double latitude;
public:
  Location();
  Location(string name, double longitude, double latitude);
  string getName();
  double getLongitude();
  double getLatitude();
  void print();
};
