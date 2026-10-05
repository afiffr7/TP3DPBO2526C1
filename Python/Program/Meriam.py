from Weaponery import Weaponery

# membuat class Meriam sebagai child dari Weaponery
class Meriam(Weaponery):
    # constructor
    def __init__(self, id: str, nama: str, damage: int, kaliber: float):
        super().__init__(id, nama, damage)
        self.kaliber = kaliber

    # getter dan setter attribut
    def getKaliber(self) -> float:
        return self.kaliber

    def setKaliber(self, kaliber: float) -> None:
        self.kaliber = kaliber