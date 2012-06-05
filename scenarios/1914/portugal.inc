 
 ############################## 
 # Country definition for POR # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = POR 
 ai             = "POR_1914.ai"
  # Resource Reserves 
energy                 = 1020
metal                  = 510
rare_materials         = 255
  oil          = 500 
  supplies        = 500 
  money         = 15 
  capital        = 476 
  manpower        = 90 
  transports       = 250 
  escorts        = 7 
  # Azores 
  diplomacy = 
  {  relation = {  tag = BEL value = -20  } 
   relation = {  tag = BRA value = 75  } 
   relation = {  tag = ENG value = 100  } 
   relation = {  tag = U08 value = 75  } 
   relation = {  tag = ITA value = 65  } 
   relation = {  tag = SAF value = 125 access = yes  } 
   relation = {  tag = SPR value = -50  } 
   } 
  SpyInfo        = {  country = "POR" NumberOfSpies = 5  } 
  # Cabinda 
  nationalprovinces   = {  481 476 479 477 478 482 480 
  
   } 
  ownedprovinces     = {  481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 
 480 482 
 994 1513 
   } 
  # Cabinda 
  controlledprovinces  = {  481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 
 480 482 
 994 1513 
   } 
   claimedprovinces       = {  995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 994 1513  } #Colonial Empire
   
  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160   

	#Tankette 

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 
	#Medicine
	5600
	#Naval Infantry

	#Engineers
	1830
	#Improved Destroyer 
	3010 3020 3030
	#Early Light Cruiser 
	3110 3120 
	#Short Range Submarine 
	3610
	#Early Fighter  

	#Interwar Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 81300 81310
	#Air Doctrines - ww1 techs
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 3 
   political_left  = 4 
   freedom      = 4 
   free_market    = 5 
   professional_army = 6 
   defense_lobby     = 5 
   interventionism  = 3 
   } 
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  

   headofstate            = {  type = 9 id = 20105  } # Manuel de Arriaga
   headofgovernment       = {  type = 9 id = 20124  } # Bernardino Machado
   #foreignminister        = {  type = 9 id = ###  } # Alfredo Augusto Freire de Andrade
   #armamentminister       = {  type = 9 id = ###  } # António dos Santos Lucas
   #ministerofsecurity     = {  type = 9 id = ###  } # Rodrigo José Rodrigues # not validated
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 20077  } # João José Sinel de Cordes
   chiefofarmy            = {  type = 9 id = 20069  } # João José Sinel de Cordes
   #chiefofnavy            = {  type = 9 id = ###  } # Augusto Eduardo Neuparth # minister of navy
   #chiefofair             = {  type = 9 id = ### } # ?	
   
  landunit = 
  {  id    = {  type = 19600 id = 1000  } 
   location = 476 
   name   = "Exército do Portugal" 
   Division = 
   {  id    = {  type = 19600 id = 1001  } 
    name   = "1o Batalhão de Infantaria" 
    type   = infantry 
	model = 3
    extra  = artillery 
	brigade_model = 0
    strength = 100 
	experience = 5
    } 
   Division = 
   {  id    = {  type = 19600 id = 1002  } 
    name   = "2o Batalhão de Infantaria" 
    type   = infantry
	model = 2	
    strength = 100 
	experience = 0
    } 
   } 
  navalunit = 
  {  id    = {  type = 19600 id = 1003  } 
   location = 476 
   base   = 476 
   name   = "Transporte de Navio do Portugal" 
   Division = 
   {  id  = {  type = 19600 id = 1004  } 
    name = "1o Flotilha de Navio de Transporte" 
    type = transport 
    } 
   } 
  navalunit = 
  {  id    = {  type = 19600 id = 1005  } 
   location = 963 
   base   = 963 
   name   = "Transporte de Navio de Colonias" 
   Division = 
   {  id  = {  type = 19600 id = 1006  } 
    name = "2o Flotilha de Navio de Transporte" 
    type = transport 
    } 
   Division = 
   {  id  = {  type = 19600 id = 1007  } 
    name = "Douro Flotilha" 
    type = destroyer 
    model = 1 
    } 
   } 
  navalunit = 
  {  id    = {  type = 19600 id = 9302  } 
   name   = "Marinha do Portugal" 
   location = 476 
   base   = 476 
   division = {
      id = { type = 19600 id = 1008 }
      name = "Vasco da Gama"
      type = heavy_cruiser
      model = 1
   }
   Division = 
   {  id    = {  type = 19600 id = 9303  } 
    name   = "Viana do Castello Flotilha" 
    type   = destroyer 
    model  = 0 
    strength = 100 
    } 
   Division = 
   {  id    = {  type = 19600 id = 9304  } 
    name   = "1o Flotilha de Submarino" 
    type   = submarine 
    model  = 1 
    strength = 100 
    } 
   } 
  airunit = 
  {  id    = {  type = 19600 id = 9300  } 
   name   = "Aéreo do Portugal" 
   location = 476 # Lissabon 
   base   = 476 
   Division = 
   {  id    = {  type = 19600 id = 9301  } 
    name   = "1o Avião de Bombardeiro Tático" 
    type   = tactical_bomber 
    strength = 100 
    model  = 0 
    } 
   } 
  } 
 
