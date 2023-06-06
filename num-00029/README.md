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

if you consider the base 2 and multiply it by 2, you get 4 which is in the range between 2 to 100, on the other hand, if you compute 2^4, you can find the answer on the table twice.
then if you compute 2^6 then you have the result with 4^3. you can continue this series for the base 2 up to power 100, and then find the same result for the bese 4 up to power 50, which means they have 49 
mutual numbers. now let us consider the base 2 with the base 8, and then try to find the same result. for 2 ^ 6 the answer equlas to 8 ^ 2. and if you continue to find more result you get 32 mutual numbers,
while we should not forget there are some mutual answers betwee the bases 4 and 8 as well. :)))

then we have to find mututal answers between the bases 2 and 16, 32, 64, and also other mutual numbers which belong to e.g. the bases 16, and 32.

So, let us write a function to do something faster.
'''
> def comp( A, B ):
>   C = []
>   for a in A:
>     for b in B:
>       if a==b:
>         C.append(a)
> return C
'''
