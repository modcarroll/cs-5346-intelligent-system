#include <iostream>
#include <string>
#include <locale>

void Treatment(std::string poison) {
  // Forward chaining
  if(poison == "digoxin"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with plasma digoxin concentrations." << std::endl;
  } else if (poison == "organophosphates"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with atropine." << std::endl;
  } else if (poison == "ecstasy"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a combination of activated charcoal, dantrolene, and labetalol." << std::endl;
  } else if (poison == "isopropanol"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with IV fluids along with hemodialysis and peritoneal dialysis." << std::endl;
  } else if (poison == "cocaine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a combination of activated charcoal, calcium antagonists, and diazepam." << std::endl;
  } else if (poison == "formaldehyde"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with close monitoring along with symptomatic treatment." << std::endl;
  } else if (poison == "strychnine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with activated charcoal and endotracheal intubation." << std::endl;
  } else if (poison == "nitroprusside"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with thiosulfate and ventilation with 100% oxygen." << std::endl;
  } else if (poison == "iodine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with activated charcoal and induced vomiting." << std::endl;
  } else if (poison == "benzodiaxepine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with Flumazenil." << std::endl;
  } else if (poison == "ricin"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with supportive care." << std::endl;
  } else if (poison == "tetrodoxin"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: There is no treatment for this poison. Please make patient comfortable with supportive care." << std::endl;
  } else if (poison == "batrachotoxin"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with supportive care." << std::endl;
  } else if (poison == "amatoxin"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a high dose of Penicillin." << std::endl;
  } else if (poison == "cyanide"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a Cyanide antidote kit." << std::endl;
  } else if (poison == "antihistamine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with activated charcoal and supportive care." << std::endl;
  } else if (poison == "chlorine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with activated charcoal and IV fluids." << std::endl;
  } else if (poison == "fentanyl"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with Naloxone." << std::endl;
  } else if (poison == "rotenone"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with supportive care." << std::endl;
  } else if (poison == "ketamine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a combination of benzodiazepines, activated charcoal, clonidine, and atropine." << std::endl;
  } else if (poison == "ibuprofen"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a combination of benzodiazepines and activated charcoal." << std::endl;
  } else if (poison == "methamphetamine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a combination of antipsychotics, labetalol, and nitroprusside." << std::endl;
  } else if (poison == "chlordecone"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with Cholestyramine." << std::endl;
  } else if (poison == "methanol"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a combination of fomepizole, ethanol, and folate." << std::endl;
  } else if (poison == "sodium fluoroacetatte"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with correction of hypocalcaemia." << std::endl;
  } else if (poison == "arsenic"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a blood transfusion." << std::endl;
  } else if (poison == "anthrax"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with Ciprofloxacin." << std::endl;
  } else if (poison == "mercury"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with chelation therapy." << std::endl;
  } else if (poison == "carbon monoxide"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with ventilation with 100% oxygen." << std::endl;
  } else if (poison == "amphetamine"){
    std::cout << "DIAGNOSIS: ";
    std::cout << poison;
    std::cout << " poisoning.\n";
    std::cout << "TREATMENT: Please treat with a combination of benzodiazepines and activated charcoal." << std::endl;
  } else {
    std::cout << "DIAGNOSIS: unknown.\n";
    std::cout << "No treatments for this poison exist in our knowledge base." << std::endl;
  }
}
