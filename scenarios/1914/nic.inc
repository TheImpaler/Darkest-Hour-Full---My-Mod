 
 ############################## 
 # Country definition for NIC # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = NIC 
 ai             = "NIC_1914.ai"
  puppet                 = USA
  # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2080 
  manpower        = 3 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 2 
   freedom      = 4 
   free_market    = 7 
   professional_army = 5 
   defense_lobby     = 8 
   interventionism  = 6 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
  nationalprovinces   = {  2080 2082 2085 2084 2088 2087 2086 2079 2081 2083 } 
  ownedprovinces     = {  2080 2082  } 
  controlledprovinces  = {  2080 2082  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
  techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 

	#Early Mountain Division 
	1160  1170 
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
  {  relation = {  tag = HON value = 100  } 
   relation = {  tag = USA value = 100  } 
   } 
  SpyInfo        = {  country = "NIC" NumberOfSpies = 2  } 
  landunit = 
  {  id    = {  type = 11600 id = 45  } 
   name   = "Ejercito de Nicaragua" 
   location = 2080 
   Division = 
   {  id    = {  type = 11600 id = 4500  } 
    name   = "Guardia de Presidente" 
    strength = 60 
    type   = infantry 
	model = 2
    extra  = artillery 
	brigade_model = 0
	experience = 0
    } 
   } 
  } 
 