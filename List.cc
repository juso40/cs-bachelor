#include"fcpp.hh"

class IntList
{
private:
  struct IntListElem
  {
    IntListElem* next;  // Zeiger auf n�chstes Element
    int value;          // Daten zu diesem Element
  };
  int count;
  IntListElem* neu;
  IntListElem* first;
  //IntListElem Speicher[10];
  //int n=0;

  IntListElem* gibElem(int position) const
  {
    if(position==0)
    {
      return first;
    }
    IntListElem* Elem=first;

    for(int n=position;n!=0;--n)
    {
      Elem=Elem->next;
    }
    return Elem;
  }
public:
  IntList() // Konstruktor, erzeugt eine leere Liste
  {
    count=0;
    first=0;
  }
  IntList(const IntList& copy)
  {
    count=0;
    first=0;
    for(int n=0;n<copy.count;n++)
    {
      insert(copy.getElement(n),n);
    }
  }
  ~IntList()  // Destruktor, loescht gesamten Listeninhalt
  {
    IntListElem* p_deleter=first;
    IntListElem* p_helper=first;
    delete(first);
    while(count!=1)
    {
      p_deleter=p_deleter->next;
      delete(p_helper);
      p_helper=p_deleter->next;
      --count;
    }
  }
  int getCount()  // Gibt Anzahl der Elemente zurueck
  {
    return count;
  }
  bool isEmpty()  // Gibt zurueck, ob die Liste leer ist
  {
    if (count==0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void print()  // Gibt die Liste aus
  {
    IntListElem Elem;
    for(int n=0;n<count;n++)
    {
      Elem=*gibElem(n);
      std::cout<<Elem.value<<std::endl;
    }
  }
  void insert( int element, int position )  // Fuegt die Zahl 'element' an der (beliebigen) Position 'position' ein
  {
    neu = new IntListElem;
    if(position==0)
    {

      neu->next=first;
      neu->value=element;
      first=neu;
      count++;
    }
    else
    {
      IntListElem* davor=gibElem(position-1);
      IntListElem* danach=0;  //if count==position
      if(count<position)
      {
        throw std::runtime_error("Position zu groß gewählt");
      }
      if(count>position)
      {
        danach=gibElem(position);
        std::cout<<"!!"<<danach<<std::endl;
      }
      neu->next=danach;
      neu->value=element;
      davor->next=neu;
      count++;
    }
  }
  void remove( int position ) // Loescht das Element an der Position 'position'
  {
    IntListElem* del=gibElem(position);
    if(position!=count-1&&position!=0)  //Nict das letzte und nicht das erste
    {
      IntListElem* neu=gibElem(position+1);
      del->next=neu->next;
      del->value=neu->value;
    }
    else if(position==0)  //das erste
    {
      first=first->next;
    }
    else  //das letzte
    {
      IntListElem* neu=gibElem(position-1);
      neu->next=0;
    }
    --count;
  }
  int getElement(int position) const // Gibt den Wert des Elements an der Position 'position' zurueck
  {
    return gibElem(position)->value;
  }
};//IntLsit End

int main()
{
  IntList List;
  List.insert(5,0);
  List.insert(3,1);
  List.insert(4,1);
  List.print();
  //IntList Kopie(List);
  //Kopie.print();
  print("hello World");
  List.remove(2);
  List.print();
}
