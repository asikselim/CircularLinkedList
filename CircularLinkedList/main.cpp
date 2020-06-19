#include <iostream>

using namespace std;

#include "CircularLinkedList.h"

int main()
{
    CircularLinkedList *ls = new CircularLinkedList();

    ls->AppendToCircularLinkedList(1, 98);// Dairesel  baðlý listeye veri atýyorum.
    ls->AppendToCircularLinkedList(4, 87);// Dairesel  baðlý listeye veri atýyorum.
    ls->AppendToCircularLinkedList(6, 79);// Dairesel  baðlý listeye veri atýyorum.
    ls->AppendToCircularLinkedList(9, 86);// Dairesel  baðlý listeye veri atýyorum.
    ls->AppendToCircularLinkedList(3, 70);// Dairesel  baðlý listeye veri atýyorum.

    ls->AddToTheBeginning(5, 100);// Dairesel  baðlý listenin baþýna veri atýyorum.
    ls->AddToTheBeginning(7, 88);// Dairesel baðlý listenin baþýna veri atýyorum.

    ls->PrintCircularLinkedList(); // Dairesel baðlý listeyi ekrana yazdýrýyorum.

//    for( int i=0; i<10; i++ ){
//        ls->DeleteTheLastNode();
//        ls->PrintCircularLinkedList();
//    }

    ls->DeleteTheNodeAtGivenIndex(3); //Kullanýcýnýn verdiði index'i silen fonksiyonu çaðýrdým.
	//ls->DeleteTheFirstNode(); // Dairesel baðlý listenin ilk düðümünü siler.
	//ls->DeleteTheLastNode(); // Dairesel baðlý listenin son düðümünü siler.

    ls->PrintCircularLinkedList(); // Dairesel baðlý listeyi ekrana yazdýrýyorum.

    return 0;
}

