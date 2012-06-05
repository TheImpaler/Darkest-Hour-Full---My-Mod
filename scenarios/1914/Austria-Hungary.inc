 ############################## 
 # Country definition for U09 # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
 country = { 
  tag            = U09
  ai             = "U09_1914.ai" 
  capital        = 195 
  manpower       = 500   ###more then they could must with the current mob level
  dissent        = 10 
  # Resource Reserves 
  energy         = 6480
  metal          = 3240
  rare_materials = 1620
  oil            = 500
  supplies       = 500 
  money          = 10 
  transports       = 100 
  # Others
  # ######################   
  policy = 
  { date = { year = 0 month = january day = 0 } 
    democratic        = 4 
    political_left    = 4 
    free_market       = 8 
    freedom           = 7 
    professional_army = 4 
    defense_lobby     = 5
    interventionism   = 8 
 } 
   headofstate            = {  type = 9 id = 860047  } # Franz Josef II
   headofgovernment       = {  type = 9 id = 860030  } # Leopold Berchtold
   foreignminister        = {  type = 9 id = 860022  } # Leopold Berchtold
   armamentminister       = {  type = 9 id = 860049  } # Leon von Bilinski
   ministerofsecurity     = {  type = 9 id = 860078  } # Heinold von Udynski
   #ministerofsecurity     = {  type = 9 id = ###  } # Heinold von Udynski
   ministerofintelligence = {  type = 9 id = 860039  } # Oskar Hranilovic von Czvetassin
   chiefofstaff           = {  type = 9 id = 860016 } # Franz Conrad von Hötzendorf
   chiefofarmy            = {  type = 9 id = 860003  } # Franz Conrad von Hötzendorf
   chiefofnavy            = {  type = 9 id = 860009  } # Anton Haus
   chiefofair             = {  type = 9 id = 860001  } # Emil Uzelac

	peacetime_ic_mod       = 0.8 
    wartime_ic_mod       = 0.8  
 
  # ###################### 
  
  # ###################### 
  nationalprovinces    = { 189 190 191 192 195 194 186 187 193 188 200 206 205 197 199 207 198 201 196 
                           212 211 209 213 208 202 210 214 204 215 203 277 284 278 282 280 281 276 283
						   279 285 286 296 289 295 288 287 291 300 301 241 242 238 240 237 236 239 235 
						   349 346 345 347 357 352 353 344 350 351 356 358 355 354 337 401 402 341 336 
						   292 293 343   
						   403 404 406
						 } 
  ownedprovinces       = { 189 190 191 192 195 194 186 187 193 188 200 206 205 197 199 207 198 201 196
                           212 211 209 213 208 202 210 214 204 215 203 277 284 278 282 280 281 276 283 
						   279 285 286 296 289 295 288 287 291 300 301 241 242 238 240 237 236 239 235 
						   349 346 345 347 357 352 353 344 350 351 356 358 355 354 337 401 402 341 336 
						   292 293 343 
						   404 403 406 
						 }   
  controlledprovinces  = { 189 190 191 192 195 194 186 187 193 188 200 206 205 197 199 207 198 201 196
                           212 211 209 213 208 202 210 214 204 215 203 277 284 278 282 280 281 276 283 
						   279 285 286 296 289 295 288 287 291 300 301 241 242 238 240 237 236 239 235 
						   349 346 345 347 357 352 353 344 350 351 356 358 355 354 337 401 402 341 336 
						   292 293 343 
						   404 403 406 
						 }   

  # ######################     
  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
  techapps = { 
	#Infantry Division  
	1010  1020 1030
	#CAVALRY 
	13060 13070 13080  
	#Mountain Division 
	1160 1170 1180
   	#Naval Infantry
	#Engineers
	1830
	#Supply 
	1910 1920
	
	#Tank 
	#Field Artillery 
	2290
	#Anti-Tank Artillery 
	#Static Anti-Air Artillery
	2800	
	#Anti-Air Artillery Brigade 
	#Basic Armoured Car  
	2860

	#Destroyer 
	3010 3020 3030
	#Light Cruiser 
	3110 3120 3130
	#Heavy Cruiser 
	3210 3220 3230  
	#Battleship 
	3410 3420 3430 3440
	#Battlecruiser
	3310
	#Submarine 
	3610 3620
	#Fleet Carrier 
	#Light carrier 
	#Troopships
	3810
	#ASW
	#Torpedos
	3720 3730
	
	#Interceptors 
	4500	
	#Exp.  Bomber 
	4600
	#Basic Air Transport 
	#Multirole fighter
	#strategic bomber
	#navalbomber
	#CAS
	#CAG
	#SEAPLANES
	
	#Census Tabulating Machine
	#Medicine
	5600
	#Agriculture 
	5700
	#Construction Engineering 
	5800 5080
	#MANUFACTURING
	#Basic Oil Refining 
	#Basic Decimetric Radar Warning Sites
	#Faculty of Atomic Research 

	#Landdoctrine ww1 - exp central  germany, turkey, austr, hun, bul, russia
	6500 6510 6530 6590 
	#Great War Hospital System 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8550 8900 8910 
	#Air Doctrines - ww1 techs
	27480 27490
 }
  # ###################### 
  diplomacy = 
  { relation = { tag = ENG value = -25 }
    relation = { tag = FRA value = -10 } 
    relation = { tag = RUS value = -150 }	
    relation = { tag = HUN value = 100 guaranteed = { day = 1 month = june year = 1914 } }
	relation = { tag = U08 value = 150 access = yes }	
    relation = { tag = ITA value = 75 } 
    relation = { tag = SCH value = 50 }
    relation = { tag = SER value = -200 } 
    relation = { tag = GRE value = -50 } 
    relation = { tag = USA value = 50 }
    relation = { tag = JAP value = 0 }
    relation = { tag = ROM value = -75 }
    relation = { tag = MTN value = -75 }
    relation = { tag = ALB value = -10 }
    relation = { tag = OTT value = 25 }
 } 
  # ######################    
  SpyInfo        = { country = "U09" NumberOfSpies = 6 }
  # ###################### 
  # Austro-Hungarian OBB
  landunit   = { # I.Korpskommando  - Krakau
 	id       = { type = 14000 id = 9000 }
 	location = 235 
 	name     = "I.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9001 }
   	  name       = "7.Kavallerietruppendivision"
   	  type       = cavalry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0	
   }
	division = 
	{ id = { type = 14000 id = 9002 }
   	  name       = "5.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
	  extra         = artillery 
	  brigade_model = 0	
   }
	division = 
	{ id = { type = 14000 id = 9003 }
   	  name          = "12.Infanterietruppendivision"
   	  type          = infantry 
	  model         = 3	  
   	  strength      = 60
	  experience    = 0
	  extra         = artillery 
	  brigade_model = 0
   }	
	division = 
	{ id = { type = 14000 id = 9004 }
   	  name       = "1.Armee"
   	  type       = hq
	  model      = 1	  
   	  strength   = 60
	  experience = 0	
   }
	division = 
	{ id = { type = 14000 id = 9005 }
   	  name       = "46. Landwehr Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra         = rocket_artillery
	  brigade_model = 3
	  experience = 0
   }
 }
  landunit   = { # 2.Korpskommando  - Wien
 	id       = { type = 14000 id = 9006 }
 	location = 195 
 	name     = "II.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9007 }
   	  name       = "4.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
	  extra         = artillery 
	  brigade_model = 0		
   }
	division = 
	{ id = { type = 14000 id = 9008 }
   	  name          = "49.Infanterietruppendivision"
   	  type          = infantry 
	  model         = 3	  
   	  strength      = 60
	  extra         = engineer
	  brigade_model = 0
	  experience    = 0
   }
	division = 
	{ id = { type = 14000 id = 9009 }
   	  name       = "25.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
	  extra         = artillery 
	  brigade_model = 0	  
   }
	division = 
	{ id = { type = 14000 id = 9010 }
   	  name          = "3.Kavallerietruppendivision"
   	  type          = cavalry 
	  model         = 3	  
   	  strength      = 60
	  extra         = rocket_artillery
	  brigade_model = 2
	  experience    = 0	
   }	
	division = 
	{ id = { type = 14000 id = 9011 }
   	  name       = "k.u.k. Stabswesen"
   	  type       = hq
	  model      = 1	  
   	  strength   = 60
	  experience = 0	
   }
	division = 
	{ id = { type = 14000 id = 9012 }
   	  name       = "13. Landwehr Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra         = rocket_artillery
	  brigade_model = 2
	  experience = 0
   }
 }
  landunit   = { # 3.Korpskommando  - Graz
 	id       = { type = 14000 id = 9013 }
 	location = 190 
 	name     = "III.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9014 }
   	  name       	= "6.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience    = 0
	  extra         = artillery
	  brigade_model = 0	 	  
   }
	division = 
	{ id = { type = 14000 id = 9015 }
   	  name       	= "28.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery	
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9016 }
   	  name       = "22. Landwehr Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= engineer	
	  brigade_model = 0
	  experience = 0
   }
 }
  landunit   = { # 4.Korpskommando  - Budapest
 	id       = { type = 14000 id = 9017 }
 	location = 284
 	name     = "IV.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9018 }
   	  name       = "31.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0	
   }
	division = 
	{ id = { type = 14000 id = 9019 }
   	  name       	= "32.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra     	= artillery
	  brigade_model = 0	 	  
   }
	division = 
	{ id = { type = 14000 id = 9020 }
   	  name       	= "10.Kavallerietruppendivision"
   	  type       	= cavalry 
	  model     	= 3	  
   	  strength   	= 60
	  experience 	= 0
   }	
	division = 
	{ id = { type = 14000 id = 9021 }
   	  name       = "4.Armee"
   	  type       = hq
	  model      = 1	  
   	  strength   = 60
	  experience = 0	
   }	
	division =  
	{ id = { type = 14000 id = 9022 }
   	  name       = "5. Honvéd Kavallerietruppendivision"
   	  type       = cavalry
	  model      = 2 	  
   	  strength   = 5
	  experience = 0
   }	
	division = 
	{ id = { type = 14000 id = 9023 }
   	  name       = "23. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9083 }
   	  name       = "40. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra         = artillery
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9079 }
   	  name       = "41. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0
   }
 }  
  landunit   = { # 5.Korpskommando  - Pozsony
 	id       = { type = 14000 id = 9024 }
 	location = 208 
 	name     = "V.Korpskommando"
	division = 
	{ id = { type =  14000 id = 9025 }
   	  name       = "14.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra         = artillery
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9026 }
   	  name       = "2.Kavallerietruppendivision"
   	  type       = cavalry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9027 }
   	  name       	= "33.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9028 }
   	  name       = "37. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0
   }
 }
  landunit   = { # 6.Korpskommando  - Kassa
 	id       = { type = 14000 id = 9029 }
 	location = 209
 	name     = "VI.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9030 }
   	  name       = "15.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9031 }
   	  name       	= "27.Infanterietruppendivision"
   	  type       	= infantry 
	  model         = 3	  
   	  strength   	= 60
	  experience	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9032 }
   	  name       = "39. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra         = artillery
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9038 }
   	  name       = "11. Honvéd Kavallerietruppendivision"
   	  type       = cavalry
	  model      = 2	  
   	  strength   = 5
	  experience = 0  
   }	
 }  
  landunit   = { # 7.Korpskommando  - Temesvár
 	id       = { type = 14000 id = 9033 }
 	location = 285
 	name     = "VII.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9034 }
   	  name       = "17.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9035 }
   	  name       = "1.Kavallerietruppendivision"
   	  type       = cavalry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9036 }
   	  name       	= "34.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery  
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9037 }
   	  name       = "5.Armee"
   	  type       = hq
	  model      = 1	  
   	  strength   = 60
	  experience = 0	
   }	
	division = 
	{ id = { type = 14000 id = 9039 }
   	  name       = "20. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0  
   }
 } 
  landunit   = { # 8.Korpskommando  - Prag
 	id       = { type = 14000 id = 9040 }
 	location = 207 
 	name     = "VIII.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9041 }
   	  name       = "9.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
      extra = rocket_artillery
	  brigade_model = 2
   }
	division = 
	{ id = { type = 14000 id = 9042 }
   	  name       	= "19.Infanterietruppendivision"
   	  type          = infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9043 }
   	  name       	= "21. Landwehr Infanterietruppendivision"
   	  type       	= infantry
	  model      	= 2	  
   	  strength   	= 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience 	= 0
   }
	division = 
	{ id = { type = 14000 id = 9044 }
   	  name       = "95. Landsturm Infanterietruppendivision"
   	  type       = infantry
	  model      = 1	  
   	  strength   = 5
	  extra         = artillery
	  brigade_model = 0
	  experience = 0  
   }
 }
  landunit   = # 9.Korpskommando  - Leitmeritz
  {	id       = { type = 14000 id = 9045 }
 	location = 205
 	name     = "IX.Korpskommando"
	division =  
	{ id = { type = 14000 id = 9046 }
   	  name       = "10.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
      extra = artillery
	  brigade_model = 0
   }
	division = 
	{ id = { type = 14000 id = 9047 }
   	  name       	= "29.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9048 }
   	  name       = "26. Landwehr Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra         = artillery
	  brigade_model = 0
	  experience = 0  
   }
	division = 
	{ id = { type = 14000 id = 9049 }
   	  name       = "106. Landsturm Infanterietruppendivision"
   	  type       = infantry
	  model      = 1	  
   	  strength   = 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0  
   }
 }
  landunit   = { # 10.Korpskommando - Przemysl
 	id       = { type = 14000 id = 9050 }
 	location = 239 
 	name     = "X.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9051 }
   	  name       = "2.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra         = artillery
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9052 }
   	  name       = "6.Kavallerietruppendivision"
   	  type       = cavalry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9053 }
   	  name       	= "24.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9054 }
   	  name       = "2.Armee"
   	  type       = hq
	  model      = 1	  
   	  strength   = 60
	  experience = 0	
   }	
	division = 
	{ id = { type = 14000 id = 9055 }
   	  name       = "45. Landwehr Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0  
   }
 }
  landunit   = { # 11.Korpskommando - Lember
 	id       = { type = 14000 id = 9056 }
 	location = 242 
 	name     = "XI.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9057 }
   	  name       = "11.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9058 }
   	  name       = "30.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra         = artillery
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9059 }
   	  name       = "4.Kavallerietruppendivision"
   	  type       = cavalry
	  model      = 3	  
   	  strength   = 40
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9060 }
   	  name       	= "8.Kavallerietruppendivision"
   	  type       	= cavalry
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
   }	
	division = 
	{ id = { type = 14000 id = 9061 }
   	  name       = "3.Armee"
   	  type       = hq
	  model      = 1	  
   	  strength   = 60
	  experience = 0	
   }	
	division = 
	{ id = { type = 14000 id = 9062 }
   	  name       = "43. Landwehr Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= rocket_artillery	
	  brigade_model = 2
	  experience = 0  
   }
 }  
  landunit   = { # 12.Korpskommando - Nagyszeben
 	id       = { type = 14000 id = 9063 }
 	location = 291 
 	name     = "XII.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9064 }
   	  name       = "16.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  experience = 0
      extra = rocket_artillery
	  brigade_model = 2
   }
	division = 
	{ id = { type = 14000 id = 9065 }
   	  name       	= "35.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9066 }
   	  name       = "38. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0  
   }
 }
  landunit   = { # 13.Korpskommando - Agram
 	id       = { type = 14000 id = 9067 }
 	location = 352 
 	name     = "XIII.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9068 }
   	  name       = "7.Infanterietruppendivision"
   	  type       = infantry 
	  model      = 3	  
   	  strength   = 60
	  extra      	= artillery	
	  brigade_model = 0
	  experience = 0
   }
	division = 
	{ id = { type = 14000 id = 9069 }
   	  name       	= "36.Infanterietruppendivision"
   	  type       	= infantry 
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9070 }
   	  name       = "42. Honvéd Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra         = artillery
	  brigade_model = 0
	  experience = 0  
   }
 }
  landunit   = { # 14.Korpskommando - Innsbruck
 	id       = { type = 14000 id = 9071 }
 	location = 189 
 	name     = "XIV.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9072 }
   	  name       	= "3.Infanterietruppendivision"
   	  type       	= infantry
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }
	division = 
	{ id = { type = 14000 id = 9073 }
   	  name       	= "8.Infanterietruppendivision"
   	  type       	= bergsjaeger 
	  model      	= 3	  
   	  strength   	= 75
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }
	division = 
	{ id = { type = 14000 id = 9074 }
   	  name       = "44. Landwehr Infanterietruppendivision"
   	  type       = infantry
	  model      = 2	  
   	  strength   = 5
	  extra      	= engineer	
	  brigade_model = 0
	  experience = 0 
   }
 }     
  landunit   = { # XV.Korpskommando - Sarajevo
 	id       = { type = 14000 id = 9075 }
 	location = 355
 	name     = "XV.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9076 }
   	  name       = "48.Infanterietruppendivision"
   	  type       = infantry
	  model      = 3 	  
   	  strength   = 60
	  experience = 0
	  extra      	= engineer
	  brigade_model = 0
	}
	division = 
	{ id = { type = 14000 id = 9077 }
   	  name       	= "1.Infanterietruppendivision"
   	  type       	= infantry
	  model      	= 3	  
   	  strength   	= 60
	  experience 	= 0
	  extra      	= artillery
	  brigade_model = 0	 	  
   }	
	division = 
	{ id = { type = 14000 id = 9078 }
   	  name       = "6.Armee"
   	  type       = hq
	  model      = 1	  
   	  strength   = 60
	  experience = 0	
   }	
 }
  landunit   = { # 16.Korpskommando - Ragusa
 	id       = { type = 14000 id = 9080 }
 	location = 356 
 	name     = "XVI.Korpskommando"
	division = 
	{ id = { type = 14000 id = 9081 }
   	  name       = "18.Infanterietruppendivision"
   	  type       = infantry
	  model      = 3	  
   	  strength   = 60
	  experience = 0 
	  extra      	= engineer
	  brigade_model = 0
   }
	division = 
	{ id = { type = 14000 id = 9082 }
   	  name       	= "47.Infanterietruppendivision"
   	  type       	= infantry
	  model      	= 3	  
   	  strength  	= 60
	  experience 	= 0
	  extra      	= artillery	
	  brigade_model = 0	 	  
   }	
 }

