 
 ############################## 
 # Country definition for BOL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = BOL 
  manpower        = 8 
  ai             = "BOL_1914.ai"
  # Resource Reserves 
energy                 = 360
metal                  = 180
rare_materials         = 90
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2020 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 6 
   free_market    = 8 
   freedom      = 7 
   professional_army = 4 
   defense_lobby     = 4 
   interventionism  = 5 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
   
  nationalprovinces   = {  2064 2021 2020 2019 2063 2046 2002 2025  } 
  ownedprovinces     = {  2064 2021 2020 2019 2063  } 
  controlledprovinces  = {  2064 2021 2020 2019 2063  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 

	#Early Infantry Division
	1010  1020
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160 

	#Engineers

	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Landdoctrine ww1 - rest
	6500 6510   
	#Air Doctrines - ww1 techs
} 
  diplomacy = 
  {  relation = {  tag = ARG value = 50  } 
   relation = {  tag = BRA value = 10  } 
   relation = {  tag = CHL value = -50  } 
   relation = {  tag = COL value = 1  } 
   relation = {  tag = ECU value = -20  } 
   relation = {  tag = U08 value = 15  } 
   relation = {  tag = PAR value = -50  } 
   relation = {  tag = PRU value = 100  } 
   relation = {  tag = URU value = 10  } 
   relation = {  tag = USA value = 85  } 
   relation = {  tag = VEN value = -15  } 
   relation = {  tag = ENG value = 15  } 
   } 
  SpyInfo        = {  country = "BOL" NumberOfSpies = 3  } 
  # People's Army 
  landunit = 
  {  id    = {  type = 17000 id = 40  } 
   name   = "Ejercito de Bolivia" 
   location = 2020 
   Division = 
   {  id    = {  type = 17000 id = 4000  } 
    name   = "1. Brigada de Infantería 'Bolivar'" 
    strength = 50 
    type   = infantry 
    model  = 2 
    extra  = artillery 
	brigade_model = 1
		experience = 5
    } 
   Division = 
   {  id    = {  type = 17000 id = 4001  } 
    name   = "1. Brigada de Milicia de Bolivia" 
    strength = 20 
    type   = militia 
    model  = 0 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 17000 id = 4002  } 
    name   = "2. Brigada de Milicia de Bolivia" 
    strength = 20 
    type   = militia 
    model  = 0 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 17000 id = 4003  } 
    name   = "1. Brigada de Caballería 'Chaco'" 
    strength = 20 
    type   = cavalry 
    model  = 2 
	experience = 0
    } 
   } 
  } 
 