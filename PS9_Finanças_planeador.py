despesas = []
while True:
    valor = input("Introduza uma despesa (ou 'sair'): ")
    if valor == "sair":
        break
    despesas.append(float(valor))

print("Total de despesas:", sum(despesas))
