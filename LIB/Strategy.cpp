#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Strategy.h"

using namespace std;

void SortedList::Add(string name)
{
	vect_.push_back(name);	
}

string SortedList::Get(int i)
{
	return vect_[i];
}

void SortedList::SetSortStrategy(SortStrategy* sort_strategy)
{
	sort_strategy_  = sort_strategy;
}

void SortedList::Sort()
{
    sort_strategy_->Sort(vect_);
    //for_each(vect_.begin(), vect_.end(), [](string name)->void {cout << name << endl;});
    cout << endl;
}
    
// int main() {
//   SortedList student_records;
//   student_records.Add("Samuel");
//   student_records.Add("Jimmy");
//   student_records.Add("Sandre");
//   student_records.Add("Vivek");
//   student_records.Add("Anna");

//   student_records.SetSortStrategy(new QuickSort());
//   student_records.Sort();

//   student_records.SetSortStrategy(new ShellSort());
//   student_records.Sort();

//   student_records.SetSortStrategy(new MergeSort());
//   student_records.Sort();

//   return 0;
// }
