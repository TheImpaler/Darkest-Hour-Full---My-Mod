 
 ############################## 
 # Country definition for GUA # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = GUA 
 ai             = "GUA_1914.ai"
  manpower        = 12 
  # Resource Reserves 
energy                 = 600
metal                  = 300
rare_materials         = 150
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2088 
  SpyInfo        = {  country = "GUA" NumberOfSpies = 2  } 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 2 
   free_market    = 6 
   freedom      = 4 
   professional_army = 4 
   defense_lobby     = 5 
   interventionism  = 4 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
  nationalprovinces   = {  2088 2087 2086 2079 2084 2085 2080 2082 2081 2083 } 
  ownedprovinces     = {  2088 2087  } 
  controlledprovinces  = {  2088 2087 } 
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
	1160  1170 
	#Naval Infantry

	#Engineers
	1830
	#Early Static Anti-Air Artillery 
	2800
	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Landdoctrine ww1 - rest
	6500 6510  
	#Air Doctrines - ww1 techs

	#Troopships
	3810
} 
  # San Salvador 
  diplomacy = 
  {  relation = {  tag = HON value = 100  } 
   relation = {  tag = USA value = 125  } 
   relation = {  tag = ENG value = 15  } 
    relation = {  tag = SAL value = -15  }
    relation = {  tag = NIC value = 50  }
    relation = {  tag = COS value = 50  }
    relation = {  tag = SPA value = 50  }
    relation = {  tag = U08 value = 50  }
    relation = {  tag = PAN value = 50  }
   } 
  landunit = 
  {  id    = {  type = 16500 id = 65  } 
   name   = "Ejercito de Guatemala" 
   location = 2088 
   Division = 
   {  id    = {  type = 16500 id = 6500  } 
    name   = "1a Brig. de Infant. 'Adolfo V. Hall'" 
    strength = 40 
    type   = infantry 
	model = 2
	experience = 0
    } 
   } 
  } 
 