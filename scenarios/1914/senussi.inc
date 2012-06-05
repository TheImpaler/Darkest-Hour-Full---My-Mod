############################## 
 # Country definition for LBY # 
 ############################## 
  
 country = 
 {   
	tag		= LBY 
	name 	= LBY14
	flag_ext = _senussi
	
	# Resource Reserves 
	energy			= 180
	metal			= 90
	rare_materials	= 45
	oil				= 200 
	supplies		= 200 
	money			= 10 
	manpower		= 5 
	dissent			= 20
	capital			= 770 
	
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 3 
   political_left  = 4 
   free_market    = 8 
   freedom      = 7 
   professional_army = 2 
   defense_lobby     = 5 
   interventionism  = 2 
    }
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
	
	
   headofstate            = {  type = 9 id = 495031  } # Ahmed Sharif es Senussi
   headofgovernment       = {  type = 9 id = 495032  } # Ahmed Sharif es Senussi 
   foreignminister        = {  type = 9 id = 495033  } # Ahmed Sharif es Senussi 
   armamentminister       = {  type = 9 id = 495034  } # Ahmed Sharif es Senussi 
   ministerofsecurity     = {  type = 9 id = 495035  } # Ahmed Sharif es Senussi 
   ministerofintelligence = {  type = 9 id = 495036  } # Omar Mukhtar
   chiefofstaff           = {  type = 9 id = 495037  } # Ahmed Sharif es Senussi 
   chiefofarmy            = {  type = 9 id = 495038  } # Ahmed Sharif es Senussi 
   #chiefofnavy            = {  type = 9 id = ###  } # ? 
   #chiefofair             = {  type = 9 id = ###  } # ?
	
  nationalprovinces   = {  761 753 769 770 771 765 766 760 768 762 773 754 755 756 757 751 750 752 
 774 2513 758 759 763 764 775 767 772 776 777 781 782 779 801 802 804 922 741 742 744 740 745 746 747 748 749 780 778 799 785    } 
  ownedprovinces     = { 754 774 777 773 775 770 } 
  controlledprovinces  = { 754 774 777 773 775 770 } 
diplomacy = {
relation = { tag = OTT value = 175 }
relation = { tag = ITA value = -200 }
}
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160  
	#Early Agriculture
	#Landdoctrine ww1 - rest
	6500 6510   
	#Air Doctrines - ww1 techs
	#Engineers
  } 
  diplomacy = 
  {  
    } 
  SpyInfo        = {   country = "LBY" NumberOfSpies = 1   } 
 # landunit = 

landunit = {
 	id = { type = 25010 id = 1 }
 	location = 773
 	name = "Fezzan/Riyah Division"
	division = {
   		id = { type = 25010 id = 2 }
   		name = "Fezzen Division"
   		strength = 70
   		type = cavalry
		model = 0
		experience = 10
             	}
	division = {
   		id = { type = 25010 id = 3 }
   		name = "Riyah Division"
   		strength = 70
   		type = cavalry
		model = 0
		experience = 5
             	}
	}
landunit = {
	id = { type = 25010 id = 4 }
	location = 775
	name = "Jofra/Sirti Division"
	division = {
		id = { type = 25010 id = 5 }
		name = "Jofra/Sirti Division"
		strength = 70
		type = infantry
		model = 0
		experience = 5
		}
	}
landunit = {
	id = { type = 25010 id = 6 }
	location = 754
	name = "Fezzan Division"
	division = {
		id = { type = 25010 id = 7 }
		name = "Fezzan Division"
		strength = 60
		type = militia
		model = 0
		experience = 2
		}
	}
landunit = {
	id = { type = 25010 id = 8 }
	location = 754
	name = "Riyah Division"
	division = {
		id = { type = 25010 id = 9 }
		name = "Riyah Division"
		strength = 60
		type = militia
		model = 0
		experience = 2
		}
	}
landunit = {
	id = { type = 25010 id = 10 }
	location = 754
	name = "1st Tripolitanian Division"
	division = {
		id = { type = 25010 id = 11 }
		name = "1st Tripolitanian Division"
		strength = 60
		type = cavalry
		model = 0
		experience = 2
		}
	}
landunit = {
	id = { type = 25010 id = 12 }
	location = 770
	name = "2nd Tripolitanian Division"
	division = {
		id = { type = 25010 id = 13 }
		name = "2nd Tripolitanian Division"
		strength = 80
		type = cavalry
		model = 0
		experience = 2
		}
	division = {
		id = { type = 25010 id = 14 }
		name = "3rd Tripolitanian Division"
		strength = 80
		type = cavalry
		model = 0
		experience = 2
		}
	}
landunit = {
	id = { type = 25010 id = 15 }
	location = 770
	name = "3rd Tripolitanian Division"
	division = {
		id = { type = 25010 id = 16 }
		name = "3rd Tripolitanian Division"
		strength = 80
		type = garrison
		model = 0
		experience = 0
		}
	}
}