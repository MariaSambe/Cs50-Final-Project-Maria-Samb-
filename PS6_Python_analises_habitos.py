import pandas as pd

dados = {"Dia": ["Seg", "Ter", "Qua", "Qui", "Sex"],
         "HorasEstudo": [2, 3, 1, 4, 2]}

df = pd.DataFrame(dados)

print("Média de estudo:", df["HorasEstudo"].mean())
print("Dia com mais estudo:", df.loc[df["HorasEstudo"].idxmax(), "Dia"])
