# Ejemplo bien simple.

#pinguino pescador
class FisherPenguin:
    def __init__(self, name):
        self.name = name

    def fish(self):
        print(f"{self.name} is fishing fish")

# pinguino constructor
class BuilderPenguin:
    def __init__(self, name):
        self.name = name

    def build_nest(self):
        print(f"{self.name} is building a nest")

p1 = FisherPenguin("Benjamin")
p2 = BuilderPenguin("Tomas")

p1.fish()
p2.build_nest()



'''
Conclusiones buenas:
abstractamente cada clase tiene una responsabilidad unica
Si a futuro quiero agregar una accion para los pinguinos, no tengo que modificar las demas y simplemente creo una clase nueva.
Si quiero modificar una de las clases ya existentes, directamente modifico la clase en especifico.

'''