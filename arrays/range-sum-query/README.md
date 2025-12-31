# Range Sum Query (Prefix Sum)

## Idea
Use prefix sums to answer subarray sum queries efficiently.

## Complexity
- Preprocessing: O(n)
- Query: O(1)
- Space: O(n)

## Key Insight
prefix[right] - prefix[left - 1] gives sum in constant time.

