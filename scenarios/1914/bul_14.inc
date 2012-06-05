 
 ############################## 
 # Country definition for BUL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = BUL 
 ai             = "BUL_1914.ai"
  # Resource Reserves 
energy                 = 1500
metal                  = 750
rare_materials         = 375
  oil          = 500 
  supplies        = 500 
  money         = 50 
  manpower        = 0 
  capital        = 321 

  transports       = 110 
  escorts        = 4 
  diplomacy = 
  {  relation = {  tag = ENG value = 20  } 
   relation = {  tag = FRA value = 30  } 
   relation = {  tag = U08 value = 150  } 
   relation = {  tag = U09 value = 100  } 
   relation = {  tag = GRE value = -150  } 
   relation = {  tag = ROM value = -25  } 
   relation = {  tag = RUS value = 75  } 
   relation = {  tag = OTT value = -50  } 
   relation = {  tag = SER value = -150  }
   relation = {  tag = MTN value = -50 }
   relation = {  tag = ALB value = 200 }
   } 
  SpyInfo        = {  country = "BUL" NumberOfSpies = 6  } 

  nationalprovinces   = {  318 323 325 324 321 320 319 326 364 370 317 331 307 370 322 
 #Macedonia and Greece 
 365 366 333 328 363 
  } 
  ownedprovinces     = {  318 323 325 324 321 320 319 326 317 322 370 363  } 
  controlledprovinces  = {  318 323 325 324 321 320 319 326 317 322 370 363  } 
  claimedprovinces  = {  334 385 } 
  # Eastern Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
  techapps               = { 
	#Interwar Fighter  

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#Basic Armoured Car  
	
	#Great War Heavy Field Artillery 

	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 13080
	#Early Mountain Division
	1160  1170 
	#Naval Infantry

	#Engineers
	
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 
	#Medicine
	5600 
	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - exp central germany, turkey, austr, hun, bul, russia
	6500 6510 6530 6590 
	#Naval Doctrine
	8010 8020 8040 8050 8060 8070 8080 8100 8110 81300
	#Air Doctrines - ww1 techs
}
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 4 
   free_market    = 6 
   freedom      = 5 
   professional_army = 5 
   defense_lobby     = 9 
   interventionism  = 9 
   } 
   
   headofstate            = {  type = 9 id = 95205  } # Ferdinand I
   headofgovernment       = {  type = 9 id = 95196  } # Vasil Radoslavov
   foreignminister        = {  type = 9 id = 95185  } # Vasil Radoslavov
   armamentminister       = {  type = 9 id = 95218  } # Dimitar Tonchev
   ministerofsecurity     = {  type = 9 id = 95233  } # Vasil Radoslavov
   ministerofintelligence = {  type = 9 id = 95202 } # Atanas Vatev
   chiefofstaff           = {  type = 9 id = 95239  } # Pravoslav Tenev
   chiefofarmy            = {  type = 9 id = 95139  } # Kliment Boyadzhiev
   chiefofnavy            = {  type = 9 id = 95151  } # Konstantin Kirkov
   chiefofair             = {  type = 9 id = 95138  } # Vasil Zlatarov
   
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
landunit =
  { id = { type = 19000 id = 1 }
   location = 321
     name = "1-va Armija"
    # Commander : Lt.Gen. Kliment Boyadzhiev
    # Chief of the General Staff: Col. Stefan Azmanov
    # Chief of the Command of the Rear: Lt.Col. Atanas Kaishev
    # Chief of Staff of the Command of the Rear: MG. Ilija Dimitriev
        division = {
        id = { type = 19000 id = 2 }
        name = "6-ta 'Bdinska' Pehotna Divizija"
        strength = 100
        type = infantry
        extra = artillery
	experience = 20
        }
        division = {
        id = { type = 19000 id = 3 }
        name = "8-ta 'Tundzhavska' Pehotna Divizija"
        strength = 100
        type = infantry
        model = 2
        extra = artillery
	experience = 20
        }
        division = {
        id = { type = 19000 id = 4 }
        name = "9-ta 'Plevenska' Pehotna Divizija"
        strength = 100
        type = infantry
        model = 2
	experience = 15
        }
        division = {
        id = { type = 19000 id = 5 }
        name = "1-ta 'Sofiyska' Pehotna Divizija"
        strength = 100
        type = infantry
        model = 2
        extra = artillery
	experience = 15
        }
       division =
       { id = { type = 19000 id = 6 }
        name = "1st Cavalry Brigade"
        strength = 30
        type = cavalry
        model = 2
        extra = artillery
        brigade_model = 0
       }
       division =
       { id = { type = 19000 id = 7 }
        name = "Border Guards"
        strength = 80
        type = militia
       }
       division =
       { id = { type = 19000 id = 8 }
        name = "Garrisons - Lom"
        strength = 80
        type = garrison
       }
        division =
       { id = { type = 19000 id = 9 }
        name = "Garrisons - Orahovo"
        strength = 80
        type = garrison
       }
    }

   landunit = {
   id = { type = 19000 id = 10 }
   location = 318
   name = "2-ra Armija"
    # Commander:Lt.Gen. Georgi Todorov
    # Chief of the General Staff:Col. Ivan Rusev
    # Chief of the Operation Section:Lt.Col. Ivan Valkov
    # Chief of the Artillery:Col. Stefan Bogdanov
    # Chief of the Engineer Corps:Col. Simeon Dobrevski
    # Chief of the Field Medical Unit :Med.Col. Dimo Kyoybashev
    # Chief of the Command of the Rear :MG. Grigor Grancharov
        division = {
        id = { type = 19000 id = 11 }
        name = "3-a 'Balkanska' Pehotna Divizija"
        strength = 100
        type = infantry
	experience = 10
        }
        Division = {
        id = { type = 19000 id = 12 }
        name = "7-ma 'Rilska' Pekhotna Divizija"
        strength = 100
        type = infantry
        model = 2
	experience = 10
        }
       division =
       { id = { type = 19000 id = 13 }
        name = "1-va Konna Divizija"
        strength = 100
        type = cavalry
        model = 2
	experience = 20
       }
       division =
       { id = { type = 19000 id = 31 }
        name = "Border Guards"
        strength = 70
        type = militia
       }
    }

    landunit =
  { id = { type = 19000 id = 14 }
   location = 324
   name = "3-ta Armija"
    # Commander:Lt.Gen. Stefan Toshev
    # Chief of the General Staff :Col. Stefan Popov
    # Chief of the Operations Section :Lt.Col. Yordan Venedikov
    # Chief of the Artillery :Col. Vasil Raynov
    # Chief of the Engineer :
    # Chief of the Command of the Rear :MG. Todor Kantardzhiev
       Division =
       { id = { type = 19000 id = 15 }
        name = "4-ta 'Preslavska' Pekhotna Divizija"
        strength = 100
        type = infantry
        model = 2
        extra = artillery
	experience = 10
        }
       Division =
       { id = { type = 19000 id = 16 }
        name = "3rd Cavalry Brigade"
        strength = 30
        type = cavalry
        model = 2
        extra = artillery
        }
       division =
       { id = { type = 19000 id = 17 }
        name = "Border Guards"
        strength = 60
        type = militia
       }
       Division =
       { id = { type = 19000 id = 19 }
        name = "Fortress-Shumen"
        strength = 20
        type = garrison
        model = 1
        }
       Division =
       { id = { type = 19000 id = 21 }
        name = "Fortress-Razgrad"
        strength = 20
        type = garrison
        model = 1
        }
    }

    landunit =
    { id = { type = 19000 id = 23 }
    location = 319
    name = "Defence of the Greek Border"
     Division =
       { id = { type = 19000 id = 24 }
        name = "2-ta 'Trakiyska' Pekhotna Divizija"
        strength = 100
        type = infantry
        model = 1
	experience = 10
        }
       division =
       { id = { type = 19000 id = 25 }
        name = "Border Guards"
        strength = 50
        type = militia
       }
        Division =
       { id = { type = 19000 id = 26 }
        name = "11-ta 'Makedonska' Pekhotna Divizija"
        strength = 100
        type = infantry
        model = 1
        }
    }

     landunit =
    { id = { type = 19000 id = 27 }
    location = 363
    name = "Defence of the coast of the Aegean Sea"
     Division =
       { id = { type = 19000 id = 28 }
        name = "10-ta 'Belomorska' Pekhotna Divizija"
        strength = 100
        type = infantry
        model = 1
	experience = 5
        }
       division =
       { id = { type = 19000 id = 29 }
        name = "Border Guards"
        strength = 70
        type = militia
       }
    }
     landunit =
    { id = { type = 19000 id = 39 }
    location = 370
    name = "Dedeagach Garrison"
        Division =
       { id = { type = 19000 id = 30 }
        name = "Dedeagach Garrison"
        strength = 100
        type = garrison
        model = 1
	experience = 5
        }
    }
     landunit =
    { id = { type = 19000 id = 35 }
    location = 317
    name = "Ruse Garrison"
       Division =
       { id = { type = 19000 id = 36 }
        name = "Fortress-Ruse"
        strength = 70
        type = garrison
        model = 1
        }
    }
     landunit =
    { id = { type = 19000 id = 37 }
    location = 326
       Division =
       { id = { type = 19000 id = 20 }
        name = "Fortress-Varna"
        strength = 70
        type = garrison
        model = 1
        }
    }
     landunit =
    { id = { type = 19000 id = 38 }
    location = 325
       Division =
       { id = { type = 19000 id = 22 }
        name = "Garrison-Burgas"
        strength = 30
        type = garrison
        model = 1
        }
    }
} 
 
