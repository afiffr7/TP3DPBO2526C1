from Weaponery import Weaponery


class Meriam(Weaponery):
    def __init__(self, id: str, nama: str, damage: int, kaliber: float):
        super().__init__(id, nama, damage)
        self.kaliber = kaliber

    def getKaliber(self) -> float:
        return self.kaliber

    def setKaliber(self, kaliber: float) -> None:
        self.kaliber = kaliber