student(zach).
student(jessie).
student(max).

course(pl).
course(algo).
course(senior).

taking(zach, pl).
taking(zach, algo).
taking(jessie, algo).
teaching(skalak, pl).
teaching(forrester, algo).
taking(noah, algo).


studentOf(X,Y):-teaching(Y,Z),taking(X,Z).
haveClassTogether(X,Y):-taking(X,Z),taking(Y,Z),X\=Y. 

