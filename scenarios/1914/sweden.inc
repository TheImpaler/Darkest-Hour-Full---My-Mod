############################## 
 # Country definition for SWE # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
 
 country = 
 {  tag          = SWE 
 ai             = "SWE_1914.ai"
  # Resource Reserves 
energy                 = 1320
metal                  = 660
rare_materials         = 330 
  oil          = 500 
  supplies        = 500 
  money         = 20 
  manpower        = 115 
  transports       = 100 
  capital        = 2159 
  diplomacy = 
  {  relation = {  tag = BEL value = 100  } 
   relation = {  tag = DEN value = 75  } 
   relation = {  tag = ENG value = 80  } 
   relation = {  tag = U08 value = 100  } 
   relation = {  tag = HOL value = 100  } 
   relation = {  tag = LUX value = 100  } 
   relation = {  tag = NOR value = 150  } 
   relation = {  tag = PER value = 50  } 
   relation = {  tag = USA value = 75  } 
   relation = {  tag = RUS value = 25  } 
   } 
  SpyInfo        = {  country = "SWE" NumberOfSpies = 5  } 
  nationalprovinces   = {   2167 2166 2165 2163 2164 2162 2161 2160 2159 2157 2154 2153 2155 2152 2156 526 2158  } 
  ownedprovinces     = {   2167 2166  2165 2163 2164 2162 2161 2160  2159 2157 2154 2153 2155 2152 2156 2158  } 
  controlledprovinces  = {   2167 2166  2165 2163 2164 2162 2161 2160  2159 2157 2154 2153 2155 2152 2156 2158  } 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  

	#Early Bomber 

	#Basic Naval Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#Naval Infantry

	#Engineers
	1830
	#Basic Armoured Car  

	#Great War Tank 

	#Great War Heavy Field Artillery 
	2290  
	#Early Heavy Cruiser 
	3210 3220 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Great War Infantry Division  
	1010  1020 
	#Great War Cavalry Division  

	#Early Mountain Division 
	1160  1170 1180 
	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Improved Destroyer 
	3010 3020 3030
	#Interwar Light Cruiser 
	3110 3120
	#Short Range Submarine 
	3610
	#Great War Battlecruiser  
	3310 3320 
	#Great War Battleship 
	3410 3420  
	#Early Battlecruiser
	3310
	#Faculty of Atomic Research 

	#ASW 18
	#Medicine
	5600
	#Troopships
	3810

	#Air Doctrines - ww1 techs

	#Naval Doctrines 
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120
	#Landdoctrine ww1 - rest
	6500 6510 6530 
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 10 
   political_left  = 10 
   freedom      = 6 
   free_market    = 7 
   professional_army = 4 
   defense_lobby     = 5 
   interventionism  = 4 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
   headofstate            = {  type = 9 id = 40157  } # Gustaf V
   headofgovernment       = {  type = 9 id = 40138  } # Hjalmar Hammarskj�ld
   foreignminister        = {  type = 9 id = 40120  } # Knut Agathon Wallenberg
   armamentminister       = {  type = 9 id = 40166  } # Axel Vennersten
   ministerofsecurity     = {  type = 9 id = 40186  } # Berndt Hasselrot
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 40106  } # Knut Gillis Bildt
   chiefofarmy            = {  type = 9 id = 40094  } # Gustaf V
   chiefofnavy            = {  type = 9 id = 40102  } # Ludvig Sidner
   #chiefofair             = {  type = 9 id = ###  } # ?
   
	
 landunit = { 
        id = { type = 12111 id = 1 } 
        name = "1:a Arm�f�rdelningen" 
        location = 2153 
        division = { 
            	id = { type = 12111 id = 2 } 
            	name = "1:a Arm�f�rdelningen" 
            	strength = 100 
            	type = infantry
		model = 3 
		extra = super_heavy_armor
		brigade_model = 0
		experience = 10
        	} 
    	} 
landunit = { 
        id = { type = 12111 id = 3 } 
        name = "2:a Arm�f�rdelningen" 
        location = 2155 
        division = { 
            	id = { type = 12111 id = 4 } 
            	name = "2:a Arm�f�rdelningen" 
            	strength = 100 
            	type = infantry
		model = 3  
		experience = 10
        	} 
   	 } 
