 
 ############################## 
 # Country definition for PRU # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = PRU 
 ai             = "PRU_1914.ai"
  # Resource Reserves 
energy                 = 600
metal                  = 300
rare_materials         = 150
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2016 
  manpower        = 24 
  diplomacy = 
  {  relation = {  tag = ARG value = 20  } 
   relation = {  tag = BOL value = 30  } 
   relation = {  tag = BRA value = 10  } 
   relation = {  tag = CHL value = -25  } 
   relation = {  tag = COL value = -35  } 
   relation = {  tag = ECU value = -50  } 
   relation = {  tag = PAR value = 25  } 
   relation = {  tag = URU value = 25  } 
   relation = {  tag = USA value = 75  } 
   relation = {  tag = VEN value = 10  } 
   relation = {  tag = U08 value = 30  }
   relation = {  tag = ENG value = 30  } 
   } 
  nationalprovinces    = { 2017 2015 2016 2011 2014 2018 2013 2012 2008 2010 2033 } 
  ownedprovinces       = { 2017 2015 2016 2011 2014 2018 2013 2012 } 
  controlledprovinces  = { 2017 2015 2016 2011 2014 2018 2013 2012 } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
    techapps               = {
	#Interwar Fighter  
	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290  
	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160   
	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Early Light Cruiser 
	3110  
	#Early Static Anti-Air Artillery 
	2800
	#Basic Anti-Air Artillery Brigade 

	#Short Range Submarine 
	3610
	#Great War Destroyer 
	3010 3020
	#Landdoctrine ww1 - rest
	6500 6510  
	#Air Doctrines - ww1 techs
	# Naval Firepower Doctrine

	#Naval Infantry

	#Engineers
	1830 
	#ASW 18

	#Troopships
	3810 
} 
 policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 2 
   freedom      = 4 
   free_market    = 5 
   professional_army = 5 
   defense_lobby     = 5 
   interventionism  = 5 
   }
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
   
  SpyInfo        = {  country = "PRU" NumberOfSpies = 4  } 
  landunit = 
  {  id    = {  type = 17600 id = 1  } 
   name   = "Ejercito del Peru" 
   location = 2016 
   Division = 
   {  id    = {  type = 17600 id = 2  } 
    name   = "1a Div. de Inf. del Peru 'Bolognesi'" 
    strength = 100 
    type   = infantry 
	model = 1
	experience = 5
    } 
   Division = 
   {  id    = {  type = 17600 id = 3  } 
    name   = "2a Div. de Infantería del Peru" 
    strength = 100 
    type   = infantry 
	model = 2
	experience = 2
    } 
   Division = 
   {  id    = {  type = 17600 id = 4  } 
    name   = "3a Div. de Infantería del Peru" 
    strength = 100 
    type   = infantry 
	model = 2
	experience = 0
    } 
   Division = 
   {  id    = {  type = 17600 id = 5  } 
    name   = "1a Brigada Fuerzas Especiales" 
    strength = 100 
    type   = bergsjaeger 
	model = 0
	experience = 2
    } 
   } 
  navalunit = 
  {  id    = {  type = 17600 id = 6  } 
   name   = "Marina del Guerra del Peru" 
   location = 2016 
   base   = 2016 
   # Two DDs: 
   Division = 
   {  id  = {  type = 17600 id = 7  } 
    name = "Suliana é Flotilla" 
    type = destroyer 
    model = 0 
    } 
   # Built 1907: 
   Division = 
   {  id  = {  type = 17600 id = 8  } 
    name = "ARP Almirante Grau" 
    type = heavy_cruiser 
    model = 0 
    } 
   Division = 
   {  id  = {  type = 17600 id = 9  } 
    name = "ARP Coronel Bolognesi" 
    type = heavy_cruiser 
    model = 0 
    } 
   # Submarine division: 
   Division = 
   {  id  = {  type = 17600 id = 10  } 
    name = "Tacna é Flotilla" 
    type = submarine 
    model = 1 
    } 
   } 
  } 
 