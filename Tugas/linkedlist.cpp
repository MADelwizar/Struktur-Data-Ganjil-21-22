#include <iostream>
using namespace std;

struct Jurnal{
    string author, judul;
    int tahun;

    Jurnal *next;
}*head, *tail, *cur, *newNode, *lastNode, *del;

void cjurrenalatSingleLinkList(string author, string judul, int tahun){
    head = new Jurnal();
    head->author = author;
    head->judul = judul;
    head->tahun = tahun;
    head->next = NULL;
    tail = head;}

void addFirst(string author, string judul, int tahun){
    newNode = new Jurnal();
    newNode->author = author;
    newNode->judul = judul;
    newNode->tahun = tahun;
    newNode->next = head;
    head = newNode;
}

void addLast(string author, string judul, int tahun){
    lastNode = new Jurnal();
    lastNode->author = author;
    lastNode->judul = judul;
    lastNode->tahun = tahun;
    lastNode->next = NULL;
    tail->next = lastNode;
    tail = lastNode;

}

void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}

void removeLast(){
    del = tail;
    cur = head;
    while (cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
}

void changeFirst(string author, string judul, int tahun){
    head->author = author;
    head->judul = judul;
    head->tahun = tahun;
}

void changeLast(string author, string judul, int tahun){
    tail->author = author;
    tail->judul = judul;
    tail->tahun = tahun;
}

void printSingleLinkList(){
    cur = head;
    while (cur != NULL){
        cout << "Author  = " << cur->author << endl;
        cout << "Judul   = " << cur->judul << endl;
        cout << "Tahun   = " << cur->tahun << endl;
        cur = cur->next;
    }
}

int main(){
    

 return 0;
}
