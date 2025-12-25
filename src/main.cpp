#include <iostream>
#include "../include/DatabaseManager.h"

int main() {
   std::cout << "Student Information System Started" << std::endl;

   DatabaseManager db("host=db port=5432 dbname=studentdb user=studentuser password=studentpass");
   db.connect();

   return 0;
}

