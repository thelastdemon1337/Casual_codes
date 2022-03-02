class person:
    def __init__(self,a = 'Tarun', b = 'Male'):
        self.name = a
        self.gender = b

    def showInfo(self):
        print("Name: ",self.name)
        print("Gender: ", self.gender)