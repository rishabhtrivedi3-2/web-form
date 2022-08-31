print('''   
         

        - - - -        - - - -             _________________________
       -       -     -         -           |    +                                           |
      -         -   -           -          |  +++                      ------           |
      -          ---            -          |__+_____________________| 
      -         -   -           -          | **   **                                    |     
       -       -     -         -           |    **                      ___*___    |
        - - - -        - - - -            |**__ **___________ *_____|   

                     

                     ''')
print('Press  = in operator  and ,1 as no. to end calculation')
a=b=c=0
x=int(input('Enter no.:'))
z=input('Enter operator:')
b=int(input('Enter no.:'))
if z=='+':
    c=x+b
    c+=a
    print(c)
if z=='-':
     for i in'-':
        c=b-x
        print(c)
if z=='*':
    c=x*b
    c+=a
    print(c)
if z=='/':
    c=x/b
    c+=a
    print(c)
while z!='=':
    z=input('Enter  next operator')
    a=int(input('Enter next no.'))
    if z=='=' and a==1:
        break
    if z=='+':
        for i in '+':
            c=a+c
            print(c)
    if z=='-':
            for i in '-':
                    c=c-a
                    print(c)
    if z=='*':
            for i in '*':
                c=c*a
                print(c)
    if z=='/':
            for i in '/':
                c=c/a
                print(c)
 
