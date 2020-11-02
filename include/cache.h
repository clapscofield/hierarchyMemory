#include <list>
#include "../include/lineCache.h"

class Cache {
  private:
    LineCache *table;
    int total_elements;
    int getHash(int key);
  public:
    Cache(int n);
    void insertElement(int key);
    void removeElement(int key);
    void printAll();
};
