country = {
    tag = U58
    #ai =

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 9
        freedom = 8
        free_market = 3
        professional_army = 4
        defense_lobby = 9
        interventionism = 8
    }	
   
   
  	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1 

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	capital = 1977

	manpower = 185

    ownedprovinces =      {
		 1977 1978
	}
    controlledprovinces = {
		 1977 1978 
	}
    nationalprovinces =   {
		1966 1965 1970 1968 1974 1972 1971 1973 1967 1975 1976 1969 1978 1980 1977 1979 1981 1982
	}

diplomacy = {
  relation = {  tag = USA value = -100 }
  relation = {  tag = MEX value = -200 }  
}

techapps = {
		1010 1020 1160 # Infantry
		13060 # Cavalry
		3010 3110 # Naval
		1910 # Aircraft
		5800 #Construction
		5310 #Census tabulating machine
		5600 # medicine up to 1910
		5700 # Agriculture up to 1900
		5810 # Finance up to 1902
		6500 6510 6530 # Land Doctrine
		8010 8050 # Naval Doctrine
		27480 # Air Doctrine
		}
	
	transports = 30
	
	
	
landunit = { 
        id = { type = 24001 id = 1 } 
        name = "La Division del Norte" 
        #leader = XXXXX # Villa
        location = 1978
        division = { 
            id = { type = 24001 id = 2 } 
            #name =
            type = cavalry
			model = 1 
			experience = 20
        	}
		division = { 
			id = { type = 24001 id = 3 } 
			#name = 
			type = infantry
			model = 2 
			experience = 20
			extra = artillery
        	} 
		division = { 
			id = { type = 24001 id = 4 } 
			#name = 
			type = infantry
			model = 2 
			experience = 20
        	}		
   	} 

}
