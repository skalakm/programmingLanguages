#lang racket
(define (addAll inputList)
  ; empty? checks if a list is empty 
  (if (empty? inputList)
      0
      ;cdr means rest of the list ie list.substring(1)
      ;car means first element
      (+ (addAll (cdr inputList)) (car inputList))))

; find the min of a list

(define (findMinList inputList)
  ; empty? checks if a list is empty 
  (if (empty? (cdr inputList))
      (car inputList)
      ;cdr means rest of the list ie list.substring(1)
      ;car means first element
      (min (findMinList (cdr inputList)) (car inputList))))


(define (findFOfList inputList f)
    (if (empty? (cdr inputList))
      (car inputList)
      ;cdr means rest of the list ie list.substring(1)
      ;car means first element
      (f (findFOfList (cdr inputList) f) (car inputList))))
;(define myList '(1 3 5 65 7 5))
;(findFOfList myList (lamdba (x y) (* x y)))