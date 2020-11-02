#include <iostream>
#include <list>
#include "../include/cache.h"
using namespace std;

// Constructor to create a hash table with 'n' indices:
Cache::Cache(int n){
  total_elements = n;
  table = new LineCache[total_elements];
}

// EDITAR
// Hash function to calculate hash for a value:
int Cache::getHash(int key){
  return key % total_elements;
}

// EDITAR
// Insert data in the cache(hash table):
/*void Cache::insertElement(int key){
  table[getHash(key)].push_back(key);
}*/

// EDITAR
// Remove data from the cache(hash table):
/*void Cache::removeElement(int key){
  int x = getHash(key);

  list<int>::iterator i;
  for (i = table[x].begin(); i != table[x].end(); i++) {
    // Check if the iterator points to the required item:
    if (*i == key)
      break;
  }

  // If the item was found in the list, then delete it:
  if (i != table[x].end())
    table[x].erase(i);
}*/

void Cache::printAll(){
  // Traverse each index:
  for(int i = 0; i < total_elements; i++){
    cout << "Index " << i << ": ";
    cout << table[i].bloco << " \n ";
    cout << endl;
  }
}
