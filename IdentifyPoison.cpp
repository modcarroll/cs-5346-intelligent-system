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

  // backward chaining to determine the correct poison 
  std::string result = " "; 
  int symptomCount = symptoms.size();  

  // diagnose ricin and anthrax
  if (symptomCount == 2 && (symptoms[0] == "fever" || symptoms[1] == "fever")) {
    if (symptoms[0] == "chest tightness" || symptoms[1] == "chest tightness") {
      result = "ricin";
      return result;
    }
    else if (symptoms[0] == "swollen neck" || symptoms[1] == "swollen neck") {
      result = "anthrax";
      return result;
    }
  }

  // diagnose chlordecone, carbon monoxide, fentanyl, and stychnine
  if (symptomCount == 2 && (symptoms[0] == "vomiting" || symptoms[1] == "vomiting")) {
    if (symptoms[0] == "nausea" || symptoms[1] == "nausea") {
      result = "chlordecone";
      return result;
    }
    else if (symptoms[0] == "confusion" || symptoms[1] == "confusion") {
      result = "carbon monoxide";
      return result;
    }
    else if (symptoms[0] == "diziness" || symptoms[1] == "diziness") {
      result = "fentanyl";
      return result;
    }
    else if (symptoms[0] == "muscle contraction" || symptoms[1] == "muscle contraction") {
      result = "stychnine";
      return result;
    }
  }

  // diagnose sodium flouroacetate, digoxin, and nitroprusside
  if (symptomCount == 3 && (symptoms[0] == "vomiting" || symptoms[1] == "vomiting" || symptoms[2] == "vomiting")) {
    if (symptoms[0] == "nausea" || symptoms[1] == "nausea" || symptoms[2] == "nausea") {
      if (symptoms[0] == "abdominal pain" || symptoms[1] == "abdominal pain" || symptoms[2] == "abdominal pain") {
        result = "sodium fluroacetate";
        return result;
      }
      else if (symptoms[0] == "diarrhea" || symptoms[1] == "diarrhea" || symptoms[2] == "diarrhea") {
        result = "digoxin";
        return result;
      }
    }
    else if (symptoms[0] == "diziness" || symptoms[1] == "diziness" || symptoms[2] == "diziness") {
      if (symptoms[0] == "anxiety" || symptoms[1] == "anxiety" || symptoms[2] == "anxiety") {
        result = "nitroprusside";
        return result;
      }
    }
  }
 
 // diagnose methanol, iodine, ampetamine, and chlorine
  if (symptomCount == 4 && (symptoms[0] == "vomiting" || symptoms[1] == "vomiting" || symptoms[2] == "vomiting" || symptoms[3] == "vomiting")) {
    if (symptoms[0] == "abominal pain" || symptoms[1] == "abdominal pain" || symptoms[2] == "abdominal pain" || symptoms[3] == "abdominal pain") {
      if (symptoms[0] == "blurred vision" || symptoms[1] == "blurred vision" || symptoms[2] == "blurred vision" || symptoms[3] == "blurred vision") {
        result = "methanol";
        return result;
      }
      else if (symptoms[0] == "seizure" || symptoms[1] == "seizure" || symptoms[2] == "seizure" || symptoms[3] == "seizure") {
        result = "ampetamine";
        return result;
      }
      else if (symptoms[0] == "throat pain" || symptoms[1] == "throat pain" || symptoms[2] == "throat pain" || symptoms[3] == "throat pain") {
        result = "chlorine";
        return result;
      }
    }
    else if (symptoms[0] == "diarrhea" || symptoms[1] == "diarrhea" || symptoms[2] == "diarrhea" || symptoms[3] == "diarrhea") {
      if (symptoms[0] == "pharyngeal swelling" || symptoms[1] == "pharyngeal swelling" || symptoms[2] == "pharyngeal swelling" || symptoms[3] == "pharyngeal swelling") {
        result = "iodine";
        return result;
      }
    }
  }
  
  // diagnose tetrodotoxin and amatoxin
  if (symptomCount == 2 && (symptoms[0] == "nausea" || symptoms[1] == "nausea")) {
    if (symptoms[0] == "parathesia" || symptoms[1] == "parathesia") {
      result = "tetrodotoxin";
      return result;
    }
    else if (symptoms[0] == "abdominal pain" || symptoms[1] == "abdominal pain") {
      result = "amatoxin";
      return result;
    }
  }
  
  // diagnose retenone and formaldehyde
  if (symptomCount == 1 && symptoms[0] == "irritation of skin") {
    result = "rotenone";
    return result;
  }
  if (symptomCount == 2 && (symptoms[0] == "irritation of skin" || symptoms[1] == "irritation of skin")) {
    if (symptoms[0] == "breathing problem" || symptoms[1] == "breathing problem") {
      result = "formaldehyde";
      return result;
    }
  }

  // diagnose cyanide, ibuprofen, and methamphetamine
  if (symptomCount == 2 && (symptoms[0] == "seizure" || symptoms[1] == "seizure")) {
    if (symptoms[0] == "hypothermia" || symptoms[1] == "hypothermia") {
      result = "methamphetamine";
      return result;
    }
    else if (symptoms[0] == "renal impairment" || symptoms[1] == "renal impairment") {
      result = "ibuprofen";
      return result;
    }
  }
  if (symptomCount == 3 && (symptoms[0] == "seizure" || symptoms[1] == "seizure" || symptoms[2] == "seizure")) {
    if (symptoms[0] == "coma" || symptoms[1] == "coma" || symptoms[2] == "coma") {
      if (symptoms[0] == "confusion" || symptoms[1] == "confusion" || symptoms[2] == "confusion") {
        result = "cyanide";
        return result;
      }
    }
  }

  // diagnose batrachotoxin
  if (symptomCount == 1 && symptoms[0] == "heart failure") {
    result = "batrachotoxin";
    return result;
  }

  // diagnose ketamine and organophosphates
  if (symptomCount == 3 && (symptoms[0] == "paranoia" || symptoms[1] == "paranoia" || symptoms[2] == "paranoia")) {
    if (symptoms[0] == "mudiasis" || symptoms[1] == "mudriasis" || symptoms[2] == "mudriasis") {
      result = "ketamine";
      return result;
    }
    else if (symptoms[0] == "incontinence" || symptoms[1] == "incontinence" || symptoms[2] == "incontinence") {
      result = "organophosphates";
      return result; 
    }
  }
      
  // diganose mercury and arsenic
  if (symptomCount == 2 && (symptoms[0] == "paranoia" || symptoms[1] == "paranoia")) {
    if (symptoms[0] == "muscle weakness" || symptoms[1] == "muscle weakness") {
      result = "mercury";
      return result;
    }
    else if (symptoms[0] == "drowsiness" || symptoms[1] == "drowsiness") {
      result = "arsenic";
      return result;
    }
  }

  // diagnose cocaine and ecstasy
  if (symptomCount == 2 && (symptoms[0] == "agitation" || symptoms[1] == "agitation")) {
    if (symptoms[0] == "hallucination" || symptoms[1] == "hallucination") {
      result  = "cocaine";
      return result;
    }
  }
  if (symptomCount == 3 && (symptoms[0] == "agitation" || symptoms[1] == "agitation" || symptoms[2] == "agiation")) {
    if (symptoms[0] == "coma" || symptoms[1] == "coma" || symptoms[2] == "coma") {
      if (symptoms[0] == "convulsion" || symptoms[1] == "convulsion" || symptoms[2] == "convulsion") {
        result = "ecstasy";
        return result; 
      }
    }
  }
  
  // diagnose isopropanol, benzodiaxepine, and antihistamine 
  if (symptomCount == 1 && symptoms[0] == "nervous system depression") {
    result = "isopropanol";
    return result;
  } 
  if (symptomCount == 2 && (symptoms[0] == "lethargy" || symptoms[1] == "lethargy")) {
    if (symptoms[0] == "slurred speech" || symptoms[1] == "slurred speech") {
      result  = "benzodiaxepine";
      return result;
    }
  }
  if (symptomCount == 3 && (symptoms[0] == "sore throat" || symptoms[1] == "sore throat" || symptoms[2] == "sore throat")) {
    if (symptoms[0] == "sneezing" || symptoms[1] == "sneezing" || symptoms[2] == "sneezing") {
      if (symptoms[0] == "runny nose" || symptoms[1] == "runny nose" || symptoms[2] == "runny nose") {
        result = "antihistamine";
        return result;
      }
    }
  }
  
  // no poison found  
  std::cout << "COULD NOT IDENTIFY THE POISON!\n";
 
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
