# ADA-Sequnce

Problem Description
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
