10 rem collatz
20 t1 = ti
30 for i=1 to 100
40 s = 0 : sd = i : gosub 1000
50 print "seed";sd;"steps";s
60 next i
70 t2 = ti
80 el = (t2 - t1) / 60
90 print
100 print "elapsed time:";el;"s"
110 print
120 end

1000 rem collatz algo
1010 if sd = 1 then goto 1070
1020 m = sd and 1
1030 if m > 0 then goto 1050 
1040 s = s + 1: sd = sd/2: goto 1010
1050 s = s + 1: sd = (sd * 3)+1
1060 goto 1010
1070 return 