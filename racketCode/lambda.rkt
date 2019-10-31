#lang racket
; This defines a function which returns a function
; The returned function takes one argument
; It applies + to that argument and the argument to
; the original function.  0
(define (f x) (lambda (y) (+ x y)))

(define (make-function g x) (lambda (asfdsf) (g x asfdsf)))

(define (makeIdent) (lambda (z) z))

(define (returnPlus) +)

