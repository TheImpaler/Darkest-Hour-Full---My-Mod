	########################################
    # Country definition for ITA by Cardus #
    ########################################
     
    #####################
    # Country main data #
    #####################
     
    country =
    {  tag                    = ITA
       manpower               = 779 #was 460
       # Resource Reserves
       energy                 = 3600
       metal                  = 1800
       rare_materials         = 1000
       oil                    = 1000
       supplies               = 2000
       money                  = 500
       belligerence           = 0 # to avoid MP problems
       capital                = 419
       transports             = 400
       escorts                = 100
   #ground_def_eff         = 0.600 
     research_mod = 0.7
 
   
       diplomacy =
       {  relation = {  tag = AFG value = 50  }
         relation =
         {  tag        = ALB
           value      = 10
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = ARG value = 30  }
         relation = {  tag = AST value = 1  }
         relation =
         {  tag        = AUS
           value      = 125
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = BEL value = -5  }
         relation = {  tag = BHU value = 1  }
         relation = {  tag = BUL value = 150  }
         relation = {  tag = CAN value = 1  }
         relation = {  tag = CHL value = 30  }
         relation = {  tag = CZE value = 15  }
         relation = {  tag = ENG value = -50  }
         relation = {  tag = ETH value = -200  }
         relation = {  tag = FIN value = 50  }
         relation = {  tag = FRA value = -50  }
         relation = {  tag = GER value = 50  }
         relation =
         {  tag        = GRE
           value      = -35
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = HOL value = -20  }
         relation =
         {  tag        = HUN
           value      = 125
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = IRE value = 20  }
         relation = {  tag = IRQ value = 25  }
         relation = {  tag = NEP value = 1  }
         relation = {  tag = NZL value = 1  }
         relation = {  tag = OMN value = 50  }
         relation = {  tag = POR value = 65  }
         relation =
         {  tag        = ROM
           value      = 50
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = SAF value = 1  }
         relation = {  tag = SAU value = -25  }
         relation =
         {  tag        = SCH
           value      = 1
           guaranteed = {  day = 16 month = may year = 1935  }
          }
         relation = {  tag = SPR value = -50  }
         relation =
         {  tag        = TUR
           value      = 1
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = YEM value = 50  }
         relation = {  tag = YUG value = 75  }
      relation = {  tag = USA value = 90  } #USA ignored the embargo and provided Italy with the oil required
        }
       SpyInfo                = {  country = "ITA" NumberOfSpies = 9  }
       # Somaliland
       nationalprovinces      = {  430 431 425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 350 343   
            403 406 402 413 417 435 432 405 404 390 94 399 371 429 378 379 87 394 395 418 426 427 428 433 91 }
            #367 90 371 429 378 379 #added
            #389 335 361 329 359 334 362 360 87 2509#removed
       
       ownedprovinces         = { 430  431  425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 378 
                                  379 754 752 750 757 756 762 761 768 760 766 765 771 769 770 773 755 751 774 815
                                  817 816  837 836 838 776 777 758 759 763 775 764 767 772 403 406 394 395 418 426 427 428 433   
								  402 413 417 435 432 405 404 753 399  834 835 }

       controlledprovinces    = {  430  431  425  422  424  421  420  416  423  415  414  419  410  412  411  393  408  396  398  407  401  400  434  378 
                                  379  754  752  750  757  756  762  761  768  760  766  765  771  769  770  773  755  751  774    815
                                  817 816  837 836 838 776 777 758 759 763 775 764 767 772
             403 406  394 395 418 426 427 428 433 402 413 417 435 432 405 404 753 399  834 835 }
		claimedprovinces =  {   740 741 742 744 745 746 747 748 749 #Tunisia
                                750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 #Libya
                                359 362 361 360 #Albania
								349 #Ljubljana
								815 816 817 #Eritrea
								834 835 836 837 838 #Somalia
								822 823 820 825 829 830 819 821 818 828 831 826 827 824 #Abyssinia
								832 833 # French and British Somaliland
							} 

	# Italy 1936 techs
	#######################
	techapps = {  

	# Manufacturing
	5810 5820 5050 5830 5060 5070 
	# Construction Engineering 
	5800 5080 5090
	# Agriculture 
	5700 5710 5010 5020
	# Computers
	5310 54010 54020 54030 
	# Cryptography
	5316 5326 5327 
	# Radar
	
	# Oil Refining
	5190
	# Atomic Research
	5470
	# Medicine
	5600 5610 5620 5630
	# Exp. Rocket
	5560

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 
	# Motorized Infantry
	1396
	# Naval Infantry
	1560 1570
	# Paratroopers
	
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650
	# Armored Car 
	2860 2870 2880 2020 
	# Artillery
	2290 2300 2310 2900 2910 2920 2930 
	# Anti-tank Artillery
	
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery
	2810 2820 2510 

	# Hospital System 
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6560 6030

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470
	# Battlecruiser  
	3310 3320 3330
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260
	# Destroyer 
	3010 3020 3030 3040 3050 3060 
	# Submarine 
	3610 3620 3630 3640 3650
	# Light Carrier 
	12100 
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	# Engagement Theories
	8010 8020 8040 8050 8060 8070 8080
	# Amphibious Warfare
	82300
	# Logistic Support
	82500
	# Naval Interdiction
	8500 8510 8520 8550
	# Trade Interdiction Submarine
	8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	
	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Escort Fighter 
	
	# Close Air Support
    4400
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber 
	4700 4710 
	# Seaplanes
	4740 4750 4760 4770 4780
	# CAG
	
	# Air Transport 
	4290 4250

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	
	}

	inventions = { 3000027 }
       policy =
       {  date              = {  year = 0 month = january day = 0  }
         democratic        = 2
         political_left    = 3
         freedom           = 3 #former value was 4
         free_market       = 7
         professional_army = 7 # 6 at peace
         defense_lobby     = 7
         interventionism   = 8 #former value was 6
        }
		peacetime_ic_mod       = 0.65
		#wartime_ic_mod       = 0.7
       headofstate            = {  type = 9 id = 25001  }
       headofgovernment       = {  type = 9 id = 25002  }
       foreignminister        = {  type = 9 id = 25003  }
       armamentminister       = {  type = 9 id = 25054  }
       ministerofsecurity     = {  type = 9 id = 25005  }
       ministerofintelligence = {  type = 9 id = 25006  }
       chiefofstaff           = {  type = 9 id = 25007  }
       chiefofarmy            = {  type = 9 id = 25008  }
       chiefofnavy            = {  type = 9 id = 25009  }
       chiefofair             = {  type = 9 id = 25010  }
       # ######################
       # ITA 1936 LAND OOB
       # ######################
       landunit =
       {  id       = {  type = 23500 id = 1  }
         location = 398 # Torino
         name     = "I Corpo d'Armata"
         # Gen. C. Vecchiarelli#
         Division =
         {  id      = {  type = 23500 id = 2  }
           name     = "1a Divisione 'Superga'"
           type     = infantry
		   model    = 5 
           extra    = armored_car
           strength = 60
		    brigade_model    = 3 		   
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 3  }
         location = 398 # Alessandria/Torino
         name     = "Comando 3a Divisione 'Ravenna'"
         Division =
         {  id       = {  type = 23500 id = 4  }
           name     = "3a Divisione 'Ravenna'"
           type     = infantry
           strength = 60
		   model    = 5 
          }
        } 
		landunit =
       {  id       = {  type = 23500 id = 5  }
         location = 398 # Cuneo/Torino
         name     = "II Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 6  }
           name     = "4a Divisione 'Livorno'"
           type     = infantry
           strength = 60
            model    = 5 
          }
		}
       landunit =
       {  id       = {  type = 23500 id = 7  }
         location = 398 # Alessandria/Torino
         name     = "Comando 4a Divisione 'Cuneense'"
         Division =
         {  id       = {  type = 23500 id = 8  }
           name     = "4a Divisione Alpina 'Cuneense'"
           type     = bergsjaeger
           strength = 60
		   model    = 6 
          }
		}
		landunit =
       {  id       = {  type = 23500 id = 9  }
        location = 407 # Milano
         name     = "III Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 10  }
           name     = "6a Divisione 'Cuneo'"
           type     = infantry
           strength = 60
	       model    = 5
          }
        } 
		landunit =
       {  id       = {  type = 23500 id = 11  }
         location = 396 # Torino
         name     = "Comando divisione 'Taurinense'"
         # Gen. L. Negri#
         Division =
         {  id       = {  type = 23500 id = 12  }
           name     = "1a Divisione Alpina 'Taurinense'"
           type     = bergsjaeger
           strength = 60
		   model    = 6 		   
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 13  }
         location = 402 # Merano/Bolzano
         name     = "IV Corpo d'Armata"
         Division =
         {  id      = {  type = 23500 id = 14  }
           name     = "2a Divisione Alpina 'Tridentina'"
           type     = bergsjaeger
           strength = 60
		   model    = 6 
		   }
        }
       landunit =
       {  id       = {  type = 23500 id = 15  }
         location = 403 # Trieste
         name     = "V Corpo d'Armata"
         # Gen. R. Balocco#
         Division =
         {  id      = {  type = 23500 id = 16  }
           name     = "12a Divisione 'Sassari'"
           type     = infantry
	       model    = 5
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 17  }
         location = 406 # Abbazia/Fiume
         name     = "Comando Divisione 'Bergamo'"
		 Division =
         {  id      = {  type = 23500 id = 18  }
           name     = "15a Divisione 'Bergamo'"
           type     = infantry
	       model    = 5
           strength = 60
          }
		}
       landunit =
       {  id       = {  type = 23500 id = 19  }
         location = 411 # Bologna
        name     = "VI Corpo d'Armata"
        Division =
         {  id		= {  type = 23500 id = 20  }
           name		= "16a Divisione 'Pistoia'"
           type     = infantry
		   model    = 5
          extra    = artillery
           brigade_model = 3
          strength = 60
          }
       }
       landunit =
	   {  id       = {  type = 23500 id = 21  }
         location = 410 # Firenze
         name     = "VII Corpo di Armata"
         Division =
         {  id           = {  type = 23500 id = 22  }
           name          = "41a Divisione 'Firenze'"
           type          = infantry
		   model    = 5 		   
           extra         = artillery
           brigade_model = 3
           strength      = 70
          }
        }
       landunit =
	   {  id       = {  type = 23500 id = 24  }
         location = 419 # Roma
         name     = "VIII Corpo di Armata"
         Division =
         {  id      = {  type = 23500 id = 25  }
           name     = "21a Divisione 'Granatieri di Sardegna'"
           type     = infantry
		   model    = 7 
           strength = 60  #strenght reduced 
          }
        }
       landunit =
	   {  id       = {  type = 23500 id = 26  }
         location = 426 # Bari
         name     = "IX Corpo di Armata"
       Division =
        {  id      = {  type = 23500 id = 27  }
           name     = "47a Divisione 'Bari'"
           type     = infantry
		    model   = 5 
          strength = 60  #strenght reduced 
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 28  }
         location = 765 # Tobruk
         name     = "X Corpo di Armata"
	     Division =
         {  id       = {  type = 23500 id = 29  }
           name     = "25a Divisione 'Bologna'"
           type     = infantry
		   model    = 7 
           strength = 60
          }
        }
		landunit =
       {  id       = {  type = 23500 id = 30  }
         location = 405 # Udine
         name     = "XI Armata"
         Division =
         {  id            = {  type = 23500 id = 31  }
           name          = "13a Divisione 'Re'"
           type          = infantry
	       model         = 5
          extra         = artillery
           brigade_model = 2
           strength      = 70
         }
       }
       landunit =
       { id       = {  type = 23500 id = 32  }
         location = 430 # Palermo
         name     = "XII Corpo d'Armata"
         # Gen. A.Rossi#
         Division =
         {  id       = {  type = 23500 id = 33  }
           name     = "28a Divisione 'Aosta'"
           type     = infantry
		   model    = 5
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 34  }
        location = 393 # Brescia/Verona
         name     = "XIII Corpo d'Armata"
         # Gen. F Gambelli#
         Division =
         {  id       = {  type = 23500 id = 35  }
           name     = "9a Divisione 'Pasubio'"
           type     = infantry
		    model    = 6
          strength = 60
         }
		}  
       landunit =
       {  id       = {  type = 23500 id = 36  }
         location = 400 # Padova/Venezia
         name     = "XIV Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 37  }
           name     = "10a Divisione 'Piave'"
           type     = infantry
	       model    = 7
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 38  }
         location = 403 # Trieste
         name     = "XV Corpo d'Armata"
         # Gen. C. Mercalli#
         Division =
         {  id       = {  type = 23500 id = 39  }
           name     = "14a Divisione 'Isonzo'"
           type     = infantry
	        model    = 5
           strength = 60
          }
		}
       landunit =
       {  id       = {  type = 23500 id = 40  }
         location = 421 # Napoli
         name     = "XVII Corpo d'Armata"
         Division =
         { id       = {  type = 23500 id = 41  }
           name     = "51a Divisione 'Siena'"
           type     = infantry
		    model    = 5
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 42  }
         location = 393 # Brescia
        name     = "XVIII Corpo d'Armata"
         # Gen. A. Agromini#
        Division =
         {  id       = {  type = 23500 id = 43  }
           name     = "7a Divisione 'Lupi di Toscana'"
           type     = infantry
		    model    = 7 
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 44  }
         location = 396 # Genova
         name     = "XIX Corpo d'Armata"
        Division =
         {  id       = {  type = 23500 id = 46  }
           name     = "19a Divisione 'Venezia'"
           type     = infantry
           model    = 7 
           extra    = armored_car
		   brigade_model = 3
           strength = 60
         }
        }
		landunit =
       { id       = {  type = 23500 id = 47  }
         location = 750 # Tripoli
         name     = "XX Corpo d'Armata"
		 Division =
         {  id       = {  type = 23500 id = 48  }
           name     = "17a Divisione 'Pavia'"
           type     = infantry
	       model    = 7 
           strength = 60
          }
        }
       landunit =
       { id       = {  type = 23500 id = 49  }
         location = 761 # Bengasi
         name     = "XXI Corpo d'Armata"
         Division =
         { id       = {  type = 23500 id = 50  }
           name     = "27a Divisione 'Brescia'"
           type     = infantry
            model    = 5
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 251  }
         location = 434 # Cagliari
         name     = "XXII Corpo d'Armata"
         # Gen. C.Rossi#
         Division =
         {  id       = {  type = 23500 id = 252  }
           name     = "23a Divisione 'Ferrara'"
           type     = infantry
		   model    = 5
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 253  }
         location = 434 # Sassari
         name     = "XXIII Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 254  }
           name     = "31a Divisione 'Calabria'"
           type     = infantry
		    model    = 5
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 255  }
         location = 402 # Bolzano
         name     = "XXIV Corpo d'Armata"
         # Gen. A Guzzoni#
         Division =
         {  id           = {  type = 23500 id = 256  }
           name          = "11a Divisione 'Brennero'"
           type          = infantry
		   model         = 5
           extra         = artillery
           brigade_model = 3
           strength      = 70
          }
        }      
       landunit =
       {  id       = {  type = 23500 id = 257  }
         location = 398 # Novara/Torino
         name     = "XXV Corpo d'Armata"
         # Gen. C. Mercalli#
         Division =
         {  id       = {  type = 23500 id = 258 }
           name     = "2a Divisione 'Sforzesca'"
           type     = infantry
	       model    = 7 
           extra    = armored_car
           brigade_model = 3
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 259  }
         location = 412 # Ancona
         name     = "XXVI Corpo d'Armata"
		Division =
         {  id       = {  type = 23500 id = 260  }
           name     = "18a Divisione 'Messina'"     
           type     = infantry
            model    = 5
           strength = 60   #strenght reduced
          }
		}
       landunit =
      {  id       = {  type = 23500 id = 261  }
         location = 416 # Chieti/Anzio
         name     = "XXVI Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 262  }
           name     = "24a Divisione 'Pinerolo'"
           type     = infantry
          model    = 5			
           strength = 60
        }
		} 
       landunit =
       {  id       = {  type = 23500 id = 263  }
         location = 433 # Siracusa
         name     = "XXVII Corpo d'Armata"
        Division =
         {  id       = {  type = 23500 id = 264  }
           name     = "29a Divisione 'Piemonte'"
           type     = infantry
            model   = 5
          strength = 60
          }
		}
       landunit =
       {  id       = {  type = 23500 id = 279  }
         location = 413 # Siracusa
         name     = "XXVIII Corpo d'Armata"
		 Division =
         {  id       = {  type = 23500 id = 45  }
           name     = "20a Divisione 'Friuli'"
           type     = infantry
		    model    = 5
           strength = 60
         }
		}
