# ADA-Sequence

Problem Description:

YP and BB love sequences very much. They define a sequence b1, b2, . . . , bY of a positive length Y as an ADA sequence if for all i ∈ [1, Y ], the following condition holds:
|bi − bY −i+1| ≤ D,
Now, BB gives YP three N-length sequences a1,a2,...,aN; c1,c2,...,cN, and s1,s2,...,sN. Also,
where D is a given parameter.
BB will give YP K dollars and decides to play a game with YP!
YP can do the following operations at most 1000 times (with zero times being possible): • Selectanintegeri∈[1,N].
• Spend ci dollars to change ai into an arbitrary value.
Note that the total amount of money YP spends on the operations should not exceed K.
After finishing the operations, YP needs to choose some indices b1, b2, . . . , bM . BB defines the indices valid if the following conditions are satisfied:
•M>0
• 1≤b1 <b2 <···<bM−1 <bM ≤N • ab1,ab2,...,abM is an ADA sequence.
Also,BBdefinesthescoreoftheADAsequenceassb1 +sb2 +···+sbM.
Please help YP find out the maximum possible score, and tell YP how to do the operations and
selectb1,b2,...,bM forformingtheADAsequence.

Input:

The first line of the input contains three integers N, K, and D, as defined in the problem description. The second line of the input contains N integers a1, a2, . . . , aN .
The third line of the input contains N integers c1, c2, . . . , cN .
The fourth line of the input contains N integers s1, s2, . . . , sN .

Output:

Please output X + 4 lines.
Test Group 3 (30 %)
• 1 ≤ N ≤ 200 • 0≤K≤600 • 0≤D≤109 • 1≤ai ≤109 • 1≤ci ≤600 • 1≤si ≤3
Test Group 4 (30 %)
• 1 ≤ N ≤ 200 • 0≤K≤109 • 0≤D≤109 • 1≤ai ≤109 • 1≤ci ≤109 • 1≤si ≤3
The first line contains one integer S denoting the maximum possible score.
The second line contains one integer X denoting the number of operations you want to do.
In the following X lines, the i-th line contains two integers posi,vali. This indicates that in the i-th operation, YP changes aposi to vali.
In the next line, output an integer M denoting the length of the sequence b. In the next line, output M integers denoting the indices YP chooses.
The output must satisfy the following restrictions:

• 0≤X≤1000 
• 1≤posi ≤N
• 1≤vali ≤109 
• 􏰂Xi=1 cposi ≤ K •1≤M≤N
• 1≤bi ≤N
• bi <bi+1∀i∈[1,M−1]
• After doing the K operations, ab1 , ab2 , . . . , abM becomes an ADA sequence.
• sb1 +sb2 +...sbM = S is maximized.

If there are multiple solutions, you can output any of them.
It is guaranteed that there exists a solution satisfying the above restrictions.

Hint:

1. Solving the test groups in order (from 1 to 3) is helpful for solving Test Group 4. 
2. Longest Common Subsequence (LCS), Longest Increaing Subsequence (LIS), and Longest Palindromic Subsequence (LPS) are classic dynamic programming problems. 
3. 3. GL & HF (Good Luck and Have Fun).
