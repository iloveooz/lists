
	#include <iostream>
	#include <fstream>
	
	struct List {
		double _data;
		
		List *next;
		List *prev;
		
		List () {}
		List (int data) {
			_data = data;
			next = NULL;
		}
		
		List (int data, List *N) {
			_data = data;
			next = N;
		}
	};
	
	struct ManageList {
		List *head;
		ManageList() {
			head = NULL;
		}
		ManageList &push(int a) {
			return *this;
		}
		ManageList &write(std::ostream &cout) {
			return *this;
		}
	};
	
	int main() {
		
		std::ifstream cin("input.txt");
		std::ofstream cout("output.txt");
		
		// List *list = new List(1, new List(2, new List(3)));
		
		// std::cout 	<< list->_data << ' ' << list->next->_data << ' ' << list->next->next->_data << ' ' ;
			
			List list;
				
		std::cout << '\n';
		return 0;
	}
