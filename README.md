<h1 align='center'><u><b> Squares of a Sorted Array</b> </u></h1>

<h2> <u>Problem Link:</u> https://leetcode.com/problems/squares-of-a-sorted-array/ </h2>

<h1 ><u> Idea Used: </u></h1>

## Just Generate array of squares for negative numbers and positive numbers. Then merge both into a single sorted array. Manage the edge cases where the given array is only of positives/negatives. For Negatives the increasing order of squares is of reverse ordeer as we travel in increasing order of negative number, so our loop variable "i'" in neg vector travels backwards towards 0 index to make the sqauared array increasing order.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(N)

## Space-Compexity: O(N)
