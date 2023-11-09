# PROJEKTAS_1 
# Paleidimas

-----
-----

# Reikalavimai

# Parametrai 

| CPU                                                       	| RAM                          	| SSD                  	|
|-----------------------------------------------------------	|------------------------------	|----------------------	|
| 11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz   2.42 GHz 	| 8,00 GB (naudotina: 7,70 GB) 	| 475GB (laisva 195GB) 	|

# V0.1 Versija:

Pirminė programos versija, šioje versijoje vartotojas gali pats įvesti duomenis arba nuskaityti duomenis iš failo. Išveda vardą, pavardę, galutinį vidurkį/ galutinį medianą(jie skaičiuojami pagal atitinkamas formules: Galutinins= 0.4*vidurkis/mediana+0.6*egzaminas

# V0.2 Versija:

Porgrama atlieka tą patį, kaip ir # V0.1 versija, tačiau yra patobulinta. Šioje V0.2 versijoje studentai suskirstomi į dvi grupes: "Vargšiukai" ir "Kietiakai". Vargšiukai yra tie, kurių galutinis balas yra <5, kietiakai yra tie, kurių balas galutinis yra >=5. Taip pa t6ioje versijoje atsiranda laiko/spartos matavimas, kuris parodo kiek kiekviename etape užtrukto programa.

# V0.3 Versija:

Programoje išlieka tie patys pakeitimai, kaip ir senose versijose,  tačiau esminis pakeitimas yra tas, kad mes analizuojame programos spartos analizę, kaip ji priklauso, jeigu vietoj  vector naudojame list, kas pasikeičia, šiuo atveju pastebiu, kad su mano testavimo įrenginiu atsiranda atminties trūkumas ir tenka naudoti SSD su 10000000 studentų sąrašu, nes kitaip užlūžta programa.

# V1.0 Versija:
Naujausioje versijoje vyksta testavimas skirtingų strategijų. Jos yra 3. 1-Strategija duomenų rūšiavimui naudoja tokį pat rūšiavimo principą, kaip ir senosiose versijose. 2-Strategija naudoja rūšiavimui, tik vieną konteinerį, tiesiog vargšiukus ištrina iš bendro, juos perkelia į vargšiukų konteinerį, o kietiakai lieka senąjame ir nėra perkeliami į naują konteinerį. 3-Strategija yra patobulinta (2-strategija), kadangi buvo pastebėta atliekant spartos matavimus, jog ši strategija yra spartesnė, negu 1-strategija. 3-Strategijoje naudojamas stable_partition rūšiavimo metu, jis pertvarko elementus diapazone [first,last)taip, kad visi elementai, kuriems grąžina pred true, būtų pirmesni už visus tuos, kuriems jis grąžina false.
# Strategijų tipai S D DT
S-
D-
DT-
# Vektorius Naudojo S strategija  
Ekrano kopijos su visais laikais yra suagomos atskirame pdf faile, kuris yra patalpintas GitHub sistemoje prie failų ,,[Atminties matavimai su List Vektor ir S,D,DT strategijomis.pdf](https://github.com/JurgisMickeviciusDM/Projektas1/files/13259074/Atminties.matavimai.su.List.Vektor.ir.S.D.DT.strategijomis.pdf) "
Atlikus pakartotinius galutinius matavimus ir išvedus matavimų vidurkį gauti rezultatai ,,pablogėo", kadangi prieš tai matavau Vector viską tik su RAM, o List iškilus problemoms, kad nulužinėja programa, nes neužtenka atminties, pradėjau naudoti SSD, talpos nekeičiau ir permatuojant Vector, kadangi yra, tik 8GB RAM, o Windows sistema vien paleidus ir kitos porgramos iš kart ,,suvalgo'' 5GB RAM, tad laisvų lieka geriausiu atveju, tik 3GB. Tad sistema automatiškai dalį atminties pradėjo imti iš SSD, kai suteikiau tokią galimybę, tai yra atlaisvinau, leidau sistemai naudoti 40GB SSD. 

|          Testavimas          	|      1000     	|     10000     	|     100000     	|     1000000     	|      10000000      	|
|:----------------------------:	|:-------------:	|:-------------:	|:--------------:	|:---------------:	|:------------------:	|
|    <br>Failo nuskaitymas     	|    <br>0,001  	|    <br>0,1634 	|    <br>2,1478  	|    <br>22,5653  	|    <br>235,5489    	|
|    <br>Rušiavimas            	|    <br>0,0016 	|    <br>0,0254 	|    <br>0,2232  	|    <br>2,4963   	|    <br>105,8744    	|
|    <br>Sortinimas            	|    <br>0,005  	|    <br>0,08   	|    <br>1,254   	|    <br>16,8954  	|    <br>210,594     	|
|    <br>Įrašymas į vargšiukus 	|    <br>0,0115 	|    <br>0,1014 	|    <br>1,745   	|    <br>22,9546  	|    <br>248,6545    	|
|    <br>Sortinimas            	|    <br>0,0174 	|    <br>0,1345 	|    <br>2,4579  	|    <br>30,8746  	|    <br>289,5456    	|
|    <br>Įrašymas į kietiakus  	|    <br>0,017  	|    <br>0,2454 	|    <br>3,2478  	|    <br>32,5475  	|    <br>338,5616    	|
|    <br>Bendras               	|    <br>0,0535 	|    <br>0,7501 	|    <br>11,0757 	|    <br>128,3337 	|    <br>1428,779    	|

# Vektorius Naudojo D strategija  

|          Testavimas          	|      1000     	|     10000     	|     100000    	|     1000000     	|      10000000      	|
|:----------------------------:	|:-------------:	|:-------------:	|:-------------:	|:---------------:	|:------------------:	|
|    <br>Failo nuskaitymas     	|    <br>0,014  	|    <br>0,284  	|    <br>2,1845 	|    <br>22,7653  	|    <br>227,6789    	|
|    <br>Rušiavimas            	|    <br>0,0013 	|    <br>0,0287 	|    <br>0,3548 	|    <br>3,4963   	|    <br>324,2243    	|
|    <br>Sortinimas            	|    <br>0,004  	|    <br>0,0754 	|    <br>1,4587 	|    <br>17,4554  	|    <br>215,9591    	|
|    <br>Įrašymas į vargšiukus 	|    <br>0,0091 	|    <br>0,1178 	|    <br>1,645  	|    <br>19,6478  	|    <br>255,1248    	|
|    <br>Sortinimas            	|    <br>0,0121 	|    <br>0,1145 	|    <br>1,894  	|    <br>23,9946  	|    <br>294,7841    	|
|    <br>Įrašymas į kietiakus  	|    <br>0,014  	|    <br>0,1785 	|    <br>2,3478 	|    <br>29,1275  	|    <br>321,4116    	|
|    <br>Bendras               	|    <br>0,0545 	|    <br>0,7989 	|    <br>9,8848 	|    <br>116,4869 	|    <br>1639,183    	|

# Vektorius Naudojo DT strategija  

|          Testavimas          	|      1000     	|     10000     	|     100000     	|     1000000     	|      10000000      	|
|:----------------------------:	|:-------------:	|:-------------:	|:--------------:	|:---------------:	|:------------------:	|
|    <br>Failo nuskaitymas     	|    <br>0,001  	|    <br>0,1634 	|    <br>2,1478  	|    <br>22,5653  	|    <br>235,5489    	|
|    <br>Rušiavimas            	|    <br>0,0016 	|    <br>0,0254 	|    <br>0,2232  	|    <br>2,4963   	|    <br>105,8744    	|
|    <br>Sortinimas            	|    <br>0,005  	|    <br>0,08   	|    <br>1,254   	|    <br>16,8954  	|    <br>210,594     	|
|    <br>Įrašymas į vargšiukus 	|    <br>0,0115 	|    <br>0,1014 	|    <br>1,745   	|    <br>22,9546  	|    <br>248,6545    	|
|    <br>Sortinimas            	|    <br>0,0174 	|    <br>0,1345 	|    <br>2,4579  	|    <br>30,8746  	|    <br>289,5456    	|
|    <br>Įrašymas į kietiakus  	|    <br>0,017  	|    <br>0,2454 	|    <br>3,2478  	|    <br>32,5475  	|    <br>338,5616    	|
|    <br>Bendras               	|    <br>0,0535 	|    <br>0,7501 	|    <br>11,0757 	|    <br>128,3337 	|    <br>1428,779    	|


# List Naudojo S strategiją 
|          Testavimas          	|      1000     	|     10000     	|     100000     	|     1000000     	|      10000000      	|
|:----------------------------:	|:-------------:	|:-------------:	|:--------------:	|:---------------:	|:------------------:	|
|    <br>Failo nuskaitymas     	|    <br>0,001  	|    <br>0,1634 	|    <br>2,1478  	|    <br>22,5653  	|    <br>235,5489    	|
|    <br>Rušiavimas            	|    <br>0,0016 	|    <br>0,0254 	|    <br>0,2232  	|    <br>2,4963   	|    <br>105,8744    	|
|    <br>Sortinimas            	|    <br>0,005  	|    <br>0,08   	|    <br>1,254   	|    <br>16,8954  	|    <br>210,594     	|
|    <br>Įrašymas į vargšiukus 	|    <br>0,0115 	|    <br>0,1014 	|    <br>1,745   	|    <br>22,9546  	|    <br>248,6545    	|
|    <br>Sortinimas            	|    <br>0,0174 	|    <br>0,1345 	|    <br>2,4579  	|    <br>30,8746  	|    <br>289,5456    	|
|    <br>Įrašymas į kietiakus  	|    <br>0,017  	|    <br>0,2454 	|    <br>3,2478  	|    <br>32,5475  	|    <br>338,5616    	|
|    <br>Bendras               	|    <br>0,0535 	|    <br>0,7501 	|    <br>11,0757 	|    <br>128,3337 	|    <br>1428,779    	|

# List Naudojo D strategiją 
|          Testavimas          	|      1000     	|     10000     	|     100000     	|     1000000     	|      10000000      	|
|:----------------------------:	|:-------------:	|:-------------:	|:--------------:	|:---------------:	|:------------------:	|
|    <br>Failo nuskaitymas     	|    <br>0,001  	|    <br>0,1634 	|    <br>2,1478  	|    <br>22,5653  	|    <br>235,5489    	|
|    <br>Rušiavimas            	|    <br>0,0016 	|    <br>0,0254 	|    <br>0,2232  	|    <br>2,4963   	|    <br>105,8744    	|
|    <br>Sortinimas            	|    <br>0,005  	|    <br>0,08   	|    <br>1,254   	|    <br>16,8954  	|    <br>210,594     	|
|    <br>Įrašymas į vargšiukus 	|    <br>0,0115 	|    <br>0,1014 	|    <br>1,745   	|    <br>22,9546  	|    <br>248,6545    	|
|    <br>Sortinimas            	|    <br>0,0174 	|    <br>0,1345 	|    <br>2,4579  	|    <br>30,8746  	|    <br>289,5456    	|
|    <br>Įrašymas į kietiakus  	|    <br>0,017  	|    <br>0,2454 	|    <br>3,2478  	|    <br>32,5475  	|    <br>338,5616    	|
|    <br>Bendras               	|    <br>0,0535 	|    <br>0,7501 	|    <br>11,0757 	|    <br>128,3337 	|    <br>1428,779    	|

# List Naudojo DT strategiją 
|          Testavimas          	|      1000     	|     10000     	|     100000     	|     1000000     	|      10000000      	|
|:----------------------------:	|:-------------:	|:-------------:	|:--------------:	|:---------------:	|:------------------:	|
|    <br>Failo nuskaitymas     	|    <br>0,001  	|    <br>0,1634 	|    <br>2,1478  	|    <br>22,5653  	|    <br>235,5489    	|
|    <br>Rušiavimas            	|    <br>0,0016 	|    <br>0,0254 	|    <br>0,2232  	|    <br>2,4963   	|    <br>105,8744    	|
|    <br>Sortinimas            	|    <br>0,005  	|    <br>0,08   	|    <br>1,254   	|    <br>16,8954  	|    <br>210,594     	|
|    <br>Įrašymas į vargšiukus 	|    <br>0,0115 	|    <br>0,1014 	|    <br>1,745   	|    <br>22,9546  	|    <br>248,6545    	|
|    <br>Sortinimas            	|    <br>0,0174 	|    <br>0,1345 	|    <br>2,4579  	|    <br>30,8746  	|    <br>289,5456    	|
|    <br>Įrašymas į kietiakus  	|    <br>0,017  	|    <br>0,2454 	|    <br>3,2478  	|    <br>32,5475  	|    <br>338,5616    	|
|    <br>Bendras               	|    <br>0,0535 	|    <br>0,7501 	|    <br>11,0757 	|    <br>128,3337 	|    <br>1428,779    	|

