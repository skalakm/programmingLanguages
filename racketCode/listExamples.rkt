#lang racket

(define (makeEqualFunc x) (lambda (y) (eq? x y)))

; make a pair of 3 and 4
(define pairThreeFour (cons 3 4))

;make a list of 3 2 5 with cons 
(define listOfFive (cons 5 '()))
(define listOfTwoFive (cons 2 listOfFive))
(define listOfThreeTwoFive (cons 3 listOfTwoFive))


(define wacky (cons listOfFourFiveSix (cdr listOfFourFiveSix)))

; add element to front of list
(cons 6 listOfThreeTwoFive)

; make a list
(list 4 5 6 7)

;test if list
(list? '(4 5 6))

; combine two lists
(append '(5 6 7) '(4 5 6))