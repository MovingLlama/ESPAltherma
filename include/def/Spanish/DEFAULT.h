#include "labeldef.h"
//  This file is a definition file for ESPAtherma
//  uncomment each value you want to query for your installation.


LabelDef labelDefs[] = {
//{0x00,0,801,0,-1,"*Tipo de refrigerante"},
//{0x00,0,152,1,-1,"Cant. de datos del sensor"},
//{0x00,1,152,1,-1,"Cant. de compresor INV"},
//{0x00,2,152,1,-1,"Compresor STD"},
//{0x00,3,152,1,-1,"Cant. de datos de ventilador"},
//{0x00,4,152,1,-1,"Cant. de datos de la válvula de expansión"},
//{0x00,5,152,1,-1,"Cant. de datos de la válvula de 4 vías"},
//{0x00,6,152,1,-1,"Cant. de calentadores del cárter"},
//{0x00,7,152,1,-1,"Cant. de válvulas de solenoide"},
//{0x00,8,152,1,-1,"Unidades interiores conectable máx."},
//{0x00,9,152,1,-1,"Cant. de unidades interiores conectadas"},
//{0x00,10,213,1,-1,"U/ext. MPU ID"},
//{0x00,11,213,1,-1,"U/ext. MPU ID"},
//{0x10,0,217,1,-1,"Modo de funcionamiento"},
//{0x10,1,307,1,-1,"Termostato ON/OFF"},
//{0x10,1,306,1,-1,"Anticiclo reinicio"},
//{0x10,1,305,1,-1,"Control de arranque"},
//{0x10,1,304,1,-1,"Desescarche"},
//{0x10,1,303,1,-1,"Retorno de aceite"},
//{0x10,1,302,1,-1,"Compensación de presiones"},
//{0x10,1,301,1,-1,"Señal de demanda"},
//{0x10,1,300,1,-1,"Control reducción de ruido"},
//{0x10,2,307,1,-1,"Otro de control 1"},
//{0x10,2,306,1,-1,"Otro de control 2"},
//{0x10,2,305,1,-1,"Otro de control 3"},
//{0x10,2,304,1,-1,"Otro de control 4"},
//{0x10,2,303,1,-1,"Otro de control 5"},
//{0x10,2,302,1,-1,"Otro de control 6"},
//{0x10,2,301,1,-1,"Otro de control 7"},
//{0x10,2,300,1,-1,"Otro de control 8"},
//{0x10,3,307,1,-1,"Otro de control 9"},
//{0x10,3,306,1,-1,"Otro de control 10"},
//{0x10,3,305,1,-1,"Otro de control 11"},
//{0x10,3,304,1,-1,"Otro de control 12"},
//{0x10,3,303,1,-1,"Otro de control 13"},
//{0x10,3,302,1,-1,"Otro de control 14"},
//{0x10,3,301,1,-1,"Otro de control 15"},
//{0x10,3,300,1,-1,"Otro de control 16"},
//{0x10,4,203,1,-1,"Tipo de avería"},
//{0x10,5,204,1,-1,"Código de error"},
//{0x10,6,114,2,1,"Temp. de evaporación objetivo"},
//{0x10,8,114,2,1,"Temp. de condensación objetivo"},
//{0x10,10,307,1,-1,"Caída de la temperatura de descarga"},
//{0x10,10,310,1,-1,"Reintentos protección temp. descarga"},
//{0x10,10,303,1,-1,"Caida de corriente compresor INV"},
//{0x10,10,311,1,-1,"Reintentos protección corriente INV"},
//{0x10,11,307,1,-1,"HP drop control"},
//{0x10,11,310,1,-1,"Reintentos protección HP"},
//{0x10,11,303,1,-1,"Control caida Baja Presión"},
//{0x10,11,311,1,-1,"Reintentos proteccion Baja Presión"},
//{0x10,12,303,1,-1,"Otro control"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x20,0,105,2,1,"Temp. Ambiente exterior"},
//{0x20,2,105,2,1,"Temperatura del intercambiador de calor exterior"},
//{0x20,4,105,2,1,"Temp. del tubo de descarga"},
//{0x20,6,105,2,1,"Temp. Tubo de aspiración"},
//{0x20,8,105,2,1,"Temperatura media del intercambiador de calor exterior"},
//{0x20,10,105,2,1,"Temp. tubo de líquido"},
//{0x20,12,105,2,1,"Temperatura de la aleta del INV"},
//{0x20,14,105,2,2,"Presión baja"},
//{0x20,14,405,2,1,"Presión baja(T)"},
//{0x20,16,105,2,-1,"Datos del sensor 9"},
//{0x20,18,105,2,-1,"Datos del sensor 10"},
//{0x20,20,105,2,-1,"Datos del sensor 11"},
//{0x21,0,105,2,-1,"Corriente primaria del INV (A)"},
//{0x21,2,105,2,-1,"Corriente secundaria del INV (A)"},
//{0x21,4,105,2,1,"Temperatura de la aleta del INV"},
//{0x21,6,105,2,-1,"Datos del sensor 4"},
//{0x21,8,105,2,-1,"Datos del sensor 5"},
//{0x21,10,105,2,-1,"Datos del sensor 6"},
//{0x21,12,105,2,-1,"Datos del sensor 7"},
//{0x21,14,105,2,-1,"Datos del sensor 8"},
//{0x21,16,105,2,-1,"Datos del sensor 9"},
//{0x21,18,105,2,-1,"Datos del sensor 10"},
//{0x21,20,105,2,-1,"Datos del sensor 11"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x30,0,152,1,-1,"Frecuencia 1 del INV (rps)"},
//{0x30,1,152,1,-1,"Frecuencia 2 del INV (rps)"},
//{0x30,0,307,1,-1,"Compresor STD 1"},
//{0x30,0,306,1,-1,"Compresor STD 2"},
//{0x30,0,211,1,-1,"Ventilador 1 (nivel)"},
//{0x30,1,211,1,-1,"Ventilador 2 (nivel)"},
//{0x30,0,151,2,-1,"Válvula de expansión1 (pls)"},
//{0x30,2,151,2,-1,"Válvula de expansión2 (pls)"},
//{0x30,0,307,1,-1,"Válvula de 4 vías 1"},
//{0x30,0,306,1,-1,"Válvula de 4 vías 2"},
//{0x30,0,307,1,-1,"Calentador del cárter 1"},
//{0x30,0,306,1,-1,"Calentador del cárter 2"},
//{0x30,0,307,1,-1,"Válvula solenoide 1"},
//{0x30,0,306,1,-1,"Válvula solenoide 2"},
//{0x30,0,305,1,-1,"Válvula solenoide 3"},
//{0x30,0,304,1,-1,"Válvula solenoide 4"},
//{0x30,0,303,1,-1,"Válvula solenoide 5"},
//{0x30,0,302,1,-1,"Válvula solenoide 6"},
//{0x30,0,301,1,-1,"Válvula solenoide 7"},
//{0x30,0,300,1,-1,"Válvula solenoide 8"},
//{0x30,1,307,1,-1,"Válvula solenoide 9"},
//{0x30,1,306,1,-1,"Válvula solenoide 10"},
//{0x00,0,998,1,-1,"In-Out separator"},
//{0x60,0,307,1,-1,"Activación/desactivación datos"},
//{0x60,1,152,1,-1,"Dirección U/Int."},
//{0x60,2,315,1,-1,"Modo de operación interior"},
//{0x60,2,303,1,-1,"Termostato ON/OFF"},
//{0x60,2,302,1,-1,"Protección de congelación"},
//{0x60,2,301,1,-1,"Modo silencioso"},
//{0x60,2,300,1,-1,"Protección de congelación tuberías"},
//{0x60,3,204,1,-1,"Código de error"},
//{0x60,4,314,2,-1,"Código de la unidad interior"},
//{0x60,6,219,1,-1,"Capacidad de la unidad interior"},
//{0x60,7,105,2,1,"Punto de ajuste R/C"},
//{0x60,9,105,2,1,"Punto de ajuste de salida H/P"},
//{0x60,11,307,1,-1,"Conmutador de flujo"},
//{0x60,11,306,1,-1,"Clixon BUH"},
//{0x60,11,305,1,-1,"Clixon BSH"},
//{0x60,11,304,1,-1,"Entrada de tarifa HP"},
//{0x60,11,303,1,-1,"Entrada solar"},
//{0x60,11,302,1,-1,"No se utiliza"},
//{0x60,11,301,1,-1,"No se utiliza"},
//{0x60,11,300,1,-1,"Modo bivalente"},
//{0x60,12,307,1,-1,"Válvula de 3 vías (Enfriar/calentar)"},
//{0x60,12,306,1,-1,"Válvula de 4 vías (Espacio/DWH)"},
//{0x60,12,305,1,-1,"Resistencia BSH"},
//{0x60,12,304,1,-1,"BUH1"},
//{0x60,12,303,1,-1,"BUH2"},
//{0x60,12,302,1,-1,"Calentador de la placa inferior"},
//{0x60,12,301,1,-1,"Salida de bombeo"},
//{0x60,12,300,1,-1,"Señal de salida solar"},
//{0x60,13,212,1,-1,"Código de opción interior"},
//{0x60,14,314,2,-1,"Versión de software interior"},
//{0x60,15,212,1,-1,"Versión EEPROM interior"},
//{0x61,0,307,1,-1,"Activación/desactivación datos"},
//{0x61,1,152,1,-1,"Dirección U/Int."},
//{0x61,2,105,2,1,"PHE de salida (R1T)"},
//{0x61,4,105,2,1,"BUH de salida (R2T)"},
//{0x61,6,105,2,1,"Temperatura del líquido (R3T)"},
//{0x61,8,105,2,1,"Temperatura de entrada interior (R4T)"},
//{0x61,10,105,2,1,"Temperatura DWH (R5T)"},
//{0x61,12,105,2,1,"Termistor a control remoto"},
};
