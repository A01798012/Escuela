def simplificar(n, d):
    i = 2;
    nf = n
    df = d 
    while True:
        if nf % 2 == 0 and df % 2 == 0:
            nf = nf / 2 
            df = df / 2
        elif nf % 2 == 1 and df % 2 == 1:
            div = 0
            if nf > df:
                div = df 
            else:
                div = nf
            nf = nf / div
            df = df / div
        else:
            break
    return (nf,df)


print(simplificar(7,21))