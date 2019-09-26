#include <iostream>
#include <string>

using namespace std;

#define DEFAULT_POINTS 5
bool VERBOSE = true;

class HWAssignment
{
protected:
  // the number of questions on the homework assignment
  int numQuestions;
  // points[i] is the number of points allocated to the ith question
  // on the homework assignment
  int* points;

public:
  HWAssignment(int numQuestions)
  {
    if(VERBOSE) cout << "executing HWAssignment constructor" << endl;
    this->numQuestions = numQuestions;
    points = new int[numQuestions];
    for(int i=0; i<numQuestions; i++){
      points[i] = DEFAULT_POINTS;
    }
  }

  virtual ~HWAssignment()
  {
    if(VERBOSE) cout << "executing HWAssignment destructor" << endl;
    delete [] points;
  }

  void setPoints(int questionNum, int pointVal )
  {
    points[questionNum] = pointVal;
  }

  virtual int getPoints(int questionNum)
  {
    return points[questionNum];
  }
};


class ProgAssignment : public HWAssignment
{
public:
  static const int COMMENT_POINTS = 2;
private:
  string* language;

public:
  ProgAssignment(string language, int numQuestions)
    : HWAssignment(numQuestions)
  {
    if(VERBOSE) cout << "executing ProgAssignment constructor" << endl;
    this->language = new string(language);
  }

  ~ProgAssignment()
  {
    if(VERBOSE) cout << "executing ProgAssignment destructor" << endl;
    delete language;
  }

  int getPoints(int questionNum)
  {
    return points[questionNum] + COMMENT_POINTS;
  }

  string getLanguage() {return *language;};
};


int main(int argn, char* argv[])
{
  HWAssignment* assignments[3];
  assignments[0] = new HWAssignment(7);
  assignments[1] = new ProgAssignment("Java", 9);
  assignments[2] = new HWAssignment(4);

  int i;
  for(i=0; i<3; i++){
    cout << "Question 2 of Assignment " << i << " is worth "
	 << assignments[i]->getPoints(2) << endl;
  }
  for(i=0; i<3; i++){
    delete assignments[i];
  }

  // some code to demonstrate a memory leak if the destructor in
  // HWAssignment isn't virtual
  // VERBOSE = false;
  // while (true) {
  //   HWAssignment* p = new ProgAssignment("Java", 5);
  //   delete p;
  // }
}
