#include <utility>
#include <iostream>

using namespace std;

void sorter     (int *, int, bool (*ordering)(int, int));
bool ascending  (int,   int                            );
bool descending (int,   int                            );
void dumper     (int *, int                            );

//==================================================================================

int main()
{
    int array[] = { 15, 9, 17, 41, 13, -18, 21, 17, 5, 98 } ;
    int size = sizeof(array)/sizeof(int) ;

    sorter(array, size, descending);
    dumper(array, size);

    sorter(array, size, ascending );
    dumper(array, size);

    return 0;
}

//==================================================================================
void sorter (int * array, int size, bool (*ordering)(int, int))
{
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (ordering(array[smallestIndex], array[currentIndex]))
                smallestIndex = currentIndex;
        }

        std::swap(array[startIndex], array[smallestIndex]);
    }
}

//==================================================================================
bool ascending( int x, int y) {return x > y;}
bool descending(int x, int y) {return x < y;}

//==================================================================================
void dumper (int * array, int size)
{
    for (int index = 0; index < size; ++index)
        cout << array[index] << " ";
    cout << endl ;
}