#	    landunit =   
#		{  id       = {  type = 23500 id = 265  }
#        location = 408 # Cremona/Parma
#        name     = "Comando del Corpo d'Armata 'Autotrasportabile'" 
#        Division =
#         {  id       = {  type = 23500 id = 266  }
#          name     = "Comando del Corpo d'Armata 'Autotrasportabile'"   #new hq
#          type     = hq
#          model    = 1
#          strength = 20
#         }
#		}
#      landunit =   
#      {  id       = {  type = 23500 id = 267  }
#        location = 400 # Padova/Venezia
#        name     = "Comando del Corpo d'Armata 'Celere'" 
#        Division =
#         {  id       = {  type = 23500 id = 268  }
#          name     = "Comando del Corpo d'Armata 'Celere'"   #new hq
#          type     = hq
#          model    = 1
#          strength = 20
#         }
#		}
       landunit =
       {  id       = {  type = 23500 id = 269  }
         location = 400 # Venezia
         name     = "Corpo d'Armata Celere"
         # Gen. G. Messe#
         Division =
         {  id       = {  type = 23500 id = 270  }
           name     = "1a Divisione 'Eugenio di Savoia'"
           type     = cavalry
           strength = 50
           model    = 11
           extra    = light_armor_brigade #http://www.regioesercito.it/reparti/fanteria/redivcelere1.htm
           brigade_model = 3
         }
         Division =
         {  id       = {  type = 23500 id = 271  }
           name     = "2a Divisione 'Emanuele Filiberto Testa di Ferro'"
           type     = cavalry
           strength = 50
           model    = 11
           extra    = light_armor_brigade #http://www.regioesercito.it/reparti/fanteria/redivcelere2.htm
           brigade_model = 3
         }
         Division =
         {  id       = {  type = 23500 id = 272  }
           name     = "3a Divisione 'Principe Amedeo duca d'Aosta'"
           type     = cavalry
           strength = 50
           model    = 11
           extra    = light_armor_brigade #http://www.regioesercito.it/reparti/fanteria/redivcelere3.htm
           brigade_model = 3
		   }
        }
