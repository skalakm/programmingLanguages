#lang racket

(define (fib n)
  (if (< n 2)
      n
      (+ (fib (- n 1))
         (fib (- n 2))
      )
  )
)
(define (fastFibStart n)
  (fastFib n 0 1))

(define (fastFib n x y)
  (if (< n 1)
      x
      (fastFib (- n 1) (+ x y) x)))
