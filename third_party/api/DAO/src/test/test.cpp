#include <iostream>

#include "database.h"

static void test() {
	std::cout << std::endl << std::endl;

	Database db = Database();
	db.connect("./db/", "csv");
	
	db.loadTable("caes");
	db.loadTable("inseminacoes");
	db.loadTable("inseminacoe");

	std::cout << std::endl << std::endl;
};