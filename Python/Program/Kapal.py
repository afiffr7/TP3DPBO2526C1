from typing import List

from MesinKapal import MesinKapal
from Weaponery import Weaponery

class Kapal:
    def __init__(self, id: str, nama: str, jenis: str, idMesin:str, namaMesin:str, tipeMesin:str, listWeapon: List[Weaponery]):
        self.id = id
        self.nama = nama
        self.jenis = jenis
        self.mesin = MesinKapal(idMesin, namaMesin, tipeMesin)
        self.listWeapon = listWeapon

    def getId(self) -> str:
        return self.id

    def setId(self, id: str) -> None:
        self.id = id

    def getNama(self) -> str:
        return self.nama

    def setNama(self, nama: str) -> None:
        self.nama = nama

    def getJenis(self) -> str:
        return self.jenis

    def setJenis(self, jenis: str) -> None:
        self.jenis = jenis

    def getMesin(self) -> MesinKapal:
        return self.mesin

    def getListWeapon(self) -> List[Weaponery]:
        return self.listWeapon

    def setListWeapon(self, listWeapon: List[Weaponery]) -> None:
        self.listWeapon = listWeapon

    def addWeapon(self, weapon:Weaponery) -> None:
        self.listWeapon.append(weapon)