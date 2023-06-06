Assume there is a table which contain all numbers.

| base/ pow | 2   | 3   |  4  |  5    |  6   |  7    |   8   |  9     |  10   | .... |
| --- | --- | --- | --- | --- | ---  | ---   | ---   | ---    | ---   | ---- |
| 2         |  4  |  8  |  16 |  32   |  64  | 128   | 256   | 512    | 1024  | ...  |
| 3         |  9  | 27  | 81  | 243   | 729  | 2187  | 6561  | 19683  | 59049 | ...  |
| 4         |  16 | 64  | 256 | 1024  | 4096 | 16384 | 65536 | 262144 | ..... | ...  |
| 5   |
| 6   |
| 7   |
| 8   |
| 9   |
| 10  |
| .   |
| .   |
| .   |

You should consider the mutual result between bases 2, 4, 8, 16, 32, 64.
then for the bese3, you need compute the mutual result between 3,9,27,81.
for the base 4, assuming 4,16,64.
and then for the base 5, 25.
base 6, 36
base 7, 49
base 8, 64
base 9, 81
base 10, 100

lets assume 
```
A2 = [ 2**i for i in range(2, 101) ]
```

Now we can compute the mutual result between two bases A2 and A4 -> $A2 \bigcap A4$
the length of this group is important $L(A2 \bigcap A4)$

$L(A2 \bigcap A4)    = 49$,  $L(A2 \bigcap A8)  = 32$, $L(A2 \bigcap A16) = 24$, $L(A2 \bigcap A32) = 19$, $L(A2 \bigcap A64) = 15$ <br>
$L(A3 \bigcap A9)    = 49$,  $L(A3 \bigcap A27) = 32$, $L(A3 \bigcap A81) = 24$ <br>
$L(A4 \bigcap A16)   = 49$,  $L(A4 \bigcap A64) = 32$  <br>
$L(A5 \bigcap A25)   = 49$  <br>
$L(A6 \bigcap A36)   = 49$  <br>
$L(A7 \bigcap A49)   = 49$  <br>
$L(A8 \bigcap A64)   = 49$  <br>
$L(A9 \bigcap A81)   = 49$  <br>
$L(A10 \bigcap A100) = 49$  <br>






So, let us write a function to do something faster.

```

> def comp( A, B ):
>   C = []
>   for a in A:
>     for b in B:
>       if a==b:
>         C.append(a)
> return C

```
