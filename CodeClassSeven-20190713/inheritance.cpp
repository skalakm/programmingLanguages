#include <iostream>
#include <string>

using namespace std;

#define NUM_QUESTIONS 10
#define DEFAULT_POINTS 5

class HWAssignment
{
private:
  // points[i] is the number of points allocated to the ith question
  // on the homework assignment
  int points[NUM_QUESTIONS];

public:
  HWAssignment()
  {
    cout << "executing HWAssignment constructor" << endl;
    for(int i=0; i<NUM_QUESTIONS; i++){
      points[i] = DEFAULT_POINTS;
    }
  }

  void setPoints(int questionNum, int pointVal )
  {
    points[questionNum] = pointVal;
  }

  int getPoints(int questionNum)
  {
    return points[questionNum];
  }
};


class ProgAssignment : public HWAssignment
{
private:
  string language;

public:
  ProgAssignment(string language)
  {
    cout << "executing ProgAssignment constructor" << endl;
    this->language = language;
  }

  string getLanguage() {return language;};
};


int main(int argn, char* argv[])
{
  ProgAssignment progAssignment("Java");
  cout << "Question 3 is worth " 
       << progAssignment.getPoints(3) << " points." << endl;
  cout << "The assignment is in the " << progAssignment.getLanguage()
       << " programming language." << endl;
}
