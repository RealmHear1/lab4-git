#include <iostream>
#include <string>
int main(){
std::string name; // Read the user name
std::cout << "Enter your name: "; std::getline(std::cin,name);
std::cout << "Hello world from @" << name << std::endl;
return 0;}
