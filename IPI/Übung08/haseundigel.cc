#include "fcpp.hh"

// Ein Listenelement
struct IntListElem
{
  IntListElem* next;  // Zeiger auf naechstes Element
  int value;          // Daten zu diesem Element
} ;

// Eine Liste
struct IntList
{
  int count;          // Anzahl Elemente in der Liste
  IntListElem* first; // Zeiger auf erstes Element der Liste
} ;

// Initialisiere eine Listenstruktur
void empty_list( IntList* l )
{
  l->first = 0;   // 0 ist keine gueltige Adresse: Liste ist leer
  l->count = 0;
}

// Fuege ein Element nach einem gegebenem ein
void insert_in_list( IntList* list, IntListElem* where, IntListElem* ins )
{
  if ( where == 0 ) // fuege am Anfang ein
  {
    ins->next = list->first;
    list->first = ins;
    list->count = list->count + 1;
  }
  else              // fuege nach where ein
  {
    ins->next = where->next;
    where->next = ins;
    list->count = list->count + 1;
  }
}

// Entferne ein Element nach einem gegebenem
// Liefere das entfernte Element zurueck
IntListElem* remove_from_list( IntList* list, IntListElem* where )
{
  IntListElem* p;  // das entfernte Element

  // where == 0 dann entferne erstes Element
  if ( where == 0 )
  {
    p = list->first;
    if ( p != 0 )
    {
      list->first = p->next;
      list->count = list->count - 1;
    }
    return p;
  }

  // entferne Element nach where
  p = where->next;
  if ( p != 0 )
  {
    where->next = p->next;
    list->count = list->count - 1;
  }
  return p;
}

void hase_und_igel(IntList liste) {
  // TODO
}

int main(int argc, char** argv) {
  int k = readarg_int(argc, argv, 1);//Linearteil
  int n = readarg_int(argc, argv, 2);//zyklus

  IntListElem* element;

  IntList linear;
  empty_list(&linear);
  IntListElem* temp = linear.first;

  for (int i=0; i<k; ++i){
    element = new IntListElem;
    element->value = i;
    std::cout<<(*element).value<<std::endl;
    insert_in_list(&linear, temp, element);
  }

  IntList cycle;
  empty_list(&cycle);
  temp = cycle.first;

  for (int i=0; i<n; ++i){
    element = new IntListElem;
    element->value = i;
    std::cout<<(*element).value<<std::endl;
    if (i==n-1){
      //temp = cycle.first;
      insert_in_list(&cycle, cycle.first=0, element);
      break;
    }
    insert_in_list(&cycle, temp, element);
  }
  for (int i=0; i<10; ++i){
    std::cout<<cycle.count<<std::endl;
  }


  // TODO
  // Erzeuge Liste mit Zykel der Laenge n und Linearteil der Laenge k
  // Bestimme k und n mit Hilfe des Hase und Igel Algorithmus
}
