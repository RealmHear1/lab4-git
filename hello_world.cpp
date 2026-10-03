#include <iostream>
#include <string>
int main(){
std::string name; // Read the user name from standard input.
std::cout << "Enter your name: "; std::getline(std::cin,name);
std::cout << "Hello world from @" << name << std::endl;
return 0;}
