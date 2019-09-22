#include "IdentifyPoison.cpp"
#include "Treatment.cpp"
#include <string>

using namespace std;

int main() {
    string poison = Identify_Poison(); // Gets symptoms as input, determines poison
    Treatment(poison); // Given the above poison, determine the treatment
    return 0;
}
