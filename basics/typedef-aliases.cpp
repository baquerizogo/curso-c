#include <iostream>
#include <vector>

// typedef = Reserved keyword used to create an additional 
//           name (alias) for another data type.
//           New identifier for an existing type.
//           helps with readability and reduces typos.
//           Use when there's clear benefit.
//           Replaced with 'using' (Work better with templates).

typedef std::vector<std::pair<std::string, int>> pairlist_t;
using text_t = std::string;

int main() {
    pairlist_t pairlist_t;
    text_t firstName = "Bro";

    std::cout << firstName << "\n";
    return 0;
}