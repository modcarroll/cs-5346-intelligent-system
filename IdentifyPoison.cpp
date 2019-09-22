#include <iostream>
#include <string>
#include <locale>
#include <vector>

std::string BuildKnowledgeBase(std::vector<std::string> symptoms) {

  // Just prints out entered symptoms to make sure they made it into this
  std::cout << "\nMy entered symptoms: \n";
  for (std::string i : symptoms )
  {
    std::cout << i;
    std::cout << "\n";
  }
  std::cout << "\n";

  // Here is where we use backwards chaining to determine the poison from the symptoms (parse the 'symptoms' vector for that)
  // MAKE SURE to return the all lowercase version of the poison

  // for testing, but will assign the result of the analysis to the variable result
  std::string result = "digoxin";
  return result;
}

std::string Identify_Poison() {
  std::vector<std::string> symptoms;
  std::string input;
  std::cout << "What were your symptoms? Press 'ENTER' between each symptom and 'END' to end.\n";

  // Loop
  std::cout << "Symptom (END to end): ";
  while (getline(std::cin, input)) {
    std::cout << "Symptom (END to end): ";
    if (input == "END") {
      break;
    }
    symptoms.push_back(input);
  }

  std::string poison = BuildKnowledgeBase(symptoms);
  return poison;
}
