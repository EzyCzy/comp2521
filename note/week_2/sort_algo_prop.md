SORTINGS

Main cases
1. Random order
2. Sorted order
3. Reverse-sorted order

Analysis
1. Number of items
2. Number of comparison
3. Number of items being swapped

Properties of Sorting Algorithm
1. Stability (Preserves the relative order of items with equal keys)
   - Formally: For all pairs of items x and y where KEY(x) = KEY(y), if x precedes y in the original array, then x precedes y in sorted array
   - A stable sorting algorithm always performs a stable sort.
   - Important when sorting same array multiple times on different keys
   - Doesn't matter when all items have unique keys
   - Key is the entire item

3. Adaptability (Takes advantage of existing order in its input)
   - list with nearly sorted items is faster than a list that is not
   - If a sorting algorithm sorts pre-existing order faster than random input doesnt imply its adaptive
   - If adaptive then sorts pre-existing order faster than random input

4. In-place (Sorts without temporary arrays)

MACROS

Questions
1. Algorithmically how do we determine if an algorithmed is deemed stable?
