
% sorted binary search tree

% BST can be empty or node(L,D,R)

% is K in the tree
% _ means we don't care what the value is there
isin(K, node(_,K,_ )).

% K is in node(L,D,R) if K < D and K is in L
isin(K, node(L, D, R)) :- K < D, isin(K, L).

% K is in node(L,D,R) if K > D and K is in R
isin(K, node(L, D, R)) :- K > D, isin(K, R).

%insert
% insert( data, curnode, result)
insert(K, empty, node(empty, K, empty)).
insert(K, node(L, D, R), node(L2, D, R)) :- K < D, insert(K, L, L2).
insert(K, node(L, D, R), node(L, D, R2)) :- K > D, insert(K, R, R2).

% in general, we would call insert(K, root, newTreeName)

myTree(T) :- insert(15, empty, T0),insert(25, T0, T7),insert(5, T7, T1), insert( 6, T1, T2), insert(2, T2, T3), insert(4, T3, T).
myTree(D) :- insert(15, empty, T1), insert( 36, T1, T2), insert(22, T2, T3), insert(54, T3, D).

myTree(D) :- insert(15, empty, T1), insert( 21, T1, T2), insert(32, T2, T3), insert(514, T3, D).

isinmytree(K, Z) :- myTree(Z), isin(K, Z).


inorder(empty, []).
inorder(node(L,D,R), Z):- inorder(L,LL), inorder(R, RL), append(LL, [D],Z1), append(Z1, RL, Z).

isinordermytree(T, Z):- myTree(T), inorder(T, Z).

%[Head|Tail]

remove(X, [X|Y], Y).
remove( X, [XL|YL], [XL|YL2]):- remove(X, YL, YL2).

max( A, B, B) :- A <= B.

max( A, B, A) :- B <= A.
% uses the order of statements, slightly dodgy 
% demonstrates fall through 
%  max(A, _, A).

% reverse
isReverse( [], []).
isReverse( [X], [X]).
isReverse( [X|Y], Z):- isReverse(Y, Y2), append(Y2,[X], Z)
% append([4,5], [6,7], [4,5,6,7]). 
% append([[4]], [[5]], [[4],[5]]).





