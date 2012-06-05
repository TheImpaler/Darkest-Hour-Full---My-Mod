 
 ############################## 
 # Country definition for ROM # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = ROM 
 ai             = "ROM_1914.ai"
  capital        = 316 
  manpower        = 100 
  # Resource Reserves 
energy                 = 1020
metal                  = 510
rare_materials         = 255
  oil          = 500 
  supplies        = 500 
  money         = 15 
  transports       = 100 
  diplomacy = 
  {  relation = {  tag = BUL value = -15  } 
   relation = {  tag = ENG value = 50  } 
   relation = {  tag = FRA value = 50  } 
   relation = {  tag = U08 value = 50  } 
   relation = { tag = U09 value = -50 }
   relation = 
   {  tag    = GRE 
    value   = 100 
    guaranteed = { day = 1 month = june year = 1914 }
    } 
   relation = {  tag = ITA value = 50  } 
   relation = {  tag = RUS value = 50  } 
   relation = 
   {  tag    = OTT value   = -30 } 
   } 
  SpyInfo        = {  country = "ROM" NumberOfSpies = 5  } 
  nationalprovinces   = {  316 308 311 315 285 309 310 297 314 312 
 621 286 303 296 307 306 313 298 305 302 292 301 300 291 295 289 293 287 288 304 
   } 
  ownedprovinces     = {  307 316 308 311 315 309 310 297  
 312 314 313 298 299 
   } 
  controlledprovinces  = {  307 316 308 311 315 309 310 297   
 312 314 313 298  299 
   } 
  # Eastern Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = {
	#Early Fighter  
	4500 4510
	#Early Bomber 
	4600 4610
	#Basic Naval Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#Basic Armoured Car  

	#Tankette 

	#Great War Heavy Field Artillery 
	2290  
	#Early Anti-Tank Artillery 

	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 
	#Medicine
	5600
	#Naval Infantry

	#Engineers
	1830  
	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160  1170 

	#Modern Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Improved Destroyer 
	3010 3020 3030
	#Short Range Submarine 
	3610 
	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8120
	#Air Doctrines - ww1 techs

	#ASW 18

	#Troopships
	3810
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 6 
   freedom      = 4 
   free_market    = 4 
   professional_army = 5 
   defense_lobby     = 5 
   interventionism  = 6 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
	
   headofstate            = {  type = 9 id = 110160  } # Ferdinand I
   headofgovernment       = {  type = 9 id = 110196  } # Ion I. C. Bratianu
   foreignminister        = {  type = 9 id = 110136  } # Emanoil Porumbaru
   armamentminister       = {  type = 9 id = 110164  } # Emil Costinescu (not validated)
   ministerofsecurity     = {  type = 9 id = 110185  } # Vasile G. Mortun
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 110127  } # Vasile Zottu
   chiefofarmy            = {  type = 9 id = 110120  } # Ferdinand I
   #chiefofnavy            = {  type = 9 id = ###  } # Eustatiu Sebastian
   #chiefofair             = {  type = 9 id = 220010  } # ?
	
   
landunit = { 
        id = { type = 16111 id = 1 } 
        name = "I Corps" 
        location = 315 # Craiova 
        division = { 
            	id = { type = 16111 id = 2 } 
            	name = "Divizia 1 Infanterie" 
            	strength = 100 
            	type = infantry
		model = 3 
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 3 } 
            	name = "Divizia 2 Infanterie" 
            	strength = 100 
            	type = infantry
		model = 2  
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 4 } 
            	name = "Brigada 1 Cavalerie" 
            	strength = 50
	max_strength = 50 
            	type = cavalry 
		model = 3
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 5 } 
        name = "II Corps" 
        location = 316 # Bucuresti 
        division = { 
            	id = { type = 16111 id = 6 } 
            	name = "Divizia 3 Infanterie" 
            	strength = 100 
            	type = infantry 
		model = 3 
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 7 } 
            	name = "Divizia 4 Infanterie" 
            	strength = 100 
            	type = infantry
		model = 3 
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 8 } 
            	name = "Divizia 9 Infanterie" 
            	strength = 100 
            	type = infantry 
		model = 3 
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 9 } 
            	name = "Brigada 2 /5 Cavalerie" 
            	strength = 100 
            	type = cavalry 
		model = 3 
		experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 10 } 
        name = "III Corps" 
        location = 310 # Constanta 
        division = { 
            	id = { type = 16111 id = 11 } 
            	name = "Divizia 5 Infanterie" 
            	strength = 100 
            	type = infantry
		model = 3  
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 12 } 
            	name = "Divizia 6 Infanterie" 
            	strength = 100 
            	type = infantry
		model = 3  
		experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 13 } 
        name = "IV Corps" 
        location = 297 # Iasi 
        division = { 
            	id = { type = 16111 id = 14 } 
            	name = "Divizia 7 Infanterie" 
            	strength = 100 
            	type = infantry 
		model = 3 
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 15 } 
            	name = "Divizia 8 Infanterie" 
            	strength = 100 
            	type = infantry
		model = 3  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 16 } 
        name = "Divizia 10 Infanterie" 
        location = 316 # Bucuresti 
        division = { 
            	id = { type = 16111 id = 17 } 
            	name = "Divizia 10 Infanterie" 
            	strength = 100 
            	type = infantry
		model = 3 
		experience = 0 
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 18 } 
        name = "Divizia 1 Cavalerie" 
        location = 316 # Bucuresti 
        division = { 
            	id = { type = 16111 id = 19 } 
            	name = "Divizia 1 Cavalerie" 
            	strength = 100 
            	type = cavalry 
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 20 } 
        name = "Divizia 2 Cavalerie" 
        location = 310 # Constanta 
        division = { 
            	id = { type = 16111 id = 21 } 
            	name = "Divizia 2 Cavalerie" 
            	strength = 100 
            	type = cavalry 
		model = 3 
		experience = 2
        	} 
    	} 

airunit = { 
	id = { type = 16111 id = 100 } 
	name = "Corp al Aeronautilor Permanenti" 
	location = 316
	base = 316

	division = { 
		id = { type = 16111 id = 101 } 
		name = "Grup 1" 
		strength = 30 
		type = tactical_bomber 
		model = 1 
		}
	}

navalunit = { 
        id = { type = 16111 id = 500 } 
        name = "Maritime Division" 
        location = 310 # Constanta
        base = 310 # Constanta

        division = { id = { type = 16111 id = 501 } name = "Elisabeta" type = light_cruiser model = 0 } 
        division = { id = { type = 16111 id = 502 } name = "1st Flotilla" type = destroyer model = 0 } 
    	} 



}
