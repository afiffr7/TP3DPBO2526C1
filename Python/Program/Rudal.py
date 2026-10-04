from Weaponery import Weaponery


class Rudal(Weaponery):
    def __init__(self, id: str, nama: str, damage: int, tipePemandu: str, sasaran: str):
        super().__init__(id, nama, damage)
        self.tipePemandu = tipePemandu
        self.sasaran = sasaran

    def getTipePemandu(self) -> str:
        return self.tipePemandu

    def setTipePemandu(self, tipePemandu: str) -> None:
        self.tipePemandu = tipePemandu

    def getSasaran(self) -> str:
        return self.sasaran

    def setSasaran(self, sasaran: str) -> None:
        self.sasaran = sasaran