#include <iostream>
#include <string>

using namespace std;

#define DEFAULT_POINTS 5

template<class T>
class HWAssignment
{
private:
  // the number of questions on the homework assignment
  int numQuestions;
  // points[i] is the number of points allocated to the ith question
  // on the homework assignment
  T* points;

public:
  HWAssignment(int numQuestions)
  {
    cout << "executing HWAssignment constructor" << endl;
    this->numQuestions = numQuestions;
    points = new T[numQuestions];
    for(int i=0; i<numQuestions; i++){
      points[i] = DEFAULT_POINTS;
    }
  }

  ~HWAssignment()
  {
    cout << "executing HWAssignment destructor" << endl;
    delete [] points;
  }

  void setPoints(int questionNum, T pointVal )
  {
    points[questionNum] = pointVal;
  }

  T getPoints(int questionNum)
  {
    return points[questionNum];
  }
};

int main(int argn, char* argv[])
{
  HWAssignment<double> hwAssignment(7);

  hwAssignment.setPoints(3, 8.5);

  cout << "Question 3 is worth " 
       << hwAssignment.getPoints(3) << " points." << endl;
}
