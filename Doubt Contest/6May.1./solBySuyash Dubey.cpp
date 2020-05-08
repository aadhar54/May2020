

img 1
At place of condition it is written only i
N at place of updation it is
i>>=1

The i has been initialised by the value 1024. 
The condition for the "for" loop is until i becomes 
false. False is denoted by 0 and true is any non zero value. So until i becomes 0, the for loop keeps looping. 
The terms ">>=1" means bitwise right shift by 1. The right shift operator shifts the binary digits right by whatever specified 
value is given. In this case it is 1. So it shifts right by 1. If the binary number was 01100000 the right shift by value of 
1 will move all digit one to right. So it will become 00110000. The loop keeps doing this until all digits become 00000000.
The binary representation of 1024 is 10000000000. So the loop will have to be executes 11 times to fully make the binary number
00000000000. That's why it is printing myCaptain 11 times.

img 2
Also i didn't got this
c=a, b??

Here comma operator is a binary operator. When c = a,b; is executed it "=" is evaluated first. Essentially making it like (c=a), b;
The comma operator evaluates the expression around it from left to right. So c = a,b; is equivalent to 
c = a;
b; 
Therefore, c will be assigned to 5. 
However, in case of d there is parenthesis so it will assign the righmost value because it takes first value then discards it then it takes 
second value. Do d will store the value of 6. 




