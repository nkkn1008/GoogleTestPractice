#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class SortStrategy {
public:
  virtual void Sort(vector<string> &vect) = 0;
};

class QuickSort : public SortStrategy {
public:
  virtual void Sort(vector<string> &vect) {
    sort(vect.begin(), vect.end());
    cout << "QuickSorted : " << endl;
  }
};

class ShellSort : public SortStrategy {
public:
  virtual void Sort(vector<string> &vect) {
    //ShellSort(vect.begin(), vect.end()); // not-implemented
    cout << "ShellSorted : " << endl;
  }
};

class MergeSort : public SortStrategy {
public:
  virtual void Sort(vector<string> &vect) {
    //MergeSort(vect.begin(), vect.end()); // not-implemented
    cout << "MergeSorted : " << endl;
  }
};

class SortedList {
private:
  vector<string> vect_;
  SortStrategy *sort_strategy_;

public:
  void SetSortStrategy(SortStrategy* sort_strategy);
  void Add(string name);
  void Sort();
  string Get(int i);
};
