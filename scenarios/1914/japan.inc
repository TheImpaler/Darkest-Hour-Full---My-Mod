 
 ############################## 
 # Country definition for JAP # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
 
 country = 
 {  tag          = JAP 
  belligerence      = 10 
  capital        = 1552 
  ai           = "JAP_1914.ai" 
  manpower        = 605 
  # Resource Reserves 
energy                 = 5520
metal                  = 2760
rare_materials         = 1380
  oil          = 500 
  supplies        = 500 
  money         = 100 
  transports       = 600 
  escorts        = 100 
  diplomacy = 
  {  relation = {  tag = BEL value = -25  } 
   relation = {  tag = UCH value = -25  } 
   relation = {  tag = CHL value = 20  } 
   relation = {  tag = ENG value = 50  } 
   relation = {  tag = ETH value = 35  } 
   relation = {  tag = FRA value = 20  } 
   relation = {  tag = U08 value = -20  } 
   relation = {  tag = HOL value = 10  } 
   relation = {  tag = SIA value = 75  } 
   relation = {  tag = RUS value = -20  } 
   relation = {  tag = USA value = 15  } 
   } 
  SpyInfo        = {  country = "JAP" NumberOfSpies = 9  } 
  
  # Sakhalin 
  nationalprovinces   = {  1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1562 1563 1672 1555 1542  
               1664 1564 1663 
     1547 1548 1546
  1541 #Oha (Russian North Sahalin)
  
               } 
  ownedprovinces     = {  1543 1564 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1562 1563 1672 1362 1361 1364 1225 1226 
               1227 1223 1221 1228 1233 1232 1231 1230 1224 1219 1542 1555 
     1547 1548 1546 1664 1663 

 1363 1229 1222 
 
               } 
 
  controlledprovinces  = {  1543 1544 1564 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1562 1563 1672 1362 1361 1364 1225 1226 
               1227 1223 1221 1228 1233 1232 1231 1230 1224 1219 1542 1555 
     1547 1548 1546 
 # Sakhalin 
 1363 1229 1222 1664 1663 

               } 
   claimedprovinces = {   
 1228 1229 1233 1232 1231 1230 # South Korea 
 1223 1221 1222 1226 1227 1224 1225 # North Korea
 1361 1362 1363 1364 # Taiwan 
 1219 #Port Arthur / Dalian
 1672 #Pacific Island
 1683 #Guam 
 }			   
			   
  # JAP 1914 techs 
  # ###################### 
   techapps               = { 
   	#Early Infantry Division  
	1010  1020 1030 
	#1930 Cavalry Division  
	13060 13070 13080
	#Early Mountain Division 
	1160  1170 
	#Naval Infantry
	#Engineers
	1830
	#Supply 
	1910 
	#Early Fighter  
	4500 
	#Early Bomber 

	#Armoured Car  
	#Tank 
	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 
	#Basic Anti-Air Artillery Brigade	
	#Early Anti-Tank Artillery

	#Improved Destroyer 
	3010 3020 3030
	#Basic Light Cruiser 
	3110 3120 3130
	#Improved Heavy Cruiser 
	3210 3220 3230
	#Improved Heavy Cruiser 
	3210 3220 3230  
	#Early Battleship 
	3410 3420 3430 3440
	#Early Battlecruiser
	3310
	#Great War Air Carrier 
	#Improved Light carrier 
	#Short Range Submarine 
	3610 
	#Troopships
	3810
	#ASW

	#Interceptors 
	4500
	#Multirole fighter
	#ww1 strategic bomber
	#ww1 navalbomber
	#CAG

	#Census Tabulating Machine 
	5310 54010 
	#Mechanized Agriculture 
	5700
	#Basic Machine Tools 
	5810 
	#Improved Construction Engineering 
	5800 5080 
	#improved Oil Refining 
	#Faculty of Atomic Research 
	#Medicine
	
	#Landdoctrine ww1 - exp entente eng fra ita USA bel HOL jap 
	6500 6510  6580 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8500 8510 8520 8550
	8900 8910 8920
	#Air Doctrines - ww1 techs
	27480  
} 
  blueprints       = {} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 4 
   freedom      = 5 
   free_market    = 6 
   professional_army = 5 
   defense_lobby     = 8 
   interventionism  = 7 
   } 
	peacetime_ic_mod       = 0.8 
    wartime_ic_mod       = 0.8    
   
   headofstate            = {  type = 9 id = 50286  } # Taisho (Yoshihito)
   headofgovernment       = {  type = 9 id = 50266  } # Okuma Shigenobu
   foreignminister        = {  type = 9 id = 50251  } # Kato Takaaki
   armamentminister       = {  type = 9 id = 50302  } # Wakatsuki Reijiro
   ministerofsecurity     = {  type = 9 id = 50319  } # Okuma Shigenobu
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 50320  } # Yamagata Aritomo
   chiefofarmy            = {  type = 9 id = 50321  } # Yamagata Aritomo
   chiefofnavy            = {  type = 9 id = 50223 } # Ijuin Goro
   chiefofair             = {  type = 9 id = 50322  } # ?   
   
   
 ### Japan Land OOB ### 

