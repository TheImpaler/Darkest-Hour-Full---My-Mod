 
 ############################## 
 # Country definition for PAR # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = PAR
ai             = "PAR_1914.ai" 
  # Resource Reserves 
energy                 = 360
metal                  = 180
rare_materials         = 90
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2047 
  manpower        = 0 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 5 
   freedom      = 3 
   free_market    = 5 
   professional_army = 5 
   defense_lobby     = 8 
   interventionism  = 8 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
  nationalprovinces   = {  2046 2047  } 
  ownedprovinces     = {  2046 2047  } 
  controlledprovinces  = {  2046 2047  } 
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
	#Early Static Anti-Air Artillery 
	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Air Doctrines - ww1 techs
	#Engineers
	1830 
} 
  diplomacy = 
  {  relation = {  tag = ARG value = 50  } 
   relation = {  tag = BRA value = 10  } 
   relation = {  tag = BOL value = -50  } 
   relation = {  tag = CHL value = 35  } 
   relation = {  tag = COL value = 10  } 
   relation = {  tag = ECU value = 25  } 
   relation = {  tag = PRU value = 25  } 
   relation = {  tag = URU value = 20  } 
   relation = {  tag = USA value = 75  } 
   relation = {  tag = VEN value = 10  } 
   relation = {  tag = ENG value = 25  } 
   relation = {  tag = U08 value = 25  } 
   } 
  SpyInfo        = {  country = "PAR" NumberOfSpies = 4  } 
  landunit = 
  {  id    = {  type = 15600 id = 60  } 
   name   = "Ejercito de Paraguay" 
   location = 2047 
   Division = 
   {  id    = {  type = 15600 id = 6000  } 
    name   = "I División de Infantería" 
    strength = 100 
    type   = infantry 
	model = 2
    extra  = artillery 
	brigade_model = 0
	experience = 10
    } 
   Division = 
   {  id    = {  type = 15600 id = 6001  } 
    name   = "CVI Brigada de Policia Nacional" 
    strength = 100 
    type   = militia 
	model = 0
	experience = 0
    } 
   } 
  } 
 