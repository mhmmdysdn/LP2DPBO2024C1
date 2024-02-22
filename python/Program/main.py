from Shirt import Shirt

def main():
    n = int(input("Masukkan jumlah baju: "))

    # buat array buat nampung baju
    shirts = [Shirt() for _ in range(n)]

    # Initialize maximum lengths for each property
    max_id_len = 2
    max_name_len = 4
    max_brand_len = 5
    max_size_len = 4
    max_material_len = 8
    max_color_len = 5
    max_sleeve_len = 6

    for i in range(n):
        id = input("Masukkan id: ")
        name = input("Masukkan nama: ")
        brand = input("Masukkan brand: ")
        price = int(input("Masukkan harga: "))
        size = input("Masukkan size: ")
        material = input("Masukkan material: ")
        gender = input("Masukkan gender: ")
        color = input("Masukkan color: ")
        sleeve = input("Masukkan sleeve: ")

        shirts[i].set_id(id)
        shirts[i].set_name(name)
        shirts[i].set_brand(brand)
        shirts[i].set_price(price)
        shirts[i].set_size(size)
        shirts[i].set_material(material)
        shirts[i].set_gender(gender)
        shirts[i].set_color(color)
        shirts[i].set_sleeve_type(sleeve)

        # Update maximum lengths if necessary
        max_id_len = max(max_id_len, len(id))
        max_name_len = max(max_name_len, len(name))
        max_brand_len = max(max_brand_len, len(brand))
        max_size_len = max(max_size_len, len(size))
        max_material_len = max(max_material_len, len(material))
        max_color_len = max(max_color_len, len(color))
        max_sleeve_len = max(max_sleeve_len, len(sleeve))

    # Tampilkan isi array dengan tabel dinamis
    header = "{:<{max_id_len}} {:<{max_name_len}} {:<{max_brand_len}} {:<10} {:<{max_size_len}} {:<{max_material_len}} {:<10} {:<{max_color_len}} {:<{max_sleeve_len}}".format(
        "Id", "Nama", "Brand", "Harga", "Size", "Material", "Gender", "Color", "Sleeve",
        max_id_len=max_id_len + 2,
        max_name_len=max_name_len + 2,
        max_brand_len=max_brand_len + 2,
        max_size_len=max_size_len + 2,
        max_material_len=max_material_len + 2,
        max_color_len=max_color_len + 2,
        max_sleeve_len=max_sleeve_len + 2
    )
    print(header)
    # print('-' * (max_id_len + max_name_len + max_brand_len + max_size_len + max_material_len + max_color_len + max_sleeve_len + 45))

    for i in range(n):
        row = "{:<{max_id_len}} {:<{max_name_len}} {:<{max_brand_len}} {:<10} {:<{max_size_len}} {:<{max_material_len}} {:<10} {:<{max_color_len}} {:<{max_sleeve_len}}".format(
            shirts[i].get_id(), shirts[i].get_name(), shirts[i].get_brand(), shirts[i].get_price(),
            shirts[i].get_size(), shirts[i].get_material(), shirts[i].get_gender(), shirts[i].get_color(),
            shirts[i].get_sleeve_type(),
            max_id_len=max_id_len + 2,
            max_name_len=max_name_len + 2,
            max_brand_len=max_brand_len + 2,
            max_size_len=max_size_len + 2,
            max_material_len=max_material_len + 2,
            max_color_len=max_color_len + 2,
            max_sleeve_len=max_sleeve_len + 2
        )
        print(row)

if __name__ == "__main__":
    main()