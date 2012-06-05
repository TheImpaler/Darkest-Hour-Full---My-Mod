 ############################## 
 # Country definition for ARG # 
 ############################## 

 #####################
 # Country main data #
 ##################### 
country = { 
  tag       	 = ARG
  capital   	 = 2050
  manpower  	 = 40 
  ai             = "ARG_1914.ai"
  # Resource Reserves 
  energy         = 1620
  metal          = 810
  rare_materials = 405
  oil            = 500
  supplies       = 500 
  money          = 20
  transports       = 100 
  # Others
  # ######################  
  policy = 
  { date = { year = 0 month = january day = 0 } 
    democratic        = 6 
    political_left    = 4 
    free_market       = 8
    freedom           = 6
    professional_army = 4
    defense_lobby     = 4 
    interventionism   = 3 
 } 
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1 
 
  # ###################### 
  headofstate            = { type = 9 id = 165216 }
  headofgovernment       = { type = 9 id = 165212 }
  foreignminister        = { type = 9 id = 165207 }
  #armamentminister       = { type = 9 id = }
  #ministerofsecurity     = { type = 9 id = }
  #ministerofintelligence = { type = 9 id = }
  #chiefofstaff           = { type = 9 id = }
  #chiefofarmy            = { type = 9 id = }
  #chiefofnavy            = { type = 9 id = }
  #chiefofair             = { type = 9 id = }   
  # ###################### 
  nationalprovinces   = { 2035 2038 2039 2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2034 2044 2049 2043 2045 }   
  ownedprovinces      = { 2035 2038 2039 2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2034 2044 2049 }   
  controlledprovinces = { 2035 2038 2039 2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2034 2044 2049 }  
  # ######################     
  # Semi-Major Tech '14 
  # Group C 1914 techs 
  # ###################### 
  techapps = {
	#Early Fighter  

	#Early Bomber 

	#Basic Naval Bomber 
	
	#Prewar Armoured Car
	2860
	
	#Great War Tank 

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060  
	#Early Mountain Division
	1160 1170  

	#Naval Infantry

	#Engineers
	1830

	#Mechanized Agriculture 
	5810 5800 5310 54010 5600 5700
	#Improved Construction Engineering 

	#Basic Oil Refining 


	#Improved Destroyer 
	3010 3020 3030
	#Interwar Light Cruiser 
	3110 3120
	#Early Heavy Cruiser 
	3210 3220
	#Great War Battleship 
	3410 3420
	
	#Short Range Submarine 
	3610
	#ASW 18

	#Troopships
	3810

	#Air Doctrines - ww1 techs
	27480
	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8100 8900 8910 
 }
  # ######################    
  diplomacy = 
  { relation = { tag = BOL value = 50 } 
    relation = { tag = BRA value = -10 } 
    relation = { tag = CHL value = -20 } 
    relation = { tag = COL value = 10 } 
    relation = { tag = ENG value = 50 } 
    relation = { tag = ECU value = 10 } 
    relation = { tag = ITA value = 30 } 
    relation = { tag = PAR value = 50 } 
    relation = { tag = PRU value = 20 } 
    relation = { tag = URU value = -50 } 
    relation = { tag = USA value = 75 } 
    relation = { tag = VEN value = 10 } 
    relation = { tag = U08 value = 75 } 
 }    
  # ######################    
  SpyInfo        = { country = "ARG" NumberOfSpies = 6 } 
  # #################### 
  # Argentine OBB
  landunit   = { # 1a División de Infantería
 	id       = { type = 12000 id = 1 }
 	location = 2036
 	name     = "1a División de Infantería"
	division = 
	{ id = { type = 12000 id = 2 }
   	  name       = "1a División de Infantería"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 100
	  experience = 5	
   }
 }
  landunit   = { # 2a División de Infantería
 	id       = { type = 12000 id = 3 }
 	location = 2048
 	name     = "2a División de Infantería"
	division = 
	{ id = { type = 12000 id = 4 }
   	  name       = "2a División de Infantería"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 100
	  experience = 5	
   }
 }	
  landunit   = { # 3a División de Infantería
 	id       = { type = 12000 id = 5 }
 	location = 2050
 	name     = "3a División de Infantería"
	division = 
	{ id = { type = 12000 id = 6 }
   	  name       = "3a División de Infantería"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 100
	  experience = 5	
   }
 }
  landunit   = { # 4a División de Infantería 
 	id       = { type = 12000 id = 7 }
 	location = 2038
 	name     = "4a División de Infantería"
	division = 
	{ id = { type = 12000 id = 8 }
   	  name       = "4a División de Infantería"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 100
	  experience = 5	
   }
 }
  landunit   = { # 5a División de Infantería 
 	id       = { type = 12000 id = 9 }
 	location = 2038
 	name     = "5a División de Infantería"
	division = 
	{ id = { type = 12000 id = 10 }
   	  name       = "5a División de Infantería"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 100
	  experience = 5	
   }
 }  
  navalunit  = { # Argentine Fleet
    id       = { type = 12000 id = 500 } 
    name     = "Argentine Fleet" 
    location = 2050 # Buenos Aires
    base     = 2050
    division = 
    { id = { type = 12000 id = 501 } 
      name       = "Almirante Brown" 
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0		  
	} 
    division = 
	{ id = { type = 12000 id = 502 } 
	  name       = "Independencia"   
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0		   
	} 
    division = 
	{ id = { type = 12000 id = 503 } 
	  name       = "Libertad"        
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0		  
	} 
    division = 
	{ id = { type = 12000 id = 504 } 
	  name       = "25 de Mayo"      
	  type       = light_cruiser
	  model      = 0 
	  experience = 0		  
	} 
    division = 
	{ id = { type = 12000 id = 505 } 
	  name       = "9 de Julio"       
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0		
	} 
    division = 
	{ id = { type = 12000 id = 506 } 
	  name       = "Buenos Aires"     
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0		  
	} 
    division = 
	{ id = { type = 12000 id = 507 } 
	  name       = "General Garibaldi" 
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0		
	} 
    division = 
	{ id = { type = 12000 id = 508 } 
	  name       = "General Belgrano" 
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0	
	} 
    division = 
	{ id = { type = 12000 id = 509 } 
	  name       = "General San Martin" 
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0	
	} 
    division = 
	{ id = { type = 12000 id = 510 } 
	  name       = "General Pueyrredon" 
	  type       = light_cruiser 
	  model      = 0 
	  experience = 0	
	} 
    division = 
	{ id = { type = 12000 id = 511 } 
	  name       = "1a Flotilla" 
	  type       = destroyer 
	  model      = 0 
	  experience = 0		  
	} 
    division = 
	{ id = { type = 12000 id = 512 } 
	  name       = "Flotilla del Transporte" 
	  type       = transport 
	  model      = 0 
	  experience = 0		  
	} 
 }
  # #################### 
  division_development = { # Rivadavia - Battleship
    id    = { type = 12000 id = 513 } 
    name  = "Rivadavia" 
    type  = battleship 
    model = 0 
	cost = 0.4
    date  = { year = 1914 month = december day = 15 } 
 }
  division_development = { # Moreno - Battleship
    id    = { type = 12000 id = 514 } 
    name  = "Moreno" 
    type  = battleship 
    model = 0 
	cost = 0.4
    date  = { year = 1915 month = march day = 15 } 
 } 
}
