/*
 * NestedClassesAndFriendship.cpp
 *
 *  Created on: Jun 16, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class Egg;
class Nest;

class Hen{

public:

	class Nest{
	private:
		int Nesti;
	public:
		friend class Hen;
		friend class Egg;

		class Egg{
		private:
			int Eggi;
		public:
			friend class Hen;
			friend class Nest;
			void display();
			void displayNest(Nest* pNest);
		};
		void display();
		void displayEgg(Egg* pEgg);

	};
	void display();
	void displayEgg(Nest::Egg* pEgg);
	void displayNest(Nest* pNest);
};

void Hen::display(){
	cout<<__PRETTY_FUNCTION__<<endl;
}

void Hen::displayNest(Nest* pNest){
	cout<<pNest->Nesti<<endl;
}

void Hen::displayEgg(Nest::Egg* pEgg){
	cout<<pEgg->Eggi<<endl;
}

void Hen::Nest::display(){
	cout<<__PRETTY_FUNCTION__<<endl;
}

void Hen::Nest::displayEgg(Egg* pEgg){
	cout<<pEgg->Eggi<<endl;
}

void Hen::Nest::Egg::display(){
	cout<<__PRETTY_FUNCTION__<<endl;
}

void Hen::Nest::Egg::displayNest(Nest* pNest){
	cout<<pNest->Nesti<<endl;
}

int main(){

	Hen hen;
	Hen::Nest nest;
	Hen::Nest::Egg egg;

	hen.displayEgg(&egg);
	hen.displayNest(&nest);

	nest.displayEgg(&egg);

	egg.displayNest(&nest);

}

