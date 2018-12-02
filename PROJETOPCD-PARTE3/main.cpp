#include <stdio.h>
#include <string.h>
#include <thread>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <mutex>
using namespace std;
std::mutex mtx;
std::vector<std::thread> printingQueue[3];
std::vector<std::string> archives[5];
typedef struct Person{
	int id;			
	string name;
	string archives[5];
}person;

int print(person user) {
    if(user.archives[0] != null) {
    	cout << user.name << " is in the thread of number " << user.id << " and is printing " << user.archives[0] << " now." << endl;
		user.archives.pop_back(); 
    	wait(chrono::seconds(5));
    	t.[user.id].join();
    	return 0;
	} 
}

void queue(int id){
     printingQueue[i]=std::thread(print,id);
}

int main(){
	archives[5] = {'FILE1','FILE2','FILE3','FILE4','FILE5'};
	person Person1;
	person Person2;
	person Person3;
	person Person4;
	person Person5;
	person Person6;
	Person1.id = 1;
	Person2.id = 2;
	Person3.id = 3;
	Person4.id = 4;
	Person5.id = 5;
	Person6.id = 6;
	Person1.name = 'Marcel';
	Person2.name = 'João';
	Person3.name = 'Gabriela';
	Person4.name = 'Joana Popozuda';
	Person5.name = 'Galerildo do Funk Pesado';
	Person6.name = 'Ninja Ocidental';
	Person1.archives = archives;
	Person2.archives = archives;
	Person3.archives = archives;
	Person4.archives = archives;
	Person5.archives = archives;
	Person6.archives = archives;
	srand(11);
	int candidate;
	int count = 0;
	while (true){
		wait(chrono::seconds(3));
		candidate = ((rand() % 6)+1)
		if(count != 30) {
			if(Person.[candidate].archives[0] != null && printingQueue.length < 3){
			printingQueue.push(thread t.[candidate](print, Person.[candidate]));
			count ++;  
			}	
		} else {
			break;
		}
	}
	srand(22);
	count = 0;
	while (true){
		wait(chrono::seconds(3));
		candidate = ((rand() % 6)+1)
		if(count != 30) {
			if(Person.[candidate].archives[0] != null && printingQueue.length < 3){
			printingQueue.push(thread t.[candidate](print, Person.[candidate]));
			count ++;  
			}	
		} else {
			break;
		}
	}
	srand(33);
	count = 0;
	while (true){
		wait(chrono::seconds(3));
		candidate = ((rand() % 6)+1)
		if(count != 30) {
			if(Person.[candidate].archives[0] != null && printingQueue.length < 3){
			printingQueue.push(thread t.[candidate](print, Person.[candidate]));
			count ++;  
			}	
		} else {
			break;
		}
	}
        
	srand(44);
	count = 0;
	while (true){
		wait(chrono::seconds(3));
		candidate = ((rand() % 6)+1)
		if(count != 30) {
			if(Person.[candidate].archives[0] != null && printingQueue.length < 3){
			printingQueue.push(thread t.[candidate](print, Person.[candidate]));
			count ++;  
			}	
		} else {
			break;
		}
	}
    
    srand(55);
	count = 0;
	while (true){
		wait(chrono::seconds(3));
		candidate = ((rand() % 6)+1)
		if(count != 30) {
			if(Person.[candidate].archives[0] != null && printingQueue.length < 3){
			printingQueue.push(thread t.[candidate](print, Person.[candidate]));
			count ++;  
			}	
		} else {
			break;
		}
	}
   	srand(66);
	count = 0;
	while (true){
		wait(chrono::seconds(3));
		candidate = ((rand() % 6)+1)
		if(count != 30) {
			if(Person.[candidate].archives[0] != null && printingQueue.length < 3){
			printingQueue.push(thread t.[candidate](print, Person.[candidate]));
			count ++;  
			}	
		} else {
			break;
		}
	}
    
 return 0;
}

