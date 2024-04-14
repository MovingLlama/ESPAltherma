#include "labeldef.h"
//  This file is a definition file for ESPAtherma
//  uncomment each value you want to query for your installation.


LabelDef labelDefs[] = {
//{0x00,0,801,0,-1,"*Kältemittel Typ"},
//{0x00,1,996,1,-1,"Override CMD:0x00 N_INV=1"},
//{0x00,2,996,0,-1,"Override CMD:0x00 N_STD=0"},
//{0x00,3,996,2,-1,"Override CMD:0x00 N_FAN=2"},
//{0x00,4,996,1,-1,"Override CMD:0x00 N_EV=1"},
//{0x00,5,996,1,-1,"Override CMD:0x00 N_20S=1"},
//{0x00,6,996,1,-1,"Override CMD:0x00 N_CH=1"},
//{0x00,7,996,3,-1,"Override CMD:0x00 N_SV=3"},
//{0x00,0,152,1,-1,"Maximale Anzahl - Sensoren AG"},
//{0x00,1,152,1,-1,"Maximale Anzahl - Inverterverdichter"},
//{0x00,2,152,1,-1,"Maximale Anzahl – Standardverdichter"},
//{0x00,3,152,1,-1,"Maximale Anzahl - Außengerätelüfter"},
//{0x00,4,152,1,-1,"Maximale Anzahl - Expansionsventile"},
//{0x00,5,152,1,-1,"Maximale Anzahl - 4 Wege Ventile"},
//{0x00,6,152,1,-1,"Maximale Anzahl - Ölsumpfheizungen"},
//{0x00,7,152,1,-1,"Maximale Anzahl – Magnetventile"},
//{0x00,8,152,1,-1,"Max. anschließbare Innengerätezahl"},
//{0x00,9,152,1,-1,"Erkannte DX Innengerätezahl (max. 59 anzeigbar)"},
//{0x00,10,152,1,-1,"AG Software ID (xx)"},
//{0x00,11,152,1,-1,"AG Software ID (yy)"},
//{0x00,12,105,1,-1,"Max. Außengerät Leistung (kW)"},
//{0x10,0,217,1,-1,"Aktuelle Betriebsart"},
//{0x10,1,307,1,-1,"Thermostat EIN/AUS"},
//{0x10,1,306,1,-1,"Wiederanlaufverzögerung"},
//{0x10,1,305,1,-1,"Anlaufregelung"},
//{0x10,1,304,1,-1,"Abtauung"},
//{0x10,1,303,1,-1,"Ölrückführung"},
//{0x10,1,302,1,-1,"Druckausgleich"},
//{0x10,1,301,1,-1,"Lastabwurf"},
//{0x10,1,300,1,-1,"Schallreduzierter Betrieb"},
//{0x10,4,203,1,-1,"Betrieb / Störung"},
//{0x10,5,204,1,-1,"Störcode"},
//{0x10,6,114,2,1,"Zielniederdruck in °C (Zielverdampfung)"},
//{0x10,8,114,2,1,"Zielhochdruck in °C (Zielverflüssigung)"},
//{0x10,10,307,1,-1,"Verdichtungsendtemp.Schutz aktiv"},
//{0x10,10,310,1,-1,"Verdichtungsendtemp.Schutz retry"},
//{0x10,10,303,1,-1,"Verdichterüberstromschutz aktiv"},
//{0x10,10,311,1,-1,"Verdichterüberstromschutz retry"},
//{0x10,11,307,1,-1,"Hochdruckschutz aktiv"},
//{0x10,11,310,1,-1,"Hochdruckschutz retry"},
//{0x10,11,303,1,-1,"Niederdruckschutz aktiv"},
//{0x10,11,311,1,-1,"Niederdruckschutz retry"},
//{0x10,12,307,1,-1,"Inverterplatinentemp.Schutz aktiv"},
//{0x10,12,310,1,-1,"Inverterplatinentemp.Schutz retry"},
//{0x10,12,303,1,-1,"Sonstiger Schutzmodus"},
//{0x10,12,311,1,-1,"Nicht im Einsatz"},
//{0x11,0,215,1,-1,"AG EEPROM (1. Ziffer)"},
//{0x11,1,215,1,-1,"AG EEPROM (3. 4. Ziffer)"},
//{0x11,2,215,1,-1,"AG EEPROM (5. 6. Ziffer)"},
//{0x11,3,215,1,-1,"AG EEPROM (7. 8. Ziffer)"},
//{0x11,4,215,1,-1,"AG EEPROM (10. Ziffer)"},
//{0x11,5,214,1,-1,"AG EEPROM (11. Ziffer)"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x20,0,105,2,1,"R1T-Außentemperatur"},
//{0x20,2,105,2,1,"O/U Wärmetauscher Temp."},
//{0x20,4,105,2,1,"Verdichtungsendtemperatur"},
//{0x20,6,105,2,1,"R21T - Saugleitung VDI 1"},
//{0x20,8,105,2,1,"Wärmetauscher Mitteltemp."},
//{0x20,10,105,2,1,"Flüssigkeitsleitungstemp. (R6T)"},
//{0x20,12,105,2,1,"Kühlkörpertemp."},
//{0x20,14,105,2,2,"Druck"},
//{0x20,14,405,2,1,"Druck(T)"},
//{0x21,0,105,2,-1,"INV Platine Eingangsstrom (A) (Primärkreis)"},
//{0x21,2,105,2,-1,"Stromaufnahme INV-Verdichter (A) (Sekundärkreis)"},
//{0x21,4,101,2,-1,"Spannung (VAC)"},
//{0x21,6,307,1,-1,"Frostschutz Fluss Schalter"},
//{0x21,6,306,1,-1,"Nicht im Einsatz"},
//{0x21,6,305,1,-1,"Nicht im Einsatz"},
//{0x21,6,304,1,-1,"Nicht im Einsatz"},
//{0x21,6,303,1,-1,"Nicht im Einsatz"},
//{0x21,6,302,1,-1,"Nicht im Einsatz"},
//{0x21,6,301,1,-1,"Nicht im Einsatz"},
//{0x21,6,300,1,-1,"Nicht im Einsatz"},
//{0x21,7,105,2,1,"Frostschutz Einlasstemp."},
//{0x21,9,105,2,1,"Frostschutz Auslasstemp."},
//{0x21,11,105,2,1,"Kühltemp. Verdampfer Ein"},
//{0x21,13,105,2,1,"Kühltemp. Verdampfer Aus"},
//{0x21,15,105,1,-1,"Nicht im Einsatz"},
//{0x21,16,105,1,-1,"Nicht im Einsatz"},
//{0x21,17,105,1,-1,"Nicht im Einsatz"},
//{0x21,18,105,1,-1,"Nicht im Einsatz"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x30,0,152,1,-1,"Drehzahl Verdichter (U/Sek)"},
//{0x30,1,152,1,-1,"VDI Frequenz 2 (U/s)"},
//{0x30,0,307,1,-1,"Verdichter (STD1)"},
//{0x30,0,306,1,-1,"Verdichter (STD2)"},
//{0x30,0,211,1,-1,"Ventilator 1 (Stufe)"},
//{0x30,1,211,1,-1,"Ventilator 2 (Stufe)"},
//{0x30,0,151,2,-1,"Expansionsventil (pls)"},
//{0x30,2,151,2,-1,"Y1E-Expansionsventil Mitteldruck_Unterkühler"},
//{0x30,4,151,2,-1,"Expansionsventil_3 (pls)"},
//{0x30,6,151,2,-1,"Expansionsventil_4 (pls)"},
//{0x30,8,151,2,-1,"Expansionsventil_5 (pls)"},
//{0x30,0,307,1,-1,"4-Wege-Ventil 1"},
//{0x30,0,306,1,-1,"4-Wege-Ventil 2"},
//{0x30,0,305,1,-1,"4-Wege-Ventil 3"},
//{0x30,0,304,1,-1,"4-Wege-Ventil 4"},
//{0x30,0,303,1,-1,"4-Wege-Ventil 5"},
//{0x30,0,307,1,-1,"Ölsumpfheizung VDI 1"},
//{0x30,0,306,1,-1,"Ölsumpfheizung VDI 2"},
//{0x30,0,305,1,-1,"Ölsumpfheizung VDI 3"},
//{0x30,0,304,1,-1,"Ölsumpfheizung 4"},
//{0x30,0,307,1,-1,"Magnetventil 1"},
//{0x30,0,306,1,-1,"Magnetventil 2"},
//{0x30,0,305,1,-1,"Magnetventil 3"},
//{0x30,0,304,1,-1,"Magnetventil 4"},
//{0x30,0,303,1,-1,"Magnetventil 5"},
//{0x00,0,998,1,-1,"In-Out separator"},
//{0x60,0,304,1,-1,"Daten Aktivieren/Deaktivieren"},
//{0x60,1,152,1,-1,"Adresse des Innengeräts"},
//{0x60,2,315,1,-1,"Betriebsart"},
//{0x60,2,303,1,-1,"Thermostat EIN/AUS"},
//{0x60,2,302,1,-1,"Frostschutz"},
//{0x60,2,301,1,-1,"Schallreduzierter Betrieb"},
//{0x60,2,300,1,-1,"Frostschutz für Wasserleitung"},
//{0x60,3,204,1,-1,"Störcode"},
//{0x60,4,152,2,-1,"Innengerätecode"},
//{0x60,6,219,1,-1,"I/U Kapazitätscode"},
//{0x60,7,105,2,1,"Sollwert Brauchwasser"},
//{0x60,9,105,2,1,"Sollwert Heizungsvorlauf Hauptzone"},
//{0x60,11,307,1,-1,"Strömungsschalter (ON=OK)"},
//{0x60,11,306,1,-1,"Übertemperaturschutz Clixon BUH (ON=OK)"},
//{0x60,11,305,1,-1,"Übertemperaturschutz Clixon Heizstab Speicher BSH (ON=OK)"},
//{0x60,11,304,1,-1,"HT/NT Tarif Abschaltung"},
//{0x60,11,303,1,-1,"Solar Eingang"},
//{0x60,11,302,1,-1,"Nicht im Einsatz"},
//{0x60,11,301,1,-1,"Nicht im Einsatz"},
//{0x60,11,300,1,-1,"Bivalenter Betrieb"},
//{0x60,12,307,1,-1,"2-Wege-Ventil_Shut Off Valve"},
//{0x60,12,306,1,-1,"3-Wege-Ventil (ON: DHW/OFF: Raumheizung)"},
//{0x60,12,305,1,-1,"Heizstab Speicher (BSH)"},
//{0x60,12,304,1,-1,"Heizstab Stufe 1"},
//{0x60,12,303,1,-1,"Heizstab Stufe 2"},
//{0x60,12,302,1,-1,"Fußbodenkreis Abschaltventil"},
//{0x60,12,301,1,-1,"Umwälzpumpe 1 Hauptzone"},
//{0x60,12,300,1,-1,"Solarpumpe"},
//{0x60,13,152,1,-1,"IG Optionscode"},
//{0x60,15,215,1,-1,"Software Hydrobox (xx)"},
//{0x60,14,215,1,-1,"Software Hydrobox (yy)"},
//{0x60,16,152,1,-1,"EEPROM Hydrobox Version"},
//{0x61,0,307,1,-1,"Daten Aktivieren/Deaktivieren"},
//{0x61,1,152,1,-1,"Adresse des Innengeräts"},
//{0x61,2,105,2,1,"R1T-Wasser Vorlauftemp. nach dem Plattenwärmetauscher"},
//{0x61,4,105,2,1,"R2T-Wasser Vorlauftemp. nach dem Heizstab"},
//{0x61,6,105,2,1,"R3T-Kältemittel Flüssigkeitstemperatur"},
//{0x61,8,105,2,1,"R4T-Wasser Rücklauftemp. vor dem Plattenwärmetauscher"},
//{0x61,10,105,2,1,"R5T-Brauchwassertemperatur im Speicher"},
//{0x61,12,105,2,1,"IG Luftansaugtemperatur (R1T)"},
//{0x61,14,105,2,1,"Ext. Raum-/Außentemperatursensor"},
//{0x62,0,307,1,-1,"Daten Aktivieren/Deaktivieren"},
//{0x62,1,152,1,-1,"Adresse des Innengeräts"},
//{0x62,2,307,1,-1,"Brachwasserbetrieb (DHW)"},
//{0x62,2,306,1,-1,"Speicher Eco-Mode"},
//{0x62,2,305,1,-1,"Speicher Kompfort-Mode"},
//{0x62,2,304,1,-1,"Speicher Power-Mode"},
//{0x62,2,303,1,-1,"Raumheizbetrieb"},
//{0x62,2,302,1,-1,"System AUS"},
//{0x62,2,301,1,-1,"Nicht im Einsatz"},
//{0x62,2,300,1,-1,"Notbetrieb aktiviert/nicht aktiviert"},
//{0x62,3,105,2,1,"Sollwert Heizungsvorlauf Zusatzzone"},
//{0x62,5,105,2,1,"Sollwert Raumtemperatur"},
//{0x62,7,307,1,-1,"Zusatz Raumthermostat Eingang Kühlen"},
//{0x62,7,306,1,-1,"Zusatz Raumthermostat Eingang Heizen"},
//{0x62,7,305,1,-1,"Haupt Raumthermostat Eingang Kühlen"},
//{0x62,7,304,1,-1,"Haupt Raumthermostat Eingang Heizen"},
//{0x62,7,303,1,-1,"Stromverbrauchsgrenze 4"},
//{0x62,7,302,1,-1,"Stromverbrauchsgrenze 3"},
//{0x62,7,301,1,-1,"Stromverbrauchsgrenze 2"},
//{0x62,7,300,1,-1,"Stromverbrauchsgrenze 1"},
//{0x62,8,307,1,-1,"Keine"},
//{0x62,8,306,1,-1,"Abtauverbot ein/aus"},
//{0x62,8,305,1,-1,"Power-Mode Anforderung"},
//{0x62,8,304,1,-1,"Trinkwasser Prioritätsanforderung"},
//{0x62,8,303,1,-1,"Betriebsarten Konflikt"},
//{0x62,8,302,1,-1,"Umwälzpumpe 2 Zusatzzone"},
//{0x62,8,301,1,-1,"Alarmausgang"},
//{0x62,8,300,1,-1,"Ausgang Betriebsmeldung"},
//{0x62,9,105,2,-1,"Durchflussmenge (l/min)"},
//{0x62,11,105,1,2,"Wasserdruck"},
//{0x62,12,152,1,-1,"Pumpengeschwindigkeit (0: Max-100: Stop)"},
//{0x62,13,152,1,-1,"3-Wege-Ventil Mischung 1"},
//{0x62,14,152,1,-1,"3-Wege-Ventil Mischung 2"},
//{0x62,15,152,1,-1,"Nicht im Einsatz"},
//{0x62,16,307,1,-1,"Nicht im Einsatz"},
//{0x62,16,306,1,-1,"Nicht im Einsatz"},
//{0x62,16,305,1,-1,"Nicht im Einsatz"},
//{0x62,16,304,1,-1,"Nicht im Einsatz"},
//{0x62,16,303,1,-1,"Nicht im Einsatz"},
//{0x62,16,302,1,-1,"Nicht im Einsatz"},
//{0x62,16,301,1,-1,"Nicht im Einsatz"},
//{0x62,16,300,1,-1,"Nicht im Einsatz"},
//{0x63,0,307,1,-1,"Daten Aktivieren/Deaktivieren"},
//{0x63,1,152,1,-1,"Adresse des Innengeräts"},
//{0x63,2,215,1,-1,"I/U EEPROM (3. Ziffer)"},
//{0x63,3,215,1,-1,"I/U EEPROM (4. 5. Ziffer)"},
//{0x63,4,215,1,-1,"I/U EEPROM (6. 7. Ziffer)"},
//{0x63,5,215,1,-1,"I/U EEPROM (8. 9. Ziffer)"},
//{0x63,6,215,1,-1,"I/U EEPROM (11. Ziffer)"},
//{0x63,7,214,1,-1,"I/U EEPROM (12. Ziffer)(rev.)"},
//{0x64,0,307,1,-1,"Daten Aktivieren/Deaktivieren"},
//{0x64,1,152,1,-1,"Adresse des Innengeräts"},
//{0x64,2,316,1,-1,"Hybridbetrieb"},
//{0x64,2,303,1,-1,"Gas/Boiler Heizung Anforderung"},
//{0x64,2,302,1,-1,"Gas/Boiler DHW Anforderung"},
//{0x64,2,301,1,-1,"Bypassventil Ausgang"},
//{0x64,3,105,2,-1,"BE_COP"},
//{0x64,5,105,2,1,"Hybrid Heizung Solltemp."},
//{0x64,7,105,2,1,"Gas/Boiler Heizung Solltemp."},
//{0x64,9,302,1,-1,"Zusatzpumpe"},
//{0x64,9,301,1,-1,"Main pump"},
//{0x64,10,118,2,1,"Mixed water temp."},
//{0x00,0,996,0,-1,"Override All Clear"},
};
