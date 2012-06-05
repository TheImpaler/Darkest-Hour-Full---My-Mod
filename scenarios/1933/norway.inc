 
 ############################## 
 # Country definition for NOR # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = NOR 
   ai = "nor_1933.ai"
   dissent = 20
energy                 = 600
metal                  = 300
rare_materials         = 150
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   manpower               = 3 
   capital                = 483 
      
   # Norwegian merchant marine is INSANE! 
   transports             = 200 
   escorts                = 5 
   diplomacy = 
   {  relation = {  tag = BEL value = 100  } 
     relation = {  tag = DEN value = 150  } 
     relation = {  tag = ENG value = 90  } 
     relation = {  tag = FIN value = 75  } 
     relation = {  tag = HOL value = 100  } 
     relation = {  tag = LUX value = 100  } 
     relation = {  tag = SWE value = 150  } 
     relation = {  tag = USA value = 75  } 
    } 
   SpyInfo                = {  country = "NOR" NumberOfSpies = 5  } 
   nationalprovinces      = {  496 488 484 483 485 487 491 489 486 492 490 493 494 497 495  } 
   ownedprovinces         = {  483 485 487 491 489 492 490 493 494 497 496 488 486 484 495  } 
   controlledprovinces    = {  483 485 487 491 489 492 490 493 494 497 496 488 486 484 495  } 
   
	# Western Minor Tech '33
	# Group C 1933 techs 
	# ###################### 
	techapps               = { 
	# Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Bomber 
	4600 4610 4620 4630 4120
	# Armoured Car  
	2860 2870 2880 2020
	# Tankette 
	7600 7610 2620 2010 2630 2640
	# Field Artillery 
	2290 2300 2310 
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Heavy Cruiser 
	3210 3220 3230
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980
	# Agriculture 
	5700 5710 5010 5020
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090 
	# Destroyer 
	3010 3020 3030 3040
	# Light Cruiser 
	3110 3120 3130
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Submarine 
	3610 3620 3630
	# Naval Doctrines
	8010 8020 8040 8050 
	# Multirole fighter
	4300 4310 4320 4330
	# Strategic bomber
	4800 4810 4820
	# Navalbomber
	4700 4710
	# Naval Infantry
	#1560 1570 1580
	# Engineers
	1830 1840 1850 1860
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810
	# Medicine
	5600 5610 5620 5630
	# Land Doctrines WW1 - Entente Line
	6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
	# Land Doctrines WW2 - none
	# Air Doctrines
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
} 

	inventions = { 3000027 }
	policy = 
	{  date              = {  year = 0 month = january day = 0  } 
		democratic        = 9 
		political_left    = 9 
		freedom           = 7 
		free_market       = 7 
		professional_army = 3 
		defense_lobby     = 5 
		interventionism   = 2 
	} 
	peacetime_ic_mod       = 0.6
	headofstate            = {  type = 9 id = 65001  } 
	headofgovernment       = {  type = 9 id = 65002  } 
	foreignminister        = {  type = 9 id = 65003  } 
	armamentminister       = {  type = 9 id = 65004  } 
	ministerofsecurity     = {  type = 9 id = 65005  } 
	ministerofintelligence = {  type = 9 id = 65006  } 
	chiefofstaff           = {  type = 9 id = 65007  } 
	chiefofarmy            = {  type = 9 id = 65008  } 
	chiefofnavy            = {  type = 9 id = 65009  } 
	chiefofair             = {  type = 9 id = 65010  } 
	
	
	landunit = 
   {  location = 484 
     name     = "1. Divisjon" 
     id       = {  type = 12600 id = 1  } 
     Division = 
     {  id       = {  type = 12600 id = 2  } 
       name     = "1. Infanteridivisjon" 
       type     = infantry 
	   model = 7
       strength = 20 
	extra = engineer
	brigade_model = 2
      } 
    } 
   landunit = 
   {  location = 483 
     name     = "2. Divisjon" 
     id       = {  type = 12600 id = 3  } 
     Division = 
     {  id       = {  type = 12600 id = 4  } 
       name     = "2. Infanteridivisjon" 
       type     = infantry 
	   model = 7
       strength = 20 
	extra = anti_air
	brigade_model = 1
      } 
    } 
   landunit = 
   {  location = 485 
     name     = "3. Divisjon" 
     id       = {  type = 12600 id = 5  } 
     Division = 
     {  id       = {  type = 12600 id = 6  } 
       name     = "3. Infanteridivisjon" 
       type     = infantry 
	   model = 7
       strength = 10 
      } 
    } 
   landunit = 
   {  location = 488 
     name     = "4. Divisjon" 
     id       = {  type = 12600 id = 7  } 
     Division = 
     {  id       = {  type = 12600 id = 8  } 
       name     = "4. Infanteridivisjon" 
       type     = infantry 
	   model = 7
       strength = 10 
      } 
    } 
   landunit = 
   {  location = 493 
     name     = "5. Divisjon" 
     id       = {  type = 12600 id = 9  } 
     Division = 
     {  id       = {  type = 12600 id = 10  } 
       name     = "5. Infanteridivisjon" 
       type     = infantry 
	   model = 7
       strength = 20 
      } 
    } 
   landunit = 
   {  location = 497 
     name     = "6. Divisjon" 
     id       = {  type = 12600 id = 11  } 
     Division = 
     {  id       = {  type = 12600 id = 12  } 
       name     = "6. Infanteridivisjon" 
       type     = infantry 
	   model = 7
       strength = 15 
      } 
    } 
	navalunit = { 
		id = { type = 12600 id = 20 } 
		name = "1. Kystvaktdistrikt" 
		location = 491 
		base = 491 
		division = { 
			id = { type = 12600 id = 21 } 
			name = "1. Undervannsbåteskadre" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 12600 id = 22 } 
			name = "2. Undervannsbåteskadre" 
			type = submarine 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 12600 id = 25 } 
		name = "3. Kystvaktdistrikt" 
		location = 495 
		base = 495 
		division = { 
			id = { type = 12600 id = 26 } 
			name = "KNM Norge" 
			type = heavy_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12600 id = 30 } 
			name = "KNM Eidsvold" 
			type = heavy_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12600 id = 2422 } 
			name = "1. Destroyereskadre" 
			type = destroyer 
			} 
		division = { 
			id = { type = 12600 id = 2423 } 
			name = "2. Destroyereskadre" 
			type = destroyer 
			} 
		} 
  } 
 
