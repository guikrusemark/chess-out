#include "table.h"

Table::Table() {}
Table::Table(std::string name, std::string filePath) 
: m_name(name), m_filePath(filePath) {}
Table::Table(std::string name, std::string filePath, bool hasHeader) 
: m_name(name), m_filePath(filePath), m_hasHeader(hasHeader) {}

void Table::addDataRow(std::string row) {
    std::vector<std::string> dataRow;

    std::stringstream rowStream(row);
    std::string cell;

    while (std::getline(rowStream, cell, ',')) {
        dataRow.push_back(cell);
    }

    m_dataMatrix.push_back(dataRow);

    if(m_hasHeader) {
        m_header = m_dataMatrix.at(0);
        m_dataMatrix.erase(m_dataMatrix.begin());
    }
}

unsigned int Table::rowCount() {
    return m_dataMatrix.size();
}
unsigned int Table::columnCount() {
    if(this->rowCount() != 0) {
        return m_dataMatrix[0].size();
    }
    return 0;
}

std::string Table::getName() {
    return m_name;
}
std::string Table::getFilePath() {
    return m_filePath;
}
bool Table::hasHeader() {
    return m_hasHeader;
}
std::vector<std::string> Table::getHeader() {
    if(m_hasHeader) {
        return m_header;
    }
    return {}; // TODO -> decide whether return empty vector or throw exception
}
bool Table::isSynced() {
    return m_isSynced;
}