#include <iostream>
#include <string>
using namespace std;

int main() 
{ 
    // Display 20 stars
    std::string stars(20, '*');
    std::cout << stars << endl;

    // Display class details
    std::string className = "CMSC140";
    int classNumber = 20433;
  
    std::cout << "Hello " << className << " CRN " << classNumber << " class!" << endl;
  
    // Display your name
    std::string myName = "Afomia Tassu.";
    std::cout << "My name is " << myName << endl;

    // Display your major
    std::string myMajor = "General Studies in Stem.";
    std::cout << "My major is " << myMajor << endl;

    // Display a personal statement
   std::string personalStatement = "I am taking this course to expand my knowledge in programming and gain practical experience in the industry.";
   std::cout << personalStatement << endl;

    // Get the current date and time
    std::string month = "October ";
    int day = 15;

    // Display the date
    std::cout << "Today is " << month << day << "th" << endl;

   std::cout << stars << endl;

    return 0;
}
