#include "student.h"

//default constructor
student::student(){

firstName="";
lastName="";
totalGrades=0;
numGrades=0;
}

//set name
void student::setName(string fName, string lName){
        firstName = fName;
        lastName = lName;
        totalGrades=0;
        numGrades=0;
}

//get full name
string student::fullName() const{

        string fullName;

        //append first, space, last to full name
        fullName.append(firstName);
        fullName.append(" ");
        fullName.append(lastName);

        return fullName;
}
void student::addGrade(int grade){
        totalGrades +=grade;
        numGrades++;
}
//calculate average of all of the other grades
double student::getScore(){
        double average=0; //average

        if(numGrades>0)
        {
                average=(double)totalGrades/(double)numGrades;
        }
        return average;
}

