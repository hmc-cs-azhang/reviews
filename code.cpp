#include <iostream>
#include <unordered_map>
#include <string>
#include <memory>

using namespace std;

int main() {
    std::unordered_map<std::string, std::string> colors = {
        {"RED","#FF0000"}, 
        {"GREEN","#00FF00"}, 
        {"BLUE","#0000FF"}, 
        {"BLACK","#FFFFFF"}, 
        {"WHITE","#000000"} 
    };
    
    int *ptr = new int(42);
    std::unique_ptr(ptr);
}