landunit = { 
        id = { type = 30111 id = 1 } 
        name = "1 Konoeshidan" 
        location = 1552 
        division = { 
            	id = { type = 30111 id = 2 } 
            	name = "1 Konoeshidan" 
            	strength = 100 
            	type = garrison
		model = 1
		extra = artillery
		brigade_model = 1
		experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 3 } 
        name = "1 Hoheishidan" 
        location = 1552 
        division = { 
            	id = { type = 30111 id = 4 } 
            	name = "1 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 1
		experience = 15
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 5 } 
        name = "2 Hoheishidan" 
        location = 1552 
        division = { 
            	id = { type = 30111 id = 6 } 
            	name = "2 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 7 } 
        name = "3 Hoheishidan" 
        location = 1560 
        division = { 
            	id = { type = 30111 id = 8 } 
            	name = "3 Hoheishidan" 
            	strength = 100 
            	type = infantry 
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 9 } 
        name = "4 Hoheishidan" 
        location = 1551 
        division = { 
            	id = { type = 30111 id = 10 } 
            	name = "4 Hoheishidan" 
            	strength = 100 
           	type = infantry 
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 11 } 
        name = "5 Hoheishidan" 
        location = 1564 
        division = { 
            	id = { type = 30111 id = 12 } 
            	name = "5 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 13 } 
        name = "6 Hoheishidan" 
        location = 1559
        division = { 
            	id = { type = 30111 id = 14 } 
            	name = "6 Hoheishidan" 
            	strength = 100 
            	type = infantry 
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 15 } 
        name = "7 Hoheishidan" 
        location = 1557 
        division = { 
            	id = { type = 30111 id = 16 } 
            	name = "7 Hoheishidan" 
            	strength = 100 
            	type = infantry 
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 17 } 
        name = "8 Hoheishidan" 
        location = 1545 
        division = { 
            	id = { type = 30111 id = 18 } 
            	name = "8 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 19 } 
        name = "9 Hoheishidan" 
        location = 1553 
        division = { 
            	id = { type = 30111 id = 20 } 
            	name = "9 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 21 } 
        name = "10 Hoheishidan" 
        location = 1547
        division = { 
            	id = { type = 30111 id = 22 } 
            	name = "10 Hoheishidan" 
            	strength = 100 
            	type = infantry 
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 23 } 
        name = "11 Hoheishidan" 
        location = 1542
        division = { 
            	id = { type = 30111 id = 24 } 
            	name = "11 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 25 } 
        name = "12 Hoheishidan" 
        location = 1554 
        division = { 
            	id = { type = 30111 id = 26 } 
            	name = "12 Hoheishidan" 
            	strength = 100 
            	type = infantry 
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 27 } 
        name = "13 Hoheishidan" 
        location = 1561 
        division = { 
           	id = { type = 30111 id = 28 } 
            	name = "13 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 29 } 
        name = "14 Hoheishidan" 
        location = 1556 
        division = { 
            	id = { type = 30111 id = 30 } 
            	name = "14 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 31 } 
        name = "15 Hoheishidan" 
        location = 1228 
        division = { 
            	id = { type = 30111 id = 32 } 
            	name = "15 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 33 } 
        name = "16 Hoheishidan" 
        location = 1362 
        division = { 
            	id = { type = 30111 id = 34 } 
            	name = "16 Hoheishidan" 
            	strength = 100 
            	type = infantry 
		model = 2 
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 30111 id = 35 } 
        name = "17 Hoheishidan" 
        location = 1549 
        division = { 
            	id = { type = 30111 id = 36 } 
            	name = "17 Hoheishidan" 
            	strength = 100 
            	type = infantry
		model = 2  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 30111 id = 37 } 
        name = "18 Hoheishidan" 
        location = 1221 
        division = { 
            	id = { type = 30111 id = 38 } 
            	name = "18 Hoheishidan" 
            	strength = 100 
            	type = infantry 
		model = 2 
		experience = 0
        	} 
    	} 

airunit = { 
	id = { type = 30111 id = 100 } 
	name = "1. Hikoutai" 
	location = 1552
	base = 1552

	division = { 
		id = { type = 30111 id = 101 } 
		name = "1. Hikodan" 
		strength = 30 
		type = tactical_bomber 
		model = 1 
		}
	}

navalunit = { 
        id = { type = 30111 id = 500 } 
	name = "1 Sentai" 
        location = 1552 # Tokyo
        base = 1552 # Tokyo
 
        division = { id = { type = 30111 id = 501 } name = "Kawachi" type = battleship model = 2 } 
        division = { id = { type = 30111 id = 502 } name = "Katori" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 503 } name = "Sagami" type = battleship model = 0 } 
        division = { id = { type = 30111 id = 504 } name = "Iki" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 505 } name = "Kurama" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 506 } name = "Kasuga" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 507 } name = "Nisshin" type = heavy_cruiser model = 1 } 
       	division = { id = { type = 30111 id = 508 } name = "Otowa-Sentai A" type = destroyer model = 2 } 
	division = { id = { type = 30111 id = 570 } name = "Otowa-Sentai B" type = destroyer model = 2 } 
	division = { id = { type = 30111 id = 568 } name = "Tsushima" type = light_cruiser model = 1 }
        division = { id = { type = 30111 id = 509 } name = "Tsushima-Sentai A" type = destroyer model = 1 } 
	division = { id = { type = 30111 id = 571 } name = "Tsushima-Sentai B" type = destroyer model = 1 } 
    	} 

navalunit = { 
        id = { type = 30111 id = 510 } 
	name = "2 Sentai" 
        location = 1219 # Dalian 
        base = 1219 # Dalian 

        division = { id = { type = 30111 id = 511 } name = "Kongo" type = battlecruiser model = 1 } 
        division = { id = { type = 30111 id = 512 } name = "Settsu" type = battleship model = 2 } 
        division = { id = { type = 30111 id = 513 } name = "Satsuma" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 514 } name = "Iwami" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 515 } name = "Suwo" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 516 } name = "Tsukuba" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 517 } name = "Aso" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 567 } name = "Niitaka" type = light_cruiser model = 1 }
        division = { id = { type = 30111 id = 572 } name = "Niitaki-Sentai A" type = destroyer model = 2 } 
	division = { id = { type = 30111 id = 574 } name = "Niitaki-Sentai B" type = destroyer model = 2 } 
	division = { id = { type = 30111 id = 564 } name = "Chitose" type = light_cruiser model = 0 }
        division = { id = { type = 30111 id = 519 } name = "Chitose-Sentai A" type = destroyer model = 1 }
	division = { id = { type = 30111 id = 573 } name = "Chitose-Sentai B" type = destroyer model = 1 } 
    	}
 
