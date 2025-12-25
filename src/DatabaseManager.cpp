#include "../include/DatabaseManager.h"
#include <iostream>

DatabaseManager::DatabaseManager(const std::string& connStr) : connectionString(connStr) {}


bool DatabaseManager::connect() {
   try {
      //Print to test if it is working
      std::cout << "Trying to connect with: " << connectionString << std::endl;
      // pqxx connection will be added here after Database is ready
      return true;
   } catch (const std::exception &e) {
        std::cerr << "Connection failed: " << e.what() << std::endl;
        return false;
   }
}

void DatabaseManager::disconnect() {
   std::cout << "Disconnected." << std::endl;
}