#      landunit =   
#      {  id       = {  type = 23500 id = 273  }
#        location = 401 # Trento
#        name     = "Comando Superiore 'Truppe Alpine'" 
#        Division =
#         {  id       = {  type = 23500 id = 274  }
#          name     = "Comando Superiore 'Truppe Alpine'"   #new hq
#          type     = hq
#          model    = 1
#          strength = 20
#         }
#		}
      landunit =   
      {  id       = {  type = 23500 id = 275  }
        location = 419 # Roma
        name     = "Superesercito" 
         Division =
         {  id      = {  type = 23500 id = 276  }
           name     = "Q.G. Forze Armate"   #new hq
           type     = hq
           model    = 1
           strength = 50 #strenght reduced 
          }
		} 
       landunit =
       {  id       = {  type = 23500 id = 277  }
         location = 394 # Belluno
        name     = "Comando 3a Divisione Alpina 'Julia'" 
		Division =
         {  id       = {  type = 23500 id = 278  }
           name     = "3a Divisione Alpina 'Julia'"
           type     = bergsjaeger
           model    = 7		   
           strength = 60
          }
        }
	#  landunit =   
     # {  id       = {  type = 23500 id = 195  }
    #    location = 765 # Tobruck
    #    name     = "FF.AA. Africa SETT"  #removed
    #    Division =
    #     {  id       = {  type = 23500 id = 196  }
    #      name     = "Comando Superiore FF.AA. Africa SETT"   #new hq
    #      type     = hq
    #      model    = 0
    #      strength = 50
    #     }
    #    Division =
    #    {  id       = {  type = 23500 id = 22  }
    #      name     = "18a Divisione 'Messina'"     #removed from Libya 
    #      type     = infantry
    #      model    = 1
    #      strength = 50
    #     }
    #   }
       landunit =
       {  id       = {  type = 23500 id = 240  }
         location = 378 # Leros
         name     = "Guarnigione di Leros" 
		 #Ammiraglio Mascherpa#
         Division =
         {  id       = {  type = 23500 id = 241  }
           name     = "Guarnigione di Leros"
           type     = garrison
           model    = 4
           strength = 30  #the garrison was 5500 soldiers strong
          }
       }
       landunit =
       {  id       = {  type = 23500 id = 242  }
         location = 379 # Rodos 
         name     = "Comando Truppe delle Isole Italiane dell'Egeo" #http://www.regioesercito.it/reparti/fanteria/rediv50.htm
         Division =
         {  id       = {  type = 23500 id = 243 }
           name     = "50a Divisione 'Regina'"   #
           type     = infantry
           model    = 5
           strength = 60 #strenght reduced 
          }
       }
