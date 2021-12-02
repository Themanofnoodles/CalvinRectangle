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
  std::cout << "Say Hi To Bob\n\n" ;
  std::cout << "     (Hi!)\n";
  std::cout << "     /\n";
  std::cout << "   []  /\n";
  std::cout << "  /||--\n";
  std::cout << "--------\n";
  std:;cout << "|      |\n";

int length1 = 0 ;
int width1 = 0 ;

  sleep_for(seconds(3)) ;
    system("clear") ;
  
  std::cout << "Please Input Your Rectangle Length\n" ;
  std::cin >> length1 ;

    system("clear") ;

  std::cout << "Please Input Your Rectangle Width\n" ;
  std::cin >> width1 ;

    system("clear") ;

int length2 = length1 * 2 ;
int width2 = width1 * 2 ;
int area = length1 * width1 ;
int perimeter = length2 + width2 ;

  std::cout << "Your Rectangle's Area is: " ;
  std::cout << area ;
  std::cout << "\n" ;
  std::cout << "Your Rectangle's Perimeter is: " ;
  std::cout << perimeter ;
    
} 