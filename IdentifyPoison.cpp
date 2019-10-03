#include <iostream>
#include <string>
#include <locale>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>

std::string conclusion(int diagnosis) {
  
  // Conslusion List
  std::map<int, std::string> poison;
  std::map<int, std::string>::iterator iter;
  iter = poison.begin();

  poison.insert({3, "ricin"});
  poison.insert({4, "anthrax"});
  poison.insert({9, "chlordecone"});
  poison.insert({10, "carbon monoxide"});
  poison.insert({11, "fentanyl"});
  poison.insert({12, "strychinine"});
  poison.insert({14, "amatoxin"});
  poison.insert({17, "rotenone"});
  poison.insert({18, "sodium fluoroacetate"});
  poison.insert({19, "dioxin"});
  poison.insert({21, "tetrodotoxin"});
  poison.insert({22, "nitroprusside"});
  poison.insert({23, "batrachotoxin"});
  poison.insert({30, "methanol"});
  poison.insert({31, "iodine"});
  poison.insert({32, "amphetamine"});
  poison.insert({33, "chlorine"});
  poison.insert({34, "methamphetamine"});
  poison.insert({35, "formaldehyde"});
  poison.insert({36, "ibuprofen"});
  poison.insert({37, "isopropanol"});
  poison.insert({39, "cyanide"});
  poison.insert({47, "mercury"});
  poison.insert({48, "arsenic"});
  poison.insert({55, "benzodiaxepine"});
  poison.insert({59, "cocaine"});
  poison.insert({70, "ketamine"});
  poison.insert({74, "organophosphates"});
  poison.insert({79, "ecstasy"});
  poison.insert({105, "antihistamine"});

  // print result
  std::string result;
  iter = poison.find(diagnosis);
  if (iter != poison.end()) result = poison.at(diagnosis);
  else result = "unknown";

  return result;
  }

std::string BuildKnowledgeBase(std::vector<std::string> symptoms) {

  // Just prints out entered symptoms to make sure they made it into this
  std::cout << "\nMy entered symptoms: \n";
  for (std::string i : symptoms )
  {
    std::cout << i;
    std::cout << "\n";
  }
  std::cout << "\n";

  // backward chaining to determine the correct poison 
  std::string result = " "; 
  int symptomCount = symptoms.size();

  // Variable List of Symptoms
  std::map<std::string, int> symptomVar;
  std::map<std::string, int>::iterator iter;
  symptomVar["fever"] = 1;
  symptomVar["chest tightness"] = 2;
  symptomVar["swollen neck"] = 3;
  symptomVar["vomiting"] = 4;
  symptomVar["nausea"] = 5;
  symptomVar["confusion"] = 6;
  symptomVar["dizziness"] = 7;
  symptomVar["muscle contraction"] = 8;
  symptomVar["abdominal pain"] = 9;
  symptomVar["diarrhea"] = 10;
  symptomVar["anxiety"] = 11;
  symptomVar["blurred vision"] = 12;
  symptomVar["pharyngeal swelling"] = 13;
  symptomVar["seizure"] = 14;
  symptomVar["throat pain"] = 15;
  symptomVar["paresthesia"] = 16;
  symptomVar["irritation of skin"] = 17;
  symptomVar["breathing problems"] = 18;
  symptomVar["coma"] = 19;
  symptomVar["hypothermia"] = 20;
  symptomVar["paranoia"] = 21;
  symptomVar["renal impairment"] = 22;
  symptomVar["heart failure"] = 23;
  symptomVar["mydriasis"] = 24;
  symptomVar["excessive salivation"] = 25;
  symptomVar["muscle weakness"] = 26; 
  symptomVar["drowsiness"] = 27;
  symptomVar["incontinence"] = 28;
  symptomVar["agitation"] = 29;
  symptomVar["hallucination"] = 30;
  symptomVar["convulsion"] = 31;
  symptomVar["lethargy"] = 32;
  symptomVar["slurred speech"] = 33;
  symptomVar["sore throat"] = 34;
  symptomVar["sneezing"] = 35;
  symptomVar["runny nose"] = 36;
  symptomVar["nervous system depression"] = 37;

  // find the position of diagnosis
  int poisonID = 0;
  for (int i = 0; i < symptomCount; i++) {
    iter = symptomVar.find(symptoms[i]);
    if (iter != symptomVar.end()) poisonID = poisonID + iter -> second;
  } 
  result = conclusion(poisonID);
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
  std::cout << "RESULT :" << poison << "\n";
  return poison;
}
