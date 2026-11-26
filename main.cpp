def pesan_menu():
    print("\n=== MENU MAKAN & MINUM ===")
    print("Makanan:")
    print("1. Pecel       : Rp 10.000")
    print("\nMinuman:")
    print("1. Teh         : Rp 3.000")
    print("2. Kopi        : Rp 5.000")
    print("0. Tidak pesan minum")
    print("=" * 26)

    pilih_makan = input("Pilih makanan (1 untuk Pecel / 0 tidak pesan): ")
    if pilih_makan == "1":
        nama_makan = "Pecel"
        harga_makan = 10000
    else:
        nama_makan = "Tidak pesan"
        harga_makan = 0

    pilih_minum = input("Pilih minuman (1 = Teh, 2 = Kopi, 0 = Tidak pesan): ")
    if pilih_minum == "1":
        nama_minum = "Teh"
        harga_minum = 3000
    elif pilih_minum == "2":
        nama_minum = "Kopi"
        harga_minum = 5000
    else:
        nama_minum = "Tidak pesan"
        harga_minum = 0

    total = harga_makan + harga_minum

    print("\n--- STRUK PEMESANAN ---")
    print(f"Makanan     : {nama_makan} (Rp {harga_makan})")
    print(f"Minuman     : {nama_minum} (Rp {harga_minum})")
    print(f"Total Bayar : Rp {total}")
    print("-" * 23)


def login():
    Nama = input("Masukkan Nama: ")
    Password = input("Masukkan Password: ")

    if Nama == "Udin" and Password == "123456":
        print("Anda Adalah Udin")
        pesan_menu()
    elif Nama == "Agung" and Password == "6789":
        print("Anda Adalah Agung")
        pesan_menu()
    else:
        print("Anda Bukan Udin dan Agung")


login()
