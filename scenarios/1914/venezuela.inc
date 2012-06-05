 
 ############################## 
 # Country definition for VEN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = VEN 
 ai             = "VEN_1914.ai"
  # Resource Reserves 
energy                 = 480
metal                  = 240
rare_materials         = 120
  oil          = 500 
  supplies        = 500 
  money         = 20 
  transports       = 100 
  capital        = 1993 
  manpower        = 10 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 6 
   political_left  = 1 
   freedom      = 5 
   free_market    = 7 
   professional_army = 2 
   defense_lobby     = 5 
   interventionism  = 3 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
  nationalprovinces   = {  1988 1989 1995 1996 1992 1993 1998  } 
  ownedprovinces     = {  1988 1989 1995 1996 1992 1993  } 
  controlledprovinces  = {  1988 1989 1995 1996 1992 1993  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = {
	#Interwar Fighter  

	#Early Static Anti-Air Artillery 

	#Basic Armoured Car  

	#Basic Anti-Air Artillery Brigade 

	#Great War Heavy Field Artillery 
	2290 
	#Early Anti-Tank Artillery 

	#Naval Infantry

	#Engineers
	1830
	#Great War Infantry Division  

	#Early Mountain Division 
	1160  1170 
	#ASW 18

	#Troopships
	3810
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Mechanized Agriculture 
	5700
	#Medicine
	5600
	#Landdoctrine ww1 - rest
	6500 6510  
	#Air Doctrines - ww1 techs
 } 
  diplomacy = 
  {  relation = {  tag = ARG value = 10  } 
   relation = {  tag = BOL value = -15  } 
   relation = {  tag = BRA value = 10  } 
   relation = {  tag = CHL value = 20  } 
   relation = {  tag = COL value = 20  } 
   relation = {  tag = ECU value = 20  } 
   relation = {  tag = ENG value = -10  } 
   relation = {  tag = PAR value = 10  } 
   relation = {  tag = PRU value = 10  } 
   relation = {  tag = URU value = 10  } 
   relation = {  tag = USA value = 125  } 
   relation = {  tag = U08 value = 25  } 
   } 
  SpyInfo        = {  country = "VEN" NumberOfSpies = 5  } 
  # Firepower 
  # Rather wild estimations 
  landunit = 
  {  id    = {  type = 15800 id = 45  } 
   name   = "Ejercito de Venezuela" 
   location = 1993 
   Division = 
   {  id    = {  type = 15800 id = 4500  } 
    name   = "1a Div. de Inf. 'Eduardo Blanco'" 
    strength = 30 
    type   = infantry 
	model = 2
    } 
   Division = 
   {  id    = {  type = 15800 id = 4501  } 
    name   = "1a División de Guardia Naciónal" 
    strength = 30 
    type   = militia 
	model = 0
    } 
   Division = 
   {  id    = {  type = 15800 id = 4502  } 
    name   = "Los Caballos de Venezuela" 
    strength = 30 
    type   = cavalry 
	model = 2
    } 
   } 
  } 
 