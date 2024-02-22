from Product import Product  # Assuming you have a product.py file with the Product class

class Clothing(Product):
    def __init__(self):
        super().__init__()
        self.__size = ""
        self.__material = ""
        self.__gender = ""

    def set_size(self, size):
        self.__size = size

    def get_size(self):
        return self.__size

    def set_material(self, material):
        self.__material = material

    def get_material(self):
        return self.__material

    def set_gender(self, gender):
        self.__gender = gender

    def get_gender(self):
        return self.__gender