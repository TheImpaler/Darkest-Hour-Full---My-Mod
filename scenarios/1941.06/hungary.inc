 
 ############################## 
 # Country definition for HUN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HUN
    belligerence           = 5 
   manpower               = 150 
   capital                = 284 
   # Resource Reserves 
energy                 = 1740
metal                  = 870
rare_materials         = 435
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
    
  diplomacy =
  { relation = { tag = BUL value = 125 }
    relation = { tag = SLO value = -20 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 125 }
    relation = { tag = U01 value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = ITA
      value      = 200
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation =
    { tag        = JAP
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = ROM
      value      = 125
      guaranteed = { day = 20 month = november year = 1940 }
    }
  } 
   SpyInfo                = {  country = "HUN" NumberOfSpies = 7  } 
 nationalprovinces = {  276 277 278 279 280 281 282 283 284 209 210 215 293 341 296 } 
 ownedprovinces = {  276 277 278 279 280 281 282 283 284 215 210 209 213 296 288 292 293 341  } 
 controlledprovinces = {  276 277 278 279 280 281 282 283 284 215 210 209 213 296 288 292 293 341  } 
 claimedprovinces = {  188 208 211 212 213 214 285 286 287 288 289 291 292 295  } 
	# Eastern Minor Tech '41 
	# Group D 1941 techs 
	# ###################### 
	# GW fighter 
	techapps               = {  
	# Interceptor
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole fighter
	4300 4310 4320 4330
	# Tactical bomber
	4600 4610 4620 4630 4120 4130
	# Strategic bomber
	4800 4810 4820
	# Navalbomber
	4700 4710
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 
	# Supply 
	1910 1920 1930 1940 1950 1960 1970
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240
	# Engineers
	1830 1840 1850 1860
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Tanks
	7600 7610 2620 2010 2630 2640 2646
	# Agriculture  
	5700 5710 5010 5020
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090 
	# Medicine
	5600 5610 5620
	# Hospital System
	14000 14010
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910
	# Manpower Focus People's Army Path (SOV)
	6570 6300
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 4 
     free_market       = 4 
     freedom           = 3 
     professional_army = 3 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 105001  } 
   headofgovernment       = {  type = 9 id = 105025  } 
   foreignminister        = {  type = 9 id = 105039  } 
   armamentminister       = {  type = 9 id = 105052  } 
   ministerofsecurity     = {  type = 9 id = 105067  } 
   ministerofintelligence = {  type = 9 id = 105084  } 
   chiefofstaff           = {  type = 9 id = 105095  } 
   chiefofarmy            = {  type = 9 id = 105103  } 
   chiefofnavy            = {  type = 9 id = 105009  } 
   chiefofair             = {  type = 9 id = 105121  } 
   dormant_ministers      = {  105017 105002 105022 105023 105003 105037 105005 105006 105007 105008 105010 105024
                               105066 105038 105120 105134 105004
                            } 

   # ROYAL HUNGARIAN ARMY
   landunit = 
   {  id       = {  type = 20500 id = 1  } 
     name     = "Magyar Kiralyi Honvédség" 
     location = 284 
	Division = 
     {  id       = {  type = 20500 id = 2  } 
       name     = "Magyar Kiralyi Honvédség Föhadiszallas" 
       strength     = 50
       type     = hq
	   model = 2
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 12  } 
     name     = "Gyorshadtest" 
     location = 213 
     Division = 
     {  id       = {  type = 20500 id = 13  } 
       name     = "1. Motorosdandar" 
       strength     = 40
       type     = motorized 
	   model = 0
      } 
     Division = 
     {  id       = {  type = 20500 id = 14  } 
       name     = "2. Motorosdandar" 
       strength     = 40
       type     = motorized 
	   model = 0
      } 
     Division = 
     {  id       = {  type = 20500 id = 10  } 
       name     = "1. Lovasdandar" 
       strength     = 40
       type     = cavalry 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 11  } 
       name     = "2. Lovasdandar" 
       strength     = 40
       type     = cavalry 
	   model = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 15  } 
     name     = "Kárpát Csoport" 
     location = 213 
     Division = 
     {  id       = {  type = 20500 id = 16  } 
       name     = "1. Hegyidandar" 
       strength     = 40
       type     = bergsjaeger 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 17  } 
       name     = "8. Hegyidandar" 
       strength     = 40
       type     = bergsjaeger 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 20  } 
     name     = "I. Hadtest/I. Hadsereg" 
     location = 296 
     Division = 
     {  id       = {  type = 20500 id = 3  } 
       name     = "1. Gyalogdandar" 
       strength     = 45
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 4  } 
       name     = "2. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 5  } 
       name     = "3. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   # 1st Army
   landunit = 
   {  id       = {  type = 20500 id = 21  } 
     name     = "II. Hadtest/I. Hadsereg" 
     location = 292 
     Division = 
     {  id       = {  type = 20500 id = 6  } 
       name     = "4. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 7  } 
       name     = "5. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 8  } 
       name     = "6. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 22  } 
     name     = "III. Hadtest/I. Hadsereg" 
     location = 293 
     Division = 
     {  id       = {  type = 20500 id = 9  } 
       name     = "7. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 23  } 
       name     = "8. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 24  } 
       name     = "9. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   # 2nd Army
   landunit = 
   {  id       = {  type = 20500 id = 27  } 
     name     = "IV. Hadtest/II. Hadsereg" 
     location = 282 
     Division = 
     {  id       = {  type = 20500 id = 28  } 
       name     = "10. Gyalogdandar" 
       strength     = 45
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 29  } 
       name     = "11. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 30  } 
       name     = "12. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 31  } 
     name     = "V. Hadtest/II. Hadsereg" 
     location = 210 
     Division = 
     {  id       = {  type = 20500 id = 32  } 
       name     = "13. Gyalogdandar" 
       strength     = 45
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 33  } 
       name     = "14. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 34  } 
       name     = "15. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 35  } 
     name     = "VI. Hadtest/II. Hadsereg" 
     location = 209 
     Division = 
     {  id       = {  type = 20500 id = 36  } 
       name     = "16. Gyalogdandar" 
       strength     = 45
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 37  } 
       name     = "17. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 38  } 
       name     = "18. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   # 3rd Army
   landunit = 
   {  id       = {  type = 20500 id = 41  } 
     name     = "VII. Hadtest/III. Hadsereg" 
     location = 341 
     Division = 
     {  id       = {  type = 20500 id = 42  } 
       name     = "19. Gyalogdandar" 
       strength     = 45
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 43  } 
       name     = "20. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 44  } 
       name     = "21. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 45  } 
     name     = "VIII. Hadtest/III. Hadsereg" 
     location = 341 
     Division = 
     {  id       = {  type = 20500 id = 46  } 
       name     = "22. Gyalogdandar" 
       strength     = 45
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 47  } 
       name     = "23. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 48  } 
       name     = "24. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 49  } 
     name     = "IX. Hadtest/III. Hadsereg" 
     location = 277 
     Division = 
     {  id       = {  type = 20500 id = 50  } 
       name     = "25. Gyalogdandar" 
       strength     = 45
       type     = infantry
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 51  } 
       name     = "26. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
     Division = 
     {  id       = {  type = 20500 id = 52  } 
       name     = "27. Gyalogdandar" 
       strength     = 45
       type     = infantry 
	   model = 9
      } 
    } 

   # 1ST AIR ARMY
   airunit = 
   {  id       = {  type = 20500 id = 70  } 
     name     = "I Légí Hadsereg" 
     location = 284 
     base     = 284 
     Division = 
     {  id       = {  type = 20500 id = 71  } 
       name     = "I.Vadászosztály" 
       type     = interceptor 
       model    = 5
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 20500 id = 72  } 
       name     = "I.Vadászbombázó Osztály" 
       type     = tactical_bomber 
       model    = 4 
       strength = 30 
      } 
    } 
  } 
 