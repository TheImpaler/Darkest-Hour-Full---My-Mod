 
 ############################## 
 # Country definition for HOL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HOL 
   ai = "hol_1933.ai"
   dissent = 20
   capital                = 122 
   manpower               = 0 
   # Resource Reserves 
energy                 = 1740
metal                  = 870
rare_materials         = 435
   oil                    = 500 
   supplies               = 500 
   money                  = 40 
   transports             = 250 
   escorts                = 21 
   diplomacy = 
   {  relation = {  tag = BEL value = 150  } 
     relation = {  tag = CAN value = 80  } 
     relation = {  tag = DEN value = 100  } 
     relation = {  tag = ENG value = 125  } 
     relation = {  tag = FIN value = 100  } 
     relation = {  tag = FRA value = 75  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = ITA value = -20  } 
     relation = {  tag = JAP value = -50  } 
     relation = {  tag = LUX value = 150  } 
     relation = {  tag = MEX value = 25  } 
     relation = {  tag = NOR value = 100  } 
     relation = {  tag = SWE value = 100  } 
     relation = {  tag = USA value = 70  } 
    } 
   SpyInfo                = {  country = "HOL" NumberOfSpies = 6  } 
   # Homeland 
   nationalprovinces      = {  125   122   123   118   119   124 120 121  } 
   # Homeland 
   ownedprovinces         = {  125   122   123   118   119   124  1762  1999 120 121  1761  } 
   # Homeland 
   controlledprovinces         = {  125   122   123   118   119   124  1762  1999 120 121  1761  } 
	claimedprovinces = { 1761 1762 1999 #Netherland Antilles + Guyana (Suriname) 
	}
	
	# Semi-Major Tech '36 
	# Group C 1936 techs 
	# ###################### 
	techapps               = { 
	# Engineers
	1830 1840 1850 1860
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 
	# Static Anti-Air Artillery
	2800 2450 21180 21190
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# armor 
	7600 7610 2010 2630 2640
	# Destroyer 
	3010 3020 3030 3040 3050 
	# Light Cruiser 
	3110 3120 3130 3140
	# Heavy Cruiser 
	3210 3220 3230 3240 3250
	# Battlecruiser 
	3310 3320 3330 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Submarine 
	3610 3620 3630 3640
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810
	# Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Bomber 
	4600 4610 4620 4630 4120
	# Multirole fighter
	4300 4310 4320 4330
	# Strategic bomber
	4800 4810 4820
	# Navalbomber
	4700 4710
	# Agriculture 
	5700 5710 5010
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090 
	# Medicine
	5600 5610 5620 5630
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
	# Defensive Focus Grand Battleplan Path
	6560
	# Air Doctrines
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	# Engagement Theories
	8010 8020 8040 8050 8060 8070 8080
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	# Naval Interdiction
	8500 8510 8520 8600 8610
	# Engagement Tactics
	8900 8910 8920 8930 8940
	# Hospital System 
	14000 14010 14020
} 

inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 2 
     free_market       = 9 
     freedom           = 10 
     professional_army = 3 
     defense_lobby     = 1 
     interventionism   = 1 
    } 
   headofstate            = {  type = 9 id = 15001  } 
   headofgovernment       = {  type = 9 id = 15002  } 
   foreignminister        = {  type = 9 id = 15003  } 
   armamentminister       = {  type = 9 id = 15004  } 
   ministerofsecurity     = {  type = 9 id = 15005  } 
   ministerofintelligence = {  type = 9 id = 15006  } 
   chiefofstaff           = {  type = 9 id = 15007  } 
   chiefofarmy            = {  type = 9 id = 15008  } 
   chiefofnavy            = {  type = 9 id = 15009  } 
   chiefofair             = {  type = 9 id = 15010  } 
   landunit = 
   {  id       = {  type = 18500 id = 1  } 
     location = 125 
     name     = "Ie Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 2  } 
       name  = "1e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 7 
       extra = anti_air
	   brigade_model = 1
      } 
     Division = 
     {  id   = {  type = 18500 id = 3  } 
       name = "5e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 4  } 
     location = 119 
     name     = "IIe Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 5  } 
       name  = "2e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 7 
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18500 id = 6  } 
       name = "6e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 7  } 
     location = 118 
     name     = "IIIe Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 8  } 
       name  = "3e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 7
       extra = engineer
	   brigade_model = 3
      } 
     Division = 
     {  id   = {  type = 18500 id = 9  } 
       name = "7e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 10  } 
     location = 120 
     name     = "IVe Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 11  } 
       name  = "4e Divisie" 
	   strength     = 80
       type  = infantry 
	   model = 7 
       extra = armored_car
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18500 id = 12  } 
       name = "8e Divisie" 
	   strength     = 10
       type = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 13  } 
     location = 1647 
     name     = "Koninklijk Nederlands Indisch Leger" 
     Division = 
     {  id   = {  type = 18500 id = 14  } 
       name = "Ie Divisie" 
	   strength     = 90
       type = infantry 
	   model = 6 
      } 
     Division = 
     {  id   = {  type = 18500 id = 15  } 
       name = "IIe Divisie" 
	   strength     = 90
       type = infantry
		model = 6 	   
      } 
     Division = 
     {  id   = {  type = 18500 id = 16  } 
       name = "IIIe Divisie" 
	   strength     = 90
       type = infantry 
	   model = 6 
      } 
    } 
   navalunit = 
   {  id       = {  type = 18500 id = 17  } 
     location = 122 
     base     = 122 
     name     = "Koninklijke Vloot" 
     Division = 
     {  id    = {  type = 18500 id = 18  } 
       name  = "HrMs De Ruyter" 
       type  = light_cruiser 
       model = 4 
      } 
     Division = 
     {  id    = {  type = 18500 id = 19  } 
       name  = "HrMs Java" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 20  } 
       name  = "HrMs Sumatra" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 21  } 
       name  = "1e Torpedobootjager Smaldeel" 
       type  = destroyer 
       model = 4
      } 
     Division = 
     {  id    = {  type = 18500 id = 22  } 
       name  = "2e Torpedobootjager Smaldeel" 
       type  = destroyer 
       model = 4
      } 
     Division = 
     {  id   = {  type = 18500 id = 23  } 
       name = "1e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 24  } 
       name = "2e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 25  } 
       name = "3e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 26  } 
       name = "4e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
    } 
	navalunit = { 
		id = { type = 18500 id = 1381 } 
		name = "3e Koninklijke Vloot" 
		location = 122 
		base = 122 
     Division = 
     {  id    = {  type = 18500 id = 39  } 
       name  = "1e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 40  } 
       name  = "2e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 41  } 
       name  = "3e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 3 
      } 
    }
  } 
 
