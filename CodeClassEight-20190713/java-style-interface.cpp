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

  int getNumQuestions()
  {
    return numQuestions;
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


class SourceCodeInfo
{
public:
  virtual int getLinesOfCode() = 0;
  virtual string getFileName() = 0;
};

class ProgAssignment : public HWAssignment, public SourceCodeInfo
{
public:
  static const int COMMENT_POINTS = 2;
private:
  string* language;
  int linesOfCode;
  string fileName;


public:
  ProgAssignment(string language, int numQuestions, int linesOfCode, string fileName)
    : HWAssignment(numQuestions)
  {
    if(VERBOSE) cout << "executing ProgAssignment constructor" << endl;
    this->language = new string(language);
    this->linesOfCode = linesOfCode;
    this->fileName = fileName;
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

  string getLanguage() {return *language;}

  int getLinesOfCode() {return linesOfCode;}

  string getFileName() {return fileName;}

};


int main(int argn, char* argv[])
{
  ProgAssignment progAssignment("Java", 9, 534, "Wombat.java");

  cout << "File name is " << progAssignment.getFileName() << endl;
  cout << "Number of questions is " << progAssignment.getNumQuestions() << endl;
  
}
