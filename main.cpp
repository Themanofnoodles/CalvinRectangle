//This program was originally intended to render a rectangle based on user input
//As you can probably tell I did a lot of googling to figure out how to use delays with the built-in replit header files

#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {

    system("clear") ;

//Introduction sequence
  std::cout << "----------------------------------------------------------\n" ;
  sleep_for(nanoseconds(200000000)) ;
  std::cout << "|                                                        |\n" ;
  sleep_for(nanoseconds(200000000)) ;
  std::cout << "|                                                        |\n" ;
  sleep_for(nanoseconds(200000000)) ;
    std::cout << "|                      Welcome to                        |\n" ;
  sleep_for(nanoseconds(200000000)) ;
    std::cout << "|                                                        |\n" ;
  sleep_for(nanoseconds(200000000)) ;
    std::cout << "|                                                        |\n" ;
  sleep_for(nanoseconds(500000000)) ;
    std::cout << "|               Calvin's                                 |\n" ;
  sleep_for(nanoseconds(500000000)) ;
    std::cout << "|                      Rectangle                         |\n" ;
  sleep_for(nanoseconds(500000000)) ;
    std::cout << "|                               Creator                  |\n" ;
  sleep_for(nanoseconds(200000000)) ;
    std::cout << "|                                                        |\n" ;
  sleep_for(nanoseconds(200000000)) ;
    std::cout << "|                                                        |\n" ;
  sleep_for(nanoseconds(200000000)) ;
    std::cout << "|                                                        |\n" ;
  sleep_for(nanoseconds(200000000)) ;
    std::cout << "----------------------------------------------------------\n" <<endl ;
  sleep_for(seconds(1));
  
//Hi Bob
  std::cout << "Say Hi To Bob\n\n" ;
  sleep_for(seconds(1));
  std::cout << "     (Hi!)\n";
  std::cout << "     /\n";
  std::cout << "   []  /\n";
  std::cout << "  /||--\n";
  std::cout << "--------\n";
  std::cout << "|      |\n";

//Create the Variables
double length1 = 0 ;
double width1 = 0 ;
string unit;
  
  sleep_for(seconds(3)) ;
    system("clear") ;


//Ask for unit
  std::cout << "Please Input Your Unit of Measurement\n";

  std::cin >> unit;

//Ask for length
  std::cout << "Please Input Your Rectangle Length\n" ;
  std::cin >> length1 ;

//Ask for width
  std::cout << "Please Input Your Rectangle Width\n" ;
  std::cin >> width1 ;

//Create and define area and perimeter
double area1 = length1 * width1 ;
double perimeter1 = (length1*2) + (width1*2) ;

//Display Results
  std::cout << "\nYour Rectangle's Area is: " ;
  std::cout << area1 ;
  std::cout << " Square ";
  std::cout << unit;
  sleep_for(seconds(1));
  std::cout << "\nYour Rectangle's Perimeter is: " ;
  std::cout << perimeter1 ;
  std::cout << " ";
  std::cout << unit;  
} 