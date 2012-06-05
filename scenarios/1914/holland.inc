 
 ############################## 
 # Country definition for HOL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = HOL 
 ai             = "HOL_1914.ai"
  capital        = 122 
  manpower        = 45 
  # Resource Reserves 
energy                 = 1740
metal                  = 870
rare_materials         = 435
  oil          = 500 
  supplies        = 500 
  money         = 40 
  transports       = 250 
  escorts        = 21 
  diplomacy = 
  {  relation = {  tag = BEL value = 125  } 
   relation = {  tag = CAN value = 25  } 
   relation = {  tag = DEN value = 100  } 
   relation = {  tag = ENG value = 75  } 
   relation = {  tag = FRA value = 50  } 
   relation = {  tag = U08 value = 50  } 
   relation = {  tag = ITA value = 20  } 
   relation = {  tag = JAP value = 25  } 
   relation = {  tag = LUX value = 150  } 
   relation = {  tag = MEX value = 25  } 
   relation = {  tag = NOR value = 100  } 
   relation = {  tag = SWE value = 100  } 
   relation = {  tag = USA value = 70  } 
   } 
  SpyInfo        = {  country = "HOL" NumberOfSpies = 6  } 
   # Homeland 
   nationalprovinces      = {  125   122   123   118   119   124 120 121  } 
   # Homeland 
   ownedprovinces         = {  125   122   123   118   119   124  1762  1999 120 121  1761  } 
   # Homeland 
   controlledprovinces         = {  125   122   123   118   119   124  1762  1999 120 121  1761  } 
	claimedprovinces = { 1761 1762 1999 #Netherland Antilles + Guyana (Suriname) 
	}				
  # Semi-Major Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  

	#Interwar Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#Naval Infantry

	#Engineers
	1830
	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290  
	#Early Static Anti-Air Artillery

	#Basic Anti-Air Artillery Brigade 

	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 13080
	#Early Mountain Division


	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 
	5190
	#Faculty of Atomic Research 
	#Medicine
	5600
	#Improved Destroyer 
	3010 3020 3030
	#Interwar Light Cruiser 
	3110 3120
	#Improved Heavy Cruiser 
	3210 3220 
	#Interwar Battlecruiser 
	3310 3320
	#Great War Battleship 
	3410 3420  
	#Med Range Submarine 
	3610 3620
	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - rest
	6500 6510   
	#Air Doctrines - ww1 techs

	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8900
	#Great War Hospital System 
	14000
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 10 
   political_left  = 4 
   free_market    = 9 
   freedom      = 9 
   professional_army = 5 
   defense_lobby     = 2 
   interventionism  = 2 
   } 
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1   
   
   headofstate            = {  type = 9 id = 15174  } # Wilhelmina
   headofgovernment       = {  type = 9 id = 15169  } # Pieter Cort van der Linden
   foreignminister        = {  type = 9 id = 15162  } # John Loudon
   armamentminister       = {  type = 9 id = 15176  } # Anthonij Ewoud Jan Bertling
   ministerofsecurity     = {  type = 9 id = 15190  } # Pieter Cort van der Linden
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 15156  } # Cornelis Jacobus Snijders
   chiefofarmy            = {  type = 9 id = 15149  } # Cornelis Jacobus Snijders
   #chiefofnavy            = {  type = 9 id = ###  } # Cornelis Jacobus Snijders
   chiefofair             = {  type = 9 id = 15148  } # Hendrik Walaardt Sacré
   
  landunit = 
  {  id    = {  type = 18500 id = 1  } 
   location = 122 
   name   = "1e Legerkorps" 
   Division = 
   {  id  = {  type = 18500 id = 2  } 
    name = "1e Divisie" 
    type = infantry 
	model = 3
    extra = artillery 
	brigade_model = 0
	experience = 5
    } 
   Division = 
   {  id  = {  type = 18500 id = 3  } 
    name = "2e Divisie" 
    type = infantry 
	model = 2
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 18500 id = 4  } 
   location = 119 
   name   = "2e Legerkorps" 
   Division = 
   {  id  = {  type = 18500 id = 5  } 
    name = "3e Divisie" 
    type = infantry 
	model = 2
	experience = 0
    } 
   Division = 
   {  id  = {  type = 18500 id = 6  } 
    name = "4e Divisie" 
    type = infantry 
	model = 3
	experience = 0
    } 
   } 

navalunit = { 
        id = { type = 18500 id = 500 } 
        name = "Koninklijke Marine" 
        location = 122 # Amsterdam
        base = 122 # Amsterdam
 
        division = { id = { type = 18500 id = 501 } name = "De Zeven Provincien" type = battleship model = 0 } 
        division = { id = { type = 18500 id = 502 } name = "Kortenaer" type = heavy_cruiser model = 1 } 
        division = { id = { type = 18500 id = 503 } name = "Marten H. Tromp" type = heavy_cruiser model = 1 } 
        division = { id = { type = 18500 id = 504 } name = "Holland" type = light_cruiser model = 0 } 
        division = { id = { type = 18500 id = 505 } name = "Zeeland" type = light_cruiser model = 0 } 
        division = { id = { type = 18500 id = 506 } name = "Noord Brabant" type = light_cruiser model = 0 } 
        division = { id = { type = 18500 id = 507 } name = "1e Flotilla" type = destroyer model = 0 } 
        division = { id = { type = 18500 id = 508 } name = "2e Flotilla" type = destroyer model = 0 } 
        division = { id = { type = 18500 id = 509 } name = "4e Flotilla" type = transport model = 0 } 
    	}

navalunit = { 
        id = { type = 18500 id = 516 } 
        name = "West Indies Squadron" 

        location = 1596 # Curacao
        base = 1596 # Curacao
 
        division = { id = { type = 18500 id = 517 } name = "Jacob van Heemskerck" type = heavy_cruiser model = 1 } 
        division = { id = { type = 18500 id = 518 } name = "Friesland" type = light_cruiser model = 0 } 
        division = { id = { type = 18500 id = 519 } name = "Gelderland" type = light_cruiser model = 0 } 
	}
  } 
 
