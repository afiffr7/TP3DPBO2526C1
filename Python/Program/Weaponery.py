# membuat class Weaponery
class Weaponery:
    # constructor
    def __init__(self, id:str, nama:str, damage:int):
        self.id = id
        self.nama = nama
        self.damage = damage

    # getter dan setter masing-masing attribut
    def getId(self) -> str:
        return self.id

    def setId(self, id: str) -> None:
        self.id = id

    def getNama(self) -> str:
        return self.nama

    def setNama(self, nama: str) -> None:
        self.nama = nama

    def getDamage(self) -> int:
        return self.damage

    def setDamage(self, damage: int) -> None:
        self.damage = damage