#       landunit =
#       {  id       = {  type = 23500 id = 235  }
#         location = 422 # Taranto
#         name     = "Comando Base Navale Taranto"
#		Division =
#         {  id       = {  type = 23500 id = 236  }
#           name     = "Comando Base Navale Taranto"     
#           type     = hq
#            model    = 2
#           strength = 10   #strenght reduced
#          }
#		}
    ####################################################################################
    #OOB Italian Troops Campagna d'Africa 1935-1936 by Cardus
    # ref. http://www.regioesercito.it/reparti/mvsn/mvsn_et35.htm
    # ref http://digilander.libero.it/fiammecremisi/dopoguerra1/etiopia.htm
    # ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia
    # ref http://www.aeronautica.difesa.it/storiaTradizione/LaStoria/Pagine/guerreEtiopiaSpagna.aspx
    #####################################################################################
     
       landunit =
       {  id       = {  type = 23500 id = 52  }
         location = 815
         name     = "Comando Superiore dell'A.O.I."
      #Maresciallo Badoglio#
         Division =
         {  id       = {  type = 23500 id = 53  }
           name     = "Q.G. Armata dell'A.O.I."
           type     = hq
           model    = 2
           extra = engineer
           strength = 60
          }
         #Div Gran Sasso is with the II CORPO D'ARMATA
         #Div Sila is with the III CORPO D'ARMATA
      #CC.NN. '1 Febbraio'is with IV CORPO D'ARMATA
      #6a Divisione CC.NN. 'Tevere' is with Forze Armate della Somalia
         Division =
         {  id       = {  type = 23500 id = 59  }
           name     = "4a Divisione CC.NN. '3 Gennaio'"
        #Gen. Alessandro Traditi
           type     = militia
           model    = 4	   
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 55  }
         location = 816
         name     = "I Corpo d'Armata dell'A.O.I."
         # Gen. Santini
         Division =
         {  id       = {  type = 23500 id = 56  }
           name     = "26a Divisione 'Assietta'"
           #Gen. Enrico Riccardi
		   type     = infantry
           model    = 7
           extra = artillery
           brigade_model = 3		   
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 57  }
           name     = "30a Divisione 'Sabauda'"
           #
           type     = infantry
           model    = 7
           extra = artillery
           brigade_model = 3		
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 58  }
           name     = "5a Divisione Alpina 'Pusteria'"
           type     = bergsjaeger
           model = 7 
           extra = artillery
		   brigade_model = 3		
           strength = 60
          }
         Division =
      {  id       = {  type = 23500 id = 180  }
           name     = "V-XV Indigeni e banda 'Scimezana'"
           type     = militia
		   model = 4  
           strength = 100
           extra = light_armor_brigade 
		   brigade_model = 3 
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 60  }
         location = 817
         name     = "II Corpo d'Armata dell'A.O.I."
         # Gen. Maravigna
        Division =
        {  id       = {  type = 23500 id = 61  }
          name     = "19a Divisione 'Venezia'"
          type     = infantry
          model    = 1
          extra    = armored_car
		   brigade_model = 3 
          strength = 100
        }
        Division =
        {  id       = {  type = 23500 id = 62  }
          name     = "24a Divisione 'Pinerolo'"
          type     = infantry
          model    = 1
          strength = 60
        }
         Division =
      {  id       = {  type = 23500 id = 181  }
           name     = "19a Divisione 'Gavinana'"
           #Gen. Nino Villasanta
           type     = infantry
           model    = 7
           extra = artillery   
           brigade_model = 3 
           strength = 60
          }
         Division =
         {  id            = {  type = 23500 id = 182  }
           name          = "24a Divisione 'Gran Sasso'"
        #Gen. A.R. Adalberto di Savoia
           type          = infantry
           model         = 7
           extra = artillery
           brigade_model = 3 
           strength      = 70
          }
         Division =
         {  id       = {  type = 23500 id = 63  }
           name     = "3a Divisione CC.NN. '21 Aprile'"
        #Gen. Giacomo Appiotti
           type     = militia
           model = 4 
		   extra = artillery
           brigade_model = 3 
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 184  }
           name     = "Gr. Bande Altopiano - Serae, Cheren and Hamasien"
		   type     = militia
           model = 4 
           extra = light_armor_brigade
           brigade_model = 3 
           strength = 100
          }
        } 
     
       landunit =
       {  id       = {  type = 23500 id = 64  }
         location = 816
         name     = "III Corpo d'Armata dell'A.O.I."
         # Gen. Bastico
        Division =
        {  id       = {  type = 23500 id = 65  }
          name     = "27a Divisione 'Brescia'"
          type     = infantry
          model    = 1
          strength = 100
         }
      Division =
         {  id            = {  type = 23500 id = 183  }
           name          = "27a Divisione 'Sila'"
        #Gen. Francesco Bertini
           type          = infantry
           model         = 7
           extra = artillery
		   brigade_model = 3 
           strength      = 70
          }
         Division =
         {  id       = {  type = 23500 id = 66  }
           name     = "1a Divisione CC.NN. '23 Marzo'"
        #Gen. Domenico Siciliani
           type     = militia
           model = 4 
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 67  }
         location = 817
         name     = "IV Corpo d'Armata dell'A.O.I."
         # Gen. Babbini#
         Division =
         {  id       = {  type = 23500 id = 68  }
           name     = "5a Divisione 'Cosseria'"
        #Gen. Adolfo Olivetti
           type     = infantry
           model    = 7
           extra = artillery
           brigade_model = 3 
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 69  }
           name     = "2a Divisione CC.NN. '28 Ottobre'"
        #Gen. Umberto Somma
           type     = militia
           model = 4
           strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 70  }
           name     = "5a Divisione CC.NN. '1 Febbraio'"
           #Gen. Attilio Teruzzi
           type     = militia
           model = 4
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 71  }
         location = 817
         name     = "Corpo d'Armata Eritreo"
         # Gen. Pirzio Biroli#
         Division =
         {  id       = {  type = 23500 id = 72  }
           name     = "1a Divisione 'Eritrea'"
           type     = infantry
           model    = 7
           extra = artillery
           brigade_model = 3 
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 73  }
           name     = "2a Divisione 'Eritrea'"
           type     = infantry
           model    = 7
           extra = artillery
           brigade_model = 3 
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 185  }
           name     = "1a Gr. Btg CC.NN. dell'Eritrea"
           type     = militia
           model = 4 
           extra = artillery
           brigade_model = 3 
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 186  }
           name     = "Gr. squadroni cavalleria indigena"
           type     = cavalry
           model = 5 
           extra = light_armor_brigade 
           brigade_model = 3 
           strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 187  }
           name     = "Banda dell'Hassamo"
           type     = militia
           model = 3 
		   extra = artillery
           brigade_model = 1 
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 74  }
         location = 836
         name     = "Forze Armate della Somalia"
         # Gen. Graziani#
        Division =
        {  id       = {  type = 23500 id = 75  }
          name     = "29a Divisione 'Piemonte'"
          type     = infantry
          model    = 7
         strength = 60
         }