navalunit = { 
        id = { type = 30111 id = 520 } 
	name = "3 Sentai" 
        location = 1551 # Niigata 
        base = 1551 # Niigata 

        division = { id = { type = 30111 id = 521 } name = "Kashima" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 522 } name = "Mikasa" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 523 } name = "Mishima" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 524 } name = "Adzuma" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 525 } name = "Yakumo" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 526 } name = "Asama" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 565 } name = "Izumo" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 527 } name = "Tokiwa" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 528 } name = "Idzumo" type = heavy_cruiser model = 1 } 
    	}
 
navalunit = { 
        id = { type = 30111 id = 529 } 
	name = "4 Sentai" 
        location = 1554 # Hiroshima
        base = 1554 # Hiroshima
 
        division = { id = { type = 30111 id = 530 } name = "Aki" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 531 } name = "Tango" type = battleship model = 0 } 
        division = { id = { type = 30111 id = 532 } name = "Fuji" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 533 } name = "Ikoma" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 534 } name = "Ibuki" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 535 } name = "Iwate" type = heavy_cruiser model = 1 } 
	division = { id = { type = 30111 id = 536 } name = "Tsugaru" type = light_cruiser model = 1 } 
        division = { id = { type = 30111 id = 537 } name = "Soya" type = light_cruiser model = 1 } 
	division = { id = { type = 30111 id = 575 } name = "Suma" type = light_cruiser model = 0 }
        division = { id = { type = 30111 id = 538 } name = "Suma-Sentai" type = destroyer model = 1 } 
    	}
 
