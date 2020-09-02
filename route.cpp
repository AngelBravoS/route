///Búsqueda de primero en profundidad

#include <iostream>
#include <string>
#include <vector>

/*******************************
 * Clase para la base de datos *
 *******************************/

class Database {
	public:
		Database();
		Database(unsigned int origin, unsigned int  destiny);
		Database(unsigned int origin, unsigned int, unsigned int distance);
		void start();
		void printVertex(unsigned int vertex);
		enum Vertex { A, B, C, D, E};
		std::vector<Database> data_list;
	protected:
		unsigned int initialVertex;
		unsigned int finalVertex;
		unsigned int vertexDistance;
		unsigned int pos_ult;
		std::string vertex;
};

Database::Database() {}

Database::Database (unsigned int origin, unsigned int destiny) {
	initialVertex = origin;
	finalVertex = destiny;
	//char visitado = false;
	pos_ult = 0;
}

Database::Database (unsigned int origin, unsigned int  destiny, unsigned int distance) {
	initialVertex = origin;
	finalVertex = destiny;
	vertexDistance = distance;
	//char visitado = false;
	pos_ult = 0;
}

void Database::start() {
	Database walk1 = {A, B, 2}; //data_list[0]
	data_list.push_back(walk1);
	Database walk2 = {A, C, 3};
	data_list.push_back(walk2);
	Database walk3 = {C, D, 1};
	data_list.push_back(walk3);
	Database walk4 = {C, E, 4};
	data_list.push_back(walk4);

	//printVertex(data_list[0].from); // A
	
}

void Database::printVertex(unsigned int value) {
	switch (value) {
		case 0 : {vertex.assign("A"); break;}
		case 1 : {vertex.assign("B"); break;}
		case 2 : {vertex.assign("C"); break;}
		case 3 : {vertex.assign("D"); break;}
		case 4 : {vertex.assign("E"); break;}
	}
	std::cout << vertex << "\n";
}

/**********************
 * Clase para la pila *
 **********************/

class Pila {
	public:
		Pila();
		void mete();
		void saca();
	protected:
		unsigned int from;
		unsigned int to;
		unsigned int distance;
		unsigned int pos_ult;
		std::vector<Pila> stack_vector;
};


/********************
 * main y funciones *
 ********************/

/*Prototipos*/

int main (){
	unsigned int origin;
	unsigned int destiny;
	std::vector<Database> vectorEntrada;
	
	std::cout << "Programa de búsqueda." << "\n";
	std::cout << "versión 0.0.1." << "\n";

	std::cout << "[0]A, [1]B, [2]C, [3]D, [4]E" << "\n";
	
	std::cout << "Selecciona el vértice origen: ";
	std::cin >> origin;
	std::cout << "Selecciona el vértice destino: ";
	std::cin >> destiny;

	

	Database db(origin, destiny);
	db.start();
	

	}