#        Division =
#        {  id       = {  type = 23500 id = 188  }
#          name     = "Q.G. Forze Armate della Somalia"
#          type     = hq
#         model    = 1
#         strength = 60
#         }
		} 
       landunit =
       {  id       = {  type = 23500 id = 190  }
         location = 835 #Galkayo
         name     = "Comando 29a Divisione 'Peloritana'"
        #Gen. sisto Bertoldi
         Division =
         {  id       = {  type = 23500 id = 189  }
           name     = "29a Divisione 'Peloritana'"
          type     = infantry
           model    = 7
           extra = artillery
           brigade_model = 3 
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 198  }
         location = 837
         name     = "Forze Armate della Somalia"
         # Guglielmo Nasi#
         Division =
         {  id       = {  type = 23500 id = 76  }
           name     = "Divisione 'Libia'"
        #Gen. Guglielmo Nasi
           type     = infantry
           model    = 7
           extra = artillery
           brigade_model = 3 
		   strength = 60
          }
         Division =
         {  id       = {  type = 23500 id = 77  }
           name     = "6a Divisione CC.NN. 'Tevere'"
        #Gen. Enrico Boscardi
           type     = militia
           model = 4 
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 199  }
         location = 838
         name     = "Forze Armate della Somalia"
         # Gen. Luigi Frusci#
         Division =
         {  id       = {  type = 23500 id = 78  }
           name     = "7a Divisione CC.NN. 'Cirene'"
           type     = infantry #this is the only CCNN with a rank of division, about 14000 soldiers http://www.regioesercito.it/reparti/mvsn/cirene.htm
           strength = 100
		   model = 5 
          }
         Division =
         {  id       = {  type = 23500 id = 197  }
           name     = "Truppe indigene della Somalia generale"
           #Gen. Luigi Frusci
           type     = militia
           model = 4 
           strength = 50
          }
        } 
    ###############################################################################
    ### Libya OOB ref http://www.regioesercito.it/reparti/mvsn/ordmillibia.htm  ###
    ###############################################################################
       landunit =
       {  id       = {  type = 23500 id = 204  }
         location = 750 #Tripoli
         name     = "R. Corpo di truppe coloniali della Libia"
#         Division =
#         {  id       = {  type = 23500 id = 205  }
#           name     = "Q.G. Corpo di truppe coloniali della Libia"
#           type     = hq
#           model    = 1
#           extra = artillery 
#           strength = 20
#          }
         Division =
         {  id       = {  type = 23500 id = 206  }
           name     = "Fanteria coloniale"
           type     = militia
           model = 4
           extra = police #carabinieri
           strength = 50
          }
         Division =
         {  id       = {  type = 23500 id = 207  }
          name     = "Squadroni di cavalleria coloniale"
          type     = cavalry
          model = 3 
    	  extra = engineer 
          strength = 50
          }
        }
       landunit =   
       {  id       = {  type = 23500 id = 208  }
         location = 765 # Tobruck
         name     = "Corpo d’armata L.B."
        Division =
         {  id       = {  type = 23500 id = 196  }
          name     = "Comando Corpo d’armata L.B." 
          type     = hq
          model    = 1
          strength = 20 #was 50
          extra = anti_air 
         }
         Division =
          {  id       = {  type = 23500 id = 209  }
           name     = "Divisione 'Metauro'"
           type     = infantry
           model    = 5
           extra = artillery 
           brigade_model = 3 
           strength = 60
          }
         Division =
        {  id       = {  type = 23500 id = 210  }
           name     = "Divisione 'Assietta II'"     
           type     = infantry
           model    = 5
           extra = artillery 
           brigade_model = 3 
           strength = 30
          }
         Division =
        {  id       = {  type = 23500 id = 211  }
           name     = "Divisione 'Trento'"     
           type     = motorized
           model    = 0
           extra = light_armor_brigade
           brigade_model = 3 
           strength = 60
          }
        }
     
    ####################################################################
       ### Italian Navy OOB by Cardus ###
       
	navalunit = { 
		id = { type = 23500 id = 79 } 
		name = "Prima Squadra" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 106 } 
			name = "RN Alberico da Barbiano" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 108 } 
			name = "RN Alberto da Giussano" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 109 } 
			name = "RN Armando Diaz" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 107 } 
			name = "RN Luigi Cadorna" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 212 } 
			name = "RN Giuseppe Miraglia" 
			type = escort_carrier 
			} 
		division = { 
			id = { type = 23500 id = 89 } 
			name = "VIII Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 6 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 98 } 
		name = "Seconda Squadra" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 118 } 
			name = "RN Pola" 
			type = heavy_cruiser 
			model = 4 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 124 } 
			name = "RN Trento" 
			type = heavy_cruiser 
			model = 3 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 125 } 
			name = "RN Bolzano" 
			type = heavy_cruiser 
			model = 3 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 126 } 
			name = "RN Trieste" 
			type = heavy_cruiser 
			model = 3 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 129 } 
			name = "RN Duca d'Aosta" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 130 } 
			name = "RN Muzio Attendolo" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 131 } 
			name = "RN Raimondo Montecuccoli" 
			type = light_cruiser 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 105 } 
		name = "Comando Navale Mar Egeo" 
		location = 378 
		base = 378 
		division = { 
			id = { type = 23500 id = 102 } 
			name = "IV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 94 } 
			name = "VIII Squadriglia Torpediniere" 
			type = destroyer 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 133 } 
		name = "V Gruppo Sottomarini" 
		location = 378 
		base = 378 
		division = { 
			id = { type = 23500 id = 134 } 
			name = "LI Squadriglia Sottomarini" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 135 } 
			name = "LII Squadriglia Sottomarini" 
			type = submarine 
			model = 2 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 128 } 
		name = "XI Squadriglia Torpediniera" 
		location = 750 
		base = 750 
		division = { 
			id = { type = 23500 id = 132 } 
			name = "XI Squadriglia Torpediniera" 
			type = destroyer 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 111 } 
		name = "Comando Navale Libia" 
		location = 765 
		base = 765 
		division = { 
			id = { type = 23500 id = 85 } 
			name = "RN San Giorgio" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 88 } 
			name = "RN Libia" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 95 } 
			name = "I Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 96 } 
			name = "XII Squadriglia Torpediniere" 
			type = destroyer 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 137 } 
		name = "VI Gruppo Sommergibili" 
		location = 765 
		base = 765 
		division = { 
			id = { type = 23500 id = 136 } 
			name = "LXI Squadra Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 138 } 
			name = "LXII Squadra Sommergibili" 
			type = submarine 
			model = 2 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 148 } 
		name = "Comando Navale AOI" 
		location = 815 
		base = 815 
		division = { 
			id = { type = 23500 id = 149 } 
			name = "III Squadriglia Cacciatorpediere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 153 } 
			name = "V Squadriglia Cacciatorpediere" 
			type = destroyer 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 141 } 
		name = "VIII Gruppo Sottomarini" 
		location = 815 
		base = 815 
		division = { 
			id = { type = 23500 id = 142 } 
			name = "LXXXI Squadra" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 139 } 
			name = "LXXXII Squadra" 
			type = submarine 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 146 } 
		name = "Comando Flotta Sommergibili-I Gruppo" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 147 } 
			name = "XI Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 140 } 
			name = "XII Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 144 } 
			name = "XIII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 145 } 
			name = "XIV Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 213 } 
			name = "XV Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 214 } 
			name = "XVII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 150 } 
		name = "Comando Flotta Sommergibili-II Gruppo" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 151 } 
			name = "XXI Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 216 } 
			name = "XXII Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 217 } 
		name = "Comando Flotta Sommergibili-III Gruppo" 
		location = 433 
		base = 433 
		division = { 
			id = { type = 23500 id = 218 } 
			name = "XXI Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 219 } 
			name = "XXII Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 112 } 
			name = "XXIV Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 220 } 
			name = "XXV Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 221 } 
			name = "XXVII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 222 } 
		name = "Comando Flotta Sommergibili-IV Gruppo" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 223 } 
			name = "XL Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 224 } 
			name = "XLIII Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 228 } 
			name = "XLVII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 230 } 
			name = "XLIX Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 231 } 
		name = "Comando Flotta Sommergibili-V Gruppo" 
		location = 434 
		base = 434 
		division = { 
			id = { type = 23500 id = 232 } 
			name = "LXXI Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 233 } 
			name = "LXXII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 152 } 
		name = "Dip. Mil. Mar. 'Jonio e Basso Adriatico'" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 86 } 
			name = "RN Taranto" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 87 } 
			name = "RN Bari" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 154 } 
			name = "II Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 99 } 
			name = "RN Zara" 
			type = heavy_cruiser 
			model = 4 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 100 } 
			name = "RN Gorizia" 
			type = heavy_cruiser 
			model = 4 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 101 } 
			name = "RN Fiume" 
			type = heavy_cruiser 
			model = 4 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 90 } 
			name = "XIV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 80 } 
			name = "VII Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 115 } 
		name = "I Squadra di Marina Trasporti" 
		location = 419 
		base = 421 
		division = { 
			id = { type = 23500 id = 114 } 
			name = "Squadrone Sagittario" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 110 } 
			name = "Squadrone Aventino" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 2271 } 
			name = "4a Flottiglia Torpediniere" 
			type = destroyer 
			} 
		division = { 
			id = { type = 23500 id = 2273 } 
			name = "6a Flottiglia Torpediniere" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 119 } 
		name = "II Squadra di Marina Trasporti" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 122 } 
			name = "Squadrone Vallelunga" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 127 } 
			name = "Squadrone Asmara" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 2268 } 
			name = "1a Flottiglia Torpediniere" 
			type = destroyer 
			} 
		division = { 
			id = { type = 23500 id = 2269 } 
			name = "2a Flottiglia Torpediniere" 
			type = destroyer 
			} 
		}             
	navalunit = { 
		id = { type = 23500 id = 2266 } 
		name = "1a Squadra di Marina" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 103 } 
			name = "Squadrone Giorgio Orsini" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 104 } 
			name = "Squadrone Tarquinia" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 2270 } 
			name = "3a Flottiglia Torpediniere" 
			type = destroyer 
			} 
		division = { 
			id = { type = 23500 id = 2272 } 
			name = "5a Flottiglia Torpediniere" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 2346 } 
		name = "2a Squadra di Marina" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 229 } 
			name = "XLVIII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 227 } 
			name = "XLVI Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 226 } 
			name = "XLV Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 225 } 
			name = "XLIV Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 2348 } 
		name = "3a Squadra di Marina" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 159 } 
			name = "VI Squadriglia Torpediniere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 91 } 
			name = "XVI Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 92 } 
			name = "XV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 2350 } 
		name = "4a Squadra di Marina" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 93 } 
			name = "X Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 121 } 
			name = "RN Bartolomeo Colleoni" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 120 } 
			name = "RN Giovanni dalle Bande Nere" 
			type = light_cruiser 
			model = 3 
			} 
		} 
      ### Italian Air OOB ###
       airunit =
       {  location = 396 #Genova
         base     = 396
         id       = {  type = 23500 id = 155  }
         name     = "1a Squadra Aerea"
         Division =
         {  id       = {  type = 23500 id = 156  }
           name     = "9a Divisione Caccia"
           strength = 100
           type     = interceptor
           model    = 6
          }
        }
       airunit =
       {  location = 434 #Cagliari
         base     = 434
         id       = {  type = 23500 id = 157  }
         name     = "4o Comando Bombardieri Tattici 'Drago'"
         Division =
         {  id       = {  type = 23500 id = 158  }
           name     = "4a Divisione Bombardieri 'Drago'"
           strength = 100
           type     = tactical_bomber
           model    = 4
          }
        }
       airunit =
       {  location = 419 #Roma
         base     = 419
         id       = {  type = 23500 id = 160  }
         name     = "2a Squadra Aerea"
         Division =
         {  id       = {  type = 23500 id = 161  }
           name     = "1a Divisione Caccia 'Aquila'"
           strength = 50
           type     = interceptor
           model    = 6
          }
        }
       airunit =
       {  location = 419 #Roma
         base     = 419
         id       = {  type = 23500 id = 162  }
         name     = "3o Comando Aerosiluranti 'Centauro'"
         Division =
         {  id       = {  type = 23500 id = 163  }
           name     = "3a Divisione Bombardieri 'Centauro'"
           strength = 100
           type     = naval_bomber
           model    = 2
          }
        }
       airunit =
       {  location = 407 #Milano
         base     = 407
         id       = {  type = 23500 id = 164  }
         name     = "3a Squadra Aerea"
         Division =
         {  id       = {  type = 23500 id = 165  }
           name     = "7a Divisione Caccia"
           strength = 60 #strenght reduced
           type     = interceptor
           model    = 6
          }
         Division =
      {  id       = {  type = 23500 id = 177  }  # moved here from AOI
           name     = "14a Divisione Caccia 'Rex'"
           strength = 60 #strenght reduced
           type     = interceptor
           model    = 7
          }
         Division =
         {  id       = {  type = 23500 id = 178  } # moved here from AOI
           name     = "13a Divisione Bombardieri 'Pegaso'"
           strength = 60 #strenght reduced
           type     = tactical_bomber
           model    = 4
          }
       }
       airunit =
       {  location = 430 #Palermo
         base     = 430
         id       = {  type = 23500 id = 166  }
         name     = "5o Comando Aerosiluranti 'Eolo'"
         Division =
         {  id       = {  type = 23500 id = 167  }
           name     = "5a Divisione Bombardieri 'Eolo'"
           strength = 50 #strenght reduced
           type     = naval_bomber
           model    = 2
          }
        }
       airunit =
       {  location = 750 #Tripoli
         base     = 750
         id       = {  type = 23500 id = 168  }
         name     = "4a Squadra Aerea"
         Division =
         {  id       = {  type = 23500 id = 169  }
           name     = "35a Divisione Bombardieri"
           strength = 50
           type     = tactical_bomber
           model    = 4
          }
         Division =
         {  id       = {  type = 23500 id = 170  }
           name     = "39a Divisione Trasporti"
           strength = 50 #strenght reduced
           type     = transport_plane
           model    = 0
          }
        }
       airunit =
       {  location = 434 #Cagliari
         base     = 434
         id       = {  type = 23500 id = 171  }
         name     = "Aeronautica della Sardegna"
         Division =
         {  id       = {  type = 23500 id = 172  }
           name     = "10a Divisione Bombardieri 'Marte'"
           strength = 80 #strenght reduced
           type     = naval_bomber
           model    = 1
          }
         Division =
         {  id       = {  type = 23500 id = 173  }
           name     = "2a Divisione Caccia 'Borea'"
           strength = 80 #strenght reduced
           type     = interceptor
           model    = 6
          }
        }
    #####################################################################################
    #OOB Italian Troops Campagna d'Africa 1935-1936 by Cardus 
    # Approx. 500,000 combatants Approx. 595 aircraft Approx. 795 tanks 
    # ref http://en.wikipedia.org/wiki/Second_Italo-Abyssinian_War#cite_note-Barker.2C_A._J._p._20-0 
    # ref http://orbat.com/site/history/volume5/519/ItalianAirForceinItalianEastAfrica1919-1939PartI.pdf
    # ref http://en.wikipedia.org/wiki/Italian_Order_of_Battle_Second_Italo-Abyssinian_War
    #####################################################################################
       airunit =
       {  location = 815
         base     = 815
         id       = {  type = 23500 id = 174  }
         name     = "Aeronautica dell'Africa Orientale"
         Division =
         {  id       = {  type = 23500 id = 175  }
           name     = "106º Stormo Caccia"
           strength = 40
           type     = interceptor
           model    = 6
          }
         Division =
         {  id       = {  type = 23500 id = 176  }
           name     = "4º Stormo Bombardieri"
           strength = 20
           type     = tactical_bomber
           model    = 4
          }
         Division =
         {  id       = {  type = 23500 id = 191  }
           name     = "27º Stormo Bombardieri"
           strength = 10
           type     = tactical_bomber
           model    = 4
          }
        }
       airunit =
       {  location = 836 #Mogadiscio/Muqdisho
         base     = 836
         id       = {  type = 23500 id = 192  }
         name     = "Aeronautica della Somalia"
      #Bgd. Gen. Ferruccio Ranza
         Division =
         {  id       = {  type = 23500 id = 193  }
           name     = "106º Stormo Caccia"
           strength = 10
           type     = interceptor
           model    = 6
          }
         Division =
         {  id       = {  type = 23500 id = 194  }
           name     = "7º Stormo Bombardieri"
           strength = 20
           type     = tactical_bomber
           model    = 4
          }
        }

	division_development = { 
		id    = { type = 23500 id = 250 } 
		name  = "RN Eugenio di Savoia" 
		type  = light_cruiser 
		model = 4 
		date  = { year = 1936 month = january day = 16 }
		new_model = no
	}
	division_development = { 
		id    = { type = 23500 id = 249 } 
		name  = "RN Duca degli Abruzzi" 
		type  = light_cruiser 
		model = 4 
		date  = { year = 1937 month = december day = 1 }
		new_model = no
	}	
	division_development = { 
		id    = { type = 23500 id = 248 } 
		name  = "RN Giuseppe Garibaldi" 
		type  = light_cruiser 
		model = 4 
		date  = { year = 1937 month = december day = 1 }
		new_model = no
	}	
	division_development = { 
		id    = { type = 23500 id = 83 }
		name  = "RN Conte di Cavour"
		type  = battleship
		model = 5
		cost  = 0.2
		date  = { year = 1937 month = june day = 1 }
		new_model = no
    }
    division_development = {
		id    = { type = 23500 id = 84 }
		name  = "RN Giulio Cesare"
		type  = battleship
		model = 5
		cost  = 0.2
		date  = { year = 1937 month = june day = 1 }
		new_model = no
	}
	
	# Doria and Duilio's completion dates are bogus.  They actually didn't
	# begin their reconstruction until Apr 1937, and finished in Oct 1940.  
	# We can't easily remove them from the OOB and put them into the build
	# queue, so we're starting them early, and will let them finish 1 year 
	# early.
	division_development = {
		id    = { type = 23500 id = 81 }
		name  = "RN Andrea Doria"
		type  = battleship
		model = 5
		cost  = 0.2
		date  = { year = 1939 month = june day = 1 }
		new_model = no
	}
	division_development = {
		id    = { type = 23500 id = 82 }
		name  = "RN Caio Duilio"
		type  = battleship
		model = 5
		cost  = 0.2
		date  = { year = 1939 month = june day = 1 }
		new_model = no
	}
	division_development = { 
		id = { type = 23500 id = 215 } 
		name = "RN Littorio" 
		type = battleship 
		model = 7 
		cost  = 0.2
		date  = { year = 1940 month = may day = 6 }
		new_model = no
	} 
	division_development = { 
		id    = { type = 23500 id = 234 } 
		name  = "RN Vittorio Veneto" 
		type  = battleship 
		model = 7 
		cost  = 0.2
		date  = { year = 1940 month = april day = 28 }
		new_model = no
	} 


}
