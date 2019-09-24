#include <iostream>
#include <string>

using namespace std;

#define DEFAULT_POINTS 5

class HWAssignment
{
private:
  // the number of questions on the homework assignment
  int numQuestions;
  // points[i] is the number of points allocated to the ith question
  // on the homework assignment
  int* points;

public:
  HWAssignment(int numQuestions)
  {
    cout << "executing HWAssignment constructor" << endl;
    this->numQuestions = numQuestions;
    points = new int[numQuestions];
    for(int i=0; i<numQuestions; i++){
      points[i] = DEFAULT_POINTS;
    }
  }

  ~HWAssignment()
  {
    cout << "executing HWAssignment destructor" << endl;
    delete [] points;
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
  string* language;

public:
  ProgAssignment(string language, int numQuestions)
    : HWAssignment(numQuestions)
  {
    cout << "executing ProgAssignment constructor" << endl;
    this->language = new string(language);
  }

  ~ProgAssignment()
  {
    cout << "executing ProgAssignment destructor" << endl;
    delete language;
  }

  string getLanguage() {return *language;};
};


int main(int argn, char* argv[])
{
  ProgAssignment progAssignment("Java", 7);
  cout << "Question 3 is worth " 
       << progAssignment.getPoints(3) << " points." << endl;
  cout << "The assignment is in the " << progAssignment.getLanguage()
       << " programming language." << endl;
}
