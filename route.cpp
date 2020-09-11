///Búsqueda de primero en profundidad

#include <iostream>
#include <string>
#include <vector>
#include <stack>

/*******************************
 * Clase para la base de datos *
 *******************************/

class Database {
	public:
		Database();
		Database(unsigned int origin, unsigned int  destiny);
		Database(unsigned int origin, unsigned int, unsigned int distance);
		
		void setRoutesOnDatabase();
		void printVertex(unsigned int vertex);
		long unsigned int numberOfRoutes();
		void printDatabase();
		
		const unsigned int numOfVertex = 5;
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

void Database::setRoutesOnDatabase() {
	Database route1 = {A, B, 2}; //data_list[0]
	data_list.push_back(route1);
	Database route2 = {A, C, 3};
	data_list.push_back(route2);
	Database route3 = {C, D, 1};
	data_list.push_back(route3);
	Database route4 = {C, E, 4};
	data_list.push_back(route4);
	//unsigned int n = data_list.size();
	//std::cout << data_list.size() << "\n"; <- Número de rutas
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
	std::cout << vertex; // << "\n";
}

void Database::printDatabase() {
	for(unsigned int i = 0; i < (numOfVertex-1); i++){
		printVertex(data_list[i].initialVertex);
		std::cout << ", ";
		printVertex(data_list[i].finalVertex);
		std::cout << ", " << 
		data_list[i].vertexDistance 
		<< "\n";
		}
	}

long unsigned int Database::numberOfRoutes(){
	return data_list.size();
}
	
/**************************************
 * Clase para la matriz de adyacencia *
 **************************************/
 //¿Herencia?
class AdjacencyMatrix {
	public:
		AdjacencyMatrix();
		void transformIntoMatrix();
	private:
		std::vector<Database> matrix;
		std::vector<unsigned int> distance;	
	};

void AdjacencyMatrix::transformIntoMatrix() {
	//unsigned int adyacMatrix[data_list.size()][numOfVertex+1];
	
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
bool areConnected();


int main (){
	Database db;
	unsigned int origin;
	unsigned int destiny;
	std::stack<unsigned int> stack;
	std::vector<unsigned int> vector;
	
	db.setRoutesOnDatabase();
	
	std::cout << "Programa de búsqueda." << "\n";
	std::cout << "versión 0.0.1." << "\n";

	std::cout << "[0]A, [1]B, [2]C, [3]D, [4]E" << "\n";
	
	std::cout << "Selecciona el vértice origen: ";
	std::cin >> origin;
	std::cout << "Selecciona el vértice destino: ";
	std::cin >> destiny;

	std::cout << "\n";
	
	std::cout << "Número de entradas en la base de datos = " << db.numberOfRoutes() << "\n";
	std::cout << "\n";
	
	std::cout << "Matriz de grafos." << "\n";
	db.printDatabase();
	std::cout << "\n";
	
	std::cout << "Matriz de adyacencia." << "\n";
	

	}
	
	
bool areConnected() {
	bool connection = false;
	
	/*unidas(desde, hacia)
char *desde, *hacia;
{
	register int t;

	for(t=pos_ult-1; t>1; t--)
		if(!strcmp(vuelos[t].desde, desde) &&
		!strcmp(vuelos[t].hacia, hacia)) return vuelos[t].distancia;
		return 0;
}*/
	return connection;
	}