landunit = { 
        id = { type = 12111 id = 5 } 
        name = "3:e Arm�f�rdelningen" 
        location = 2162 
        division = { 
            	id = { type = 12111 id = 6 } 
            	name = "3:e Arm�f�rdelningen" 
            	strength = 100 
            	type = infantry
		model = 3  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 12111 id = 7 } 
        name = "4:e Arm�f�rdelningen" 
        location = 2159 
        division = { 
            	id = { type = 12111 id = 8 } 
            	name = "4:e Arm�f�rdelningen" 
            	strength = 100 
            	type = infantry
		model = 3  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 12111 id = 9 } 
        name = "5:e Arm�f�rdelningen" 
        location = 2159 
        division = { 
            	id = { type = 12111 id = 10 } 
            	name = "5:e Arm�f�rdelningen" 
            	strength = 100 
            	type = infantry 
		model = 3 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 12111 id = 11 } 
        name = "6:e Arm�f�rdelningen" 
        location = 2154 
        division = { 
            id = { type = 12111 id = 12 } 
            name = "6:e Arm�f�rdelningen" 
            strength = 100 
            type = infantry
		model = 3  
		experience = 0
        	} 
    	}
landunit = { 
        id = { type = 12111 id = 13 } 
        name = "Bodens Trupper" 
        location = 2166
        division = { 
            	id = { type = 12111 id = 14 } 
            	name = "Bodens Trupper" 
            	strength = 25
		max_strength = 25 
            	type = infantry
		model = 3  
		experience = 0
        	} 
    	}
navalunit = { 
        id = { type = 12111 id = 500 } 
        name = "Svenska Flottan" 
        location = 2155 # Karlskrona
        base = 2155 # Karlskrona
 
        division = { id = { type = 12111 id = 501 } name = "Svea" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12111 id = 502 } name = "G�ta" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12111 id = 503 } name = "Thule" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12111 id = 504 } name = "Oden" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12111 id = 505 } name = "Thor" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12111 id = 506 } name = "Niord" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12111 id = 507 } name = "Dristigheten" type = heavy_cruiser model = 1 } 
        division = { id = { type = 12111 id = 508 } name = "�ran" type = heavy_cruiser model = 1 } 
        division = { id = { type = 12111 id = 509 } name = "Wasa" type = heavy_cruiser model = 1 } 
        division = { id = { type = 12111 id = 510 } name = "Tapperheten" type = heavy_cruiser model = 1 } 
        division = { id = { type = 12111 id = 511 } name = "Manligheten" type = heavy_cruiser model = 1 } 
        division = { id = { type = 12111 id = 512 } name = "Oscar II" type = heavy_cruiser model = 1 } 
        division = { id = { type = 12111 id = 513 } name = "Fylgia" type = light_cruiser model = 1 } 
        division = { id = { type = 12111 id = 514 } name = "1:a Jagarflottiljen" type = destroyer model = 1 } 
        division = { id = { type = 12111 id = 515 } name = "2:a Jagarflottiljen" type = destroyer model = 0 } 
        division = { id = { type = 12111 id = 516 } name = "3:e Jagarflottiljen" type = destroyer model = 0 } 
        division = { id = { type = 12111 id = 517 } name = "4:e Jagarflottiljen" type = destroyer model = 0 } 
        division = { id = { type = 12111 id = 518 } name = "Transportflottiljen" type = transport model = 0 } 
    	} 
    
navalunit = { 
        id = { type = 12111 id = 519 } 
        name = "Ub�tsflottiljen" 
        location = 2159 # Stockholm
        base = 2159 # Stockholm
 
        division = { id = { type = 12111 id = 520 } name = "1:a Ub�tsflottiljen" type = submarine model = 1 } 
    	} 
    
division_development = { 
        id = { type = 12111 id = 521 } 
        name = "Sverige" 
        type = battleship 
        model = 0 
		cost = 0.4
        date = { year = 1917 month = may day = 10 } 
    	} 

}
