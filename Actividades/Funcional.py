def suma(a, b):
 return a + b

def resta(a, b):
 return a - b

def operar(f, a, b):
 return f(a, b)

resultado = operar(suma, 5, 3)
print(resultado)
resultado = operar(resta, 5, 3)
print(resultado)