#lang racket

; not tail recursive
(define (fact-no-tail x)
  (if (= x 0)
      1
      (* x (fact-no-tail (- x 1)))))

;tail recursive
(define (fact-tail x cur)
  (if (= x 0)
      cur
      (fact-tail (- x 1) (* x cur))))

(define (fact x)
  (fact-tail x 1))

; not tail recursive
(define (add-all l)
  (if (empty? l)
      0
      (+ (car l) (add-all (cdr l)))
  )
)

;tail recursive
(define (add-all-tail-helper l curSum)

  (if (empty? l)
      curSum
      (add-all-tail-helper (cdr l) (+ (car l) curSum)))

  )

(define (add-all-tail l)
  (add-all-tail-helper l 0))
