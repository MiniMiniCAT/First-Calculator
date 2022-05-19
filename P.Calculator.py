while True:
    
    print('\n계산식을 입력하세요.\
          \n(정수와 연산 기호를 공백으로 구분하세요)\
          \n(끝내려면 0 = 0을 입력하세요)\n')
    a,op,b = input().split()

    a = int(a)
    b = int(b)
    op = str(op)
    c = int()

    if a == 0 and op == '=' and b == 0:
        break;

    elif op == '+':
        c = a + b
        print(c)
    
    elif op == '-':
        c = a - b
        print(c)

    elif op == '*':
        c = a * b
        print(c)
    
    elif op == '/':
        if b != 0:
            c = a / b
            print(c)
        else:
            print('0으로 나눌 수 없습니다!')
        
    else:
        print('다시 입력하세요.')