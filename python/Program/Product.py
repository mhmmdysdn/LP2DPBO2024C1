class Product:
    def __init__(self):
        self.__id = ""
        self.__name = ""
        self.__brand = ""
        self.__price = 0

    def set_id(self, id):
        self.__id = id

    def get_id(self):
        return self.__id

    def set_name(self, name):
        self.__name = name

    def get_name(self):
        return self.__name

    def set_brand(self, brand):
        self.__brand = brand

    def get_brand(self):
        return self.__brand

    def set_price(self, price):
        self.__price = price

    def get_price(self):
        return self.__price