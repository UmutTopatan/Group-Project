#ifndef DATABASE_MANAGER_H
#define DATABASE_MANAGER_H

#include <string>
#include <pqxx/pqxx>

class DatabaseManager {
private:
   std::string connectionString;

public:
   DatabaseManager(const std::string& connStr);
   bool connect();
   void disconnect();
};

#endif

