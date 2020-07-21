# Chapter 5: Searching

Searching is the algorithmic process of finding a partical item in a collection of items.

## Different Searching Algorithms

- Linear Search - Unsorted Input: When elements of an array are not ordered or sorted and we want to search for a particalar value, we need to scan the full array unlless we find the desire value. *The major problem with this algorithm is less performance or high Time Complexity in worst case*. **Time Complexity: O(n)**: As we need to transverse the complete array in worst case. Worst case in when your desired element is at the last position of the array. **Space Complexity: O(1)**: No extra memory is used to callocate the array.

- Linear Search - Sorted Input: If elements of the array are sorted either in increasing order or in decreasing orderd, searching for desired element will be much efficient than unordered linear search. **Time Complexity: O(n)**: As we need to traverse the complete array in worst case. Worst case is when your desired element is at the last position of the sorted array. **Space Complexity: O(1)**: No extra memory is used to allocate the array.

- Binary Search : Binary Search works when we get the middle point from the sorted array and start comparing with the desired value. Also it cannot be applied if the array is not sorted. **Time Complexity: O(logn)**: We always take half input and throwing out other half. So the recurrence relation for binary search is T(n)=T(n/2)+c. Using master theorem (divide and conquer), we get T(n)=O(logn). **Space Complexity**: O(1)

- String Search: Tries, Suffix, Ternary Search

- Hashing and Symbols Tables

## How sorting is useful in Selection Algorithm

Once the array is sorted, it is easy to find the min/max or desire element, but it is efficient when many selection need to be made from the array.
