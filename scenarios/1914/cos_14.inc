 
 ############################## 
 # Country definition for COS # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = COS 
  manpower        = 5 
  ai             = "cos_1914.ai"
  # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2081 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
       democratic = 3
        political_left = 4
        free_market = 7
        freedom = 6 
   professional_army = 4 
   defense_lobby     = 3 
   interventionism  = 2 
   }
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
   
  nationalprovinces   = {  2081 2083 } 
  ownedprovinces     = {  2081  2083 } 
  controlledprovinces  = {  2081  2083 } 
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
	13060 
	#Early Mountain Division

	#Basic Anti-Air Artillery Brigade 

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Naval Infantry

	#Engineers
	1830 

	#Troopships
	3810
	#Air Doctrines - ww1 techs

	#Landdoctrine ww1 - rest
	6500 6510  
} 
  diplomacy = 
  {  relation = {  tag = USA value = 100  } 
relation = {  tag = U08 value = 25  } 
relation = {  tag = ENG value = 25  } 
relation = {  tag = PAN value = 75  } 
relation = {  tag = NIC value = 50  } 
relation = {  tag = SAL value = 50  } 
relation = {  tag = HON value = 50  } 
relation = {  tag = GUA value = 50  } 
relation = {  tag = MEX value = 10  } 
relation = {  tag = SPA value = 25  } 
   } 
  SpyInfo        = {  country = "COS" NumberOfSpies = 1  } 
  
  # Americas Group 1 # 
  landunit = 
  {  id    = {  type = 25000 id = 60  } 
   name   = "Ejercito de Costa Rica" 
   location = 2081 
   Division = 
   {  id    = {  type = 25000 id = 6000  } 
    name   = "Brigada de Infantería Nro. 1" 
    strength = 20 
    type   = infantry 
    model  = 2 
    extra  = artillery 
	brigade_model = 0
	experience = 0
    } 
   } 
  } 
 