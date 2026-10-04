class MesinKapal:
    def __init__(self, id: str, nama: str, tipe: str):
        self.id = id
        self.nama = nama
        self.tipe = tipe

    def getId(self) -> str:
        return self.id

    def setId(self, id: str) -> None:
        self.id = id

    def getNama(self) -> str:
        return self.nama

    def setNama(self, nama: str) -> None:
        self.nama = nama

    def getTipe(self) -> str:
        return self.tipe

    def setTipe(self, tipe: str) -> None:
        self.tipe = tipe