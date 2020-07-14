# Chapter 5: Searching

Searching is the algorithmic process of finding a partical item in a collection of items.

## Different Searching Algorithms

- Linear Search - Unsorted Input: When elements of an array are not ordered or sorted and we want to search for a particalar value, we need to scan the full array unlless we find the desire value. *The major problem with this algorithm is less performance or high Time Complexity in worst case*. **Time Complexity: O(n)**: As we need to transverse the complete array in worst case. Worst case in when your desired element is at the last position of the array. **Space Complexity: O(1)**: No extra memory is used to callocate the array.

- Linear Search - Sorted Input: If elements of the array are sorted either in increasing order or in decreasing orderd, searching for desired element will be much efficient than unordered linear search. **Time Complexity: O(n)**: As we need to traverse the complete array in worst case. Worst case is when your desired element is at the last position of the sorted array. **Space Complexity: O(1)**: No extra memory is used to allocate the array.

- Binary Search - Sorted Input: Binary Search works when we get the middle point from the sorted array and start comparing with the desired value. Also it cannot be applied if the array is not sorted.

- String Search: Tries, Suffix, Ternary Search

- Hashing and Symbols Tables
