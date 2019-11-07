#lang racket

; map - runs a function on a list
(define (addTwo x) (+ x 2))

(map addTwo '(3 4 5 6 7 8))

(map (lambda (y) (+ y 2))
     (map (lambda (x) (* x 10))
          (range 10)))

(map (lambda (x y) (+ x y)) '(1 2 3 4) '(3 4 5 6))

; apply example
(define (dot-prod x y) (apply + (map * x y)))

; filter takes a predicate (boolean function) and a list
; it returns a list of the elements which are true for
; the predicate.