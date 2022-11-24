#include "database.h"

Database::Database() {}

void Database::setRootPath(std::string path) {
    m_rootPath = path;
}
std::string Database::getRootPath() {
    return m_rootPath;
}
void Database::setUsualExtension(std::string extension) {
    m_usualExtension = extension;
}
std::string Database::getUsualExtension() {
    return m_usualExtension;
}
bool Database::isConnected() {
    return m_connected;
}

void Database::connect() {
    m_connected = true;
}
void Database::connect(const std::string path) {
    m_rootPath = path;
    m_connected = true;
}
void Database::connect(const std::string path, const std::string extension) {
    m_rootPath = path;
    m_usualExtension = extension;
    m_connected = true;
}
void Database::disconnect() {
    m_connected = false;
}

void Database::loadTable(std::string tableName) {
    std::string filePath = m_rootPath + tableName + "." + m_usualExtension;

    if(this->isConnected()) {    
        std::ifstream inputFile = std::ifstream(filePath);

        if (inputFile.is_open()) {
            std::cout << "Opened and loaded: " << filePath << std::endl; // TESTING -> printing when file is opened successfully
            m_tables.insert({tableName, Table(tableName, filePath)});

            std::string row;
            while (std::getline(inputFile, row)) {
                m_tables.at(tableName).addDataRow(row);
            }

            inputFile.close();

        } else {
            std::cout << "Unable to open " << filePath << std::endl;
        }
    } else {
        std::cout << "Database is not connected" << std::endl;
    }
}