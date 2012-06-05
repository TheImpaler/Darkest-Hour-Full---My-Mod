 
 ######################################## 
 # Country definition for ETH by Cardus # 
 ######################################## 

 country = 
 {  tag          = ETH 
 ai             = "ETH_1914.ai"
  # Resource Reserves 
energy                 = 360
metal                  = 180
rare_materials         = 90
  oil          = 500 
  supplies        = 500 
  money         = 10 
  capital        = 825
  flag_ext = _14 
  manpower        = 20 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 3 
   political_left  = 4 
      free_market = 3
      freedom      = 3
   professional_army = 4 
   defense_lobby     = 8 
   interventionism  = 3 
   } 
  	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1 
	
   headofstate            = {  type = 9 id = 245075  } # Iyasu V
   headofgovernment       = {  type = 9 id = 245077  } # Mikael of Wollo 
   foreignminister        = {  type = 9 id = 245072  } # Dejazmach Beyene Yimer
   armamentminister       = {  type = 9 id = 245076  } # Habte Giyorgis Dinegde
   ministerofsecurity     = {  type = 9 id = 245079  } # Habte Giyorgis Dinegde (or "Afa-Negus" = Justice minister)
   ministerofintelligence = {  type = 9 id = 245078 } # Habte Giyorgis
   chiefofstaff           = {  type = 9 id = 245068  } # Habte Giyorgis as "Fitawrari"
   chiefofarmy            = {  type = 9 id = 245065  } # Habte Giyorgis as "Fitawrari"
   chiefofnavy            = {  type = 9 id = 245081  } # est. 1955 Habte Giyorgis
   chiefofair             = {  type = 9 id = 245080  } # est. 1929 Habte Giyorgis
  
	peacetime_ic_mod       = 1 
	wartime_ic_mod       = 1 
   
  nationalprovinces   = {  820 819 821 822 823 818 829 825 830 826 831 828 827 815 816 817 824  } 
  ownedprovinces     = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 
  controlledprovinces  = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
  techapps        = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060  
	#Early Mountain Division
	1160  1170 

	#Early Agriculture
	5700 
	#Landdoctrine ww1 - rest
	6500 6510  
	#Air Doctrines - ww1 techs

  } 
  diplomacy = 
  {  relation = {  tag = ENG value = 50  } 
   relation = {  tag = FRA value = 25  } 
   relation = {  tag = ITA value = -200  } 
   relation = {  tag = JAP value = 35  } 
     relation = { tag = OTT value = 75 }
     relation = { tag = U08 value = 50 }
   } 
  SpyInfo        = {  country = "ETH" NumberOfSpies = 2  } 
  #################################################################################### 
 #OOB Ethiopian Troops - Second Italo Abyssinian War 1935-1936 by Cardus 
 # ref. http://en.wikipedia.org/wiki/Ethiopian_Order_of_Battle_Second_Italo-Abyssinian_War 
 # ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia 
 # ref http://en.wikipedia.org/wiki/Ethiopian_Air_Force #Early_years_.281929-1935.29 
 ##################################################################################### 
  
  landunit = 
  {  id    = {  type = 31000 id = 1  } 
   location = 825 
   name   = "Imperial Army" 
   Division = 
   {  id    = {  type = 31000 id = 2  } 
    name   = "Imperial Guard Kebur Zabangna" 
    type   = infantry 
    strength = 70 
    model  = 2 
	experience = 5
    } 
  Division = 
   {  id    = {  type = 31000 id = 3  } 
    name   = "Addis Ababa Garrison" 
    type   = militia 
    strength = 70 
    model  = 0 
	experience = 0
    } 
   } 

  
   } 
 