navalunit = { 
        id = { type = 30111 id = 539 } 
	name = "5 Sentai" 
        location = 1560 # Fukuoka
        base = 1560 # Fukuoka
 
        division = { id = { type = 30111 id = 540 } name = "Shikishima" type = battleship model = 0 } 
        division = { id = { type = 30111 id = 541 } name = "Hizen" type = battleship model = 1 } 
        division = { id = { type = 30111 id = 542 } name = "Okinoshima" type = battleship model = 0 } 
        division = { id = { type = 30111 id = 543 } name = "Akashi" type = light_cruiser model = 0 } 
        division = { id = { type = 30111 id = 561 } name = "Chiyoda" type = light_cruiser model = 0 } 
        division = { id = { type = 30111 id = 562 } name = "Hashidate" type = light_cruiser model = 0 } 
        division = { id = { type = 30111 id = 563 } name = "Itsukushima" type = light_cruiser model = 0 } 
        division = { id = { type = 30111 id = 566 } name = "Takachiho" type = light_cruiser model = 0 } 
        division = { id = { type = 30111 id = 544 } name = "Akitsushima-Sentai" type = destroyer model = 1 } 
    	} 
    
navalunit = { 
        id = { type = 30111 id = 545 } 
	name = "6 Sentai" 
        location = 1361 # Takao
        base = 1361 # Takao
 
        division = { id = { type = 30111 id = 546 } name = "Chikuma" type = light_cruiser model = 1 } 
        division = { id = { type = 30111 id = 547 } name = "Yahagi" type = light_cruiser model = 1 } 
        division = { id = { type = 30111 id = 548 } name = "Hirado" type = light_cruiser model = 1 } 
        division = { id = { type = 30111 id = 549 } name = "Tone" type = light_cruiser model = 1 }
    	}
 
navalunit = { 
        id = { type = 30111 id = 550 } 
	name = "7 Sentai" 
        # leader = ? 
        location = 1552 # Tokyo
        base = 1552 # Tokyo
 
        division = { id = { type = 30111 id = 551 } name = "1 Sentai" type = transport model = 0 } 
        division = { id = { type = 30111 id = 552 } name = "2 Sentai" type = transport model = 0 } 
        division = { id = { type = 30111 id = 553 } name = "3 Sentai" type = transport model = 0 } 
        division = { id = { type = 30111 id = 554 } name = "4 Sentai" type = transport model = 0 } 
	}
division_development = { 
        id = { type = 30111 id = 555 } 
        name = "Hiei" 
        type = battlecruiser 
        model = 1 
        cost = 0.4 
        date = { year = 1914 month = august day = 4 } 
    	} 
division_development = { 
        id = { type = 30111 id = 556 } 
        name = "Haruna" 
        type = battlecruiser 
        model = 1 
        cost = 0.4  
        date = { year = 1915 month = april day = 19 } 
    	} 
division_development = { 
        id = { type = 30111 id = 557 } 
        name = "Kirishima" 
        type = battlecruiser 
        model = 1 
        cost = 0.4  
        date = { year = 1915 month = april day = 19 } 
    	} 
division_development = { 
        id = { type = 30111 id = 558 } 
        name = "Fuso" 
        type = battleship 
        model = 3 
        cost = 0.4  
        date = { year = 1915 month = november day = 18 } 
    	} 
division_development = { 
        id = { type = 30111 id = 559 } 
        name = "Yamashiro" 
        type = battleship 
        model = 3 
        cost = 0.4  
        date = { year = 1917 month = march day = 30 } 
    	}
division_development = { 
        id = { type = 30111 id = 560 } 
        name = "Wakamiya" 
        type = escort_carrier 
        model = 0 
        cost = 0.2  
        date = { year = 1914 month = august day = 17 } 
    	}
  } 
 
