class ClassRoom
{
    private:
    char id[5];
    char type;
    int cap;
public:
    void setRoom();
    void disp();
}c[15];
class StudentGroup
{
    int sem;
    char group[3];
    int strength;
  public:
    void setGroup();
}stud[8];
class Course
{
    char courseID[7];
    int semNo;
    char courseCode[5];
    char courseName[50];
    char type;
    int lec;
    int tut;
    int prac;
public:
    void setCourse();
}cour[75];
class CourseDetails
{
    public:
  char courseID[7];
  char preference[3];
  char resourceType;
  char classPref[3];
};
class Faculty
{
  char facID[6];
  char name[50];
  int noCourses;
  public:

  CourseDetails cD[6];
      void setFaculty();
      void disp();
}fac[50];
class ElecPair
{
    int noPaired;
    char courseId[10][7];
public:
    void setElecPair();
}ePair[10];
class Period
{
    int semNo;
    char className[3];
    char courseID;
    char facID;
    bool availability;
};
class TimeTable
{
    Period prd[5][7];
}tt[6];
