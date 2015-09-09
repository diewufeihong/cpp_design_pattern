#include "dateprinter.hh"

#include <iostream>
#include <ctime>
#include <cstdlib>

void DatePrinter::printDate() {
  time_t now = time(nullptr);
  char date[128] = {
      0,
  };
  std::strftime(date, sizeof(date), "%Y,%m,%d", localtime(&now));

  std::cout << "[DATE] " << date << '\n';
}
