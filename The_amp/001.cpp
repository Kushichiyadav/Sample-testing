#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x; //This is how you declare a variable
    x = 5; //This is called assignment of value 
    
    std::string string_name;
    string_name = "i am not a bad person";

    std::string string_name_with_declaration = "this is already declared";

    std::cout<< string_name << string_name_with_declaration;

    std::cout << x ;



}