airunit = { 
	id = { type = 10100 id = 9140 } 
	name = "Luftfahrtruppen" 
	leader = 3063 # Uzelac 
	location = 195 # Vienna

	division = { id = { type = 10100 id = 9141 } 
	name = "1. Fliegerkompagnie" 
	strength = 25
	max_strength = 75 
	type = interceptor
	model = 0
	}
}
 
#########################
# Naval Units
######################### 

 navalunit = {   
     id = {  type = 10100 id = 9091  }   
     name = "1. Schwere Division"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9092  } name = "SMS Veribus Unitis" type = battleship model = 2  }  
     division = {  id = {  type = 10100 id = 9093  } name = "SMS Tegetthoff" type = battleship model = 2  }  
    } 
	
 navalunit = {   
     id = {  type = 10100 id = 9095  }   
     name = "2. Schwere Division"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9096  } name = "SMS Erzherzog Franz Ferdinand" type = battleship model = 1  }  
     division = {  id = {  type = 10100 id = 9097  } name = "SMS Radetzky" type = battleship model = 1  }  
     division = {  id = {  type = 10100 id = 9098  } name = "SMS Zrinyi" type = battleship model = 1  }   
 } 
	
 navalunit = {   
     id = {  type = 10100 id = 9099  }   
     name = "3. Schwere Division"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9100 } name = "SMS Erzherzog Ferdinand Max" type = battleship model = 1  }  
     division = {  id = {  type = 10100 id = 9101 } name = "SMS Erzherzog Friedrich" type = battleship model = 1  }  
     division = {  id = {  type = 10100 id = 9102 } name = "SMS Erzherzog Karl" type = battleship model = 1  }   
 } 
	
 navalunit = {   
     id = {  type = 10100 id = 9103  }   
     name = "4. Schwere Division"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9104  } name = "SMS Hapsburg" type = battleship model = 1  }  
     division = {  id = {  type = 10100 id = 9105  } name = "SMS Arpad" type = battleship model = 1  }  
     division = {  id = {  type = 10100 id = 9106  } name = "SMS Babenberg" type = battleship model = 1  }   
 } 
	
 navalunit = {   
     id = {  type = 10100 id = 9107  }   
     name = "5. Schwere Division"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9108  } name = "SMS Monarch" type = battleship model = 0  }  
     division = {  id = {  type = 10100 id = 9109  } name = "SMS Wien" type = battleship model = 0  }  
     division = {  id = {  type = 10100 id = 9111  } name = "SMS Budapest" type = battleship model = 0  }   
     division = {  id = {  type = 10100 id = 9147  } name = "SMS Kronprinz Erzherzog Rudolf" type = battleship model = 0  }   
     division = {  id = {  type = 10100 id = 9149  } name = "SMS Kaiser Max" type = battleship model = 0  }   
     division = {  id = {  type = 10100 id = 9151  } name = "SMS Don Juan D'Austria" type = battleship model = 0  }   
    } 
	
 navalunit = {   
     id = {  type = 10100 id = 9112  }   
     name = "1. Kreuzerdivision"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9113  } name = "SMS Sankt Georg" type = heavy_cruiser model = 1  }  
     division = {  id = {  type = 10100 id = 9114  } name = "SMS Kaiser Karl IV" type = heavy_cruiser model = 1 }  
     division = {  id = {  type = 10100 id = 9116  } name = "SMS Aspern" type = light_cruiser model = 0  }  
     division = {  id = {  type = 10100 id = 9117  } name = "SMS Szigetvár" type = light_cruiser model = 0  }  
     division = {  id = {  type = 10100 id = 9118  } name = "SMS Zenta" type = light_cruiser model = 0  } 
     division = {  id = {  type = 10100 id = 9143  } name = "SMS Schwarzenberg" type = light_cruiser model = 0  } 
     division = {  id = {  type = 10100 id = 9144  } name = "SMS Minerva" type = light_cruiser model = 0  } 
     division = {  id = {  type = 10100 id = 9145  } name = "SMS Leopard" type = light_cruiser model = 0  } 
     division = {  id = {  type = 10100 id = 9146  } name = "SMS Lacroma" type = light_cruiser model = 0  } 
    } 
	
 navalunit = {   
     id = {  type = 10100 id = 9119  }  
     name = "1. Torpedofahrzeugdivision"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9121  } name = "1. Flotille" type = destroyer model = 2  }  
     division = {  id = {  type = 10100 id = 9122   } name = "2. Flotille" type = destroyer model = 2  }   
    } 	
	
 navalunit = {   
     id = {  type = 10100 id = 9123   }  
     name = "2. Torpedofahrzeugdivision"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9124   } name = "SMS Admiral Spaun" type = light_cruiser model = 1  }  
     division = {  id = {  type = 10100 id = 9125   } name = "3. Flotille" type = destroyer model = 1  }  
     division = {  id = {  type = 10100 id = 9126   } name = "4. Flotille" type = destroyer model = 0  }  
     division = {  id = {  type = 10100 id = 9127   } name = "5. Flotille" type = destroyer model = 0  }  
     division = {  id = {  type = 10100 id = 9128   } name = "6. Flotille" type = destroyer model = 0  }  
     division = {  id = {  type = 10100 id = 9129   } name = "7. Flotille" type = destroyer model = 0  }  
     division = {  id = {  type = 10100 id = 9130   } name = "8. Flotille" type = destroyer model = 0  }  
    } 	
	
 navalunit = {   
     id = {  type = 10100 id = 9131   }  
     name = "Unterseebootsstation"  
     location = 406 # Istrien
     base = 406 # Istrien
     division = {  id = {  type = 10100 id = 9132 } name = "1. Flotille" type = submarine model = 1  }  
    }  
	
 navalunit = {   
 id = {  type = 10100 id = 9134 }  
 name = "SMS Kaiserin Elisabeth"  
 location = 1328 # Tsingtao   
 
     division = {  id = {  type = 10100 id = 9135  } name = "SMS Kaiserin Elisabeth" type = light_cruiser model = 0  }  #1890
 } 
 
 navalunit = {   
     id = {  type = 10100 id = 9136  }   
     name = "2. Kreuzerdivision"  
     location = 406 # Pola  
     base = 406 # Pola
     division = {  id = {  type = 10100 id = 9148  } name = "SMS Kaiserin Maria Theresia" type = heavy_cruiser model = 1  }  
     division = {  id = {  type = 10100 id = 9137  } name = "SMS Kaiser Franz Josef I" type = light_cruiser model = 0  }  
     division = {  id = {  type = 10100 id = 9138  } name = "SMS Panther" type = light_cruiser model = 0 } 
     division = {  id = {  type = 10100 id = 9150  } name = "SMS Donau" type = light_cruiser model = 0 } 
 } 
 
division_development = {   
	id = {  type = 10100 id = 9139  }  
	name = "SMS Szent Istvan"  
	type = battleship  
	model = 2  
	cost = 0.4  
	date = {  year = 1915 month = december day = 13  }  
}
division_development = { 
	id = { type = 10100 id = 9142 } 
	name = "SMS Novara" 
	type = light_cruiser 
	model = 2
	cost = 0.2
	date = { year = 1915 month = january day = 10 } 
}
division_development = { 
	id = {  type = 10100 id = 9115  } 
	name = "SMS Helgoland" 
	type = light_cruiser 
	model = 2
	cost = 0.2
	date = { year = 1914 month = august day = 29 }
}
division_development = {
	id = {  type = 10100 id = 9094  } 
	name = "SMS Prinz Eugen" 
	type = battleship 
	model = 2
	cost = 0.4
	date = { year = 1914 month = july day = 8 }
}   
division_development = {
	id = {  type = 10100 id = 9120  } 
	name = "SMS Saida" 
	type = light_cruiser 
	model = 2
	cost = 0.2
	date = { year = 1914 month = august day = 1 }
}  
	 
}
