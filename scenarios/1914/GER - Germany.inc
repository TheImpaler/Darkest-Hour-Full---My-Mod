 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = U08 
	ai           = "U08_1914.ai" 
  capital        = 163 
  manpower        = 520 
  transports       = 550 
  escorts        = 23 
    #ground_def_eff         = 0.82 
  # Resource Reserves 
energy                 = 9780
metal                  = 4890
rare_materials         = 2445
  oil          = 500 
  supplies        = 500 
  money         = 70 
  diplomacy = 
  {   
   relation = {  tag = U09 value   = 100 access = yes } 
   relation = {  tag = BEL value = 20  } 
   relation = {  tag = BUL value   = 100  } 
   relation = {  tag = ENG value = -125  } 
   relation = {  tag = FRA value = -200  } 
   relation = {  tag = GRE value = 50  } 
   relation = {  tag = HOL value = 50  } 
   relation = {  tag = ITA value   = 100  } 
   relation = {  tag = JAP value = 10  } 
   relation = {  tag = LUX value = -50  } 
   relation = {  tag = NZL value = 20  } 
   relation = {  tag    = ROM value   = 50  } 
   relation = {  tag = SAF value = 1  } 
   relation = {  tag = SCH value   = 50  } 
   relation = {  tag = RUS value = -20  } 
   relation = {  tag    = SWE value   = 100  } 
   relation = {  tag    = OTT value   = 100  } 
   relation = {  tag    = SER value   = -50  } 
   } 
  SpyInfo        = {  country = "U08" NumberOfSpies = 7  } 
  
  nationalprovinces   = {  126 145 127 131 142 147 141 137 174 171 176 146 148 154  
 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 
               134 132 178 175 179 167 164 184 104 107 105 109  
 182 155 161 185 165 166 168 133 
 144 160 180 136 139 135 129 128 130 
 216 181 261 225 224 221 149 110 
 150 143 140 
 105 107  104 181 226 224 225 216 221 261 222 143
 # Poland 226 230 222 
                } 
  ownedprovinces     = {  126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 
               134 132 178 175 179 167 164 184 133 
 182 155 161 185 165 166 168 150 143 
 144 160 180 136 139 135 129 128 130 149 140 
 105 107  104 181 226 224 225 216 221 261 222 1671 
 950 948 955 925 928 911 910 909 883 882 886 885 884 849 850 851 848 846 847 1328 1602 1603 1605 1610 1725 1726 1727 1587 1686 1685 1684 1668 
               1670 1665 1669 1667 1666 1674 1675 1676 1677 1681 1731 1724 110 933 936 924 919 908 1234
                } 
  controlledprovinces  = {  126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 
               134 132 178 175 179 167 164 184 133 
 182 155 161 185 165 166 168 150 143 1671 
 144 160 180 136 139 135 129 128 130 149 140 
 105 107  104 181 226 224 225 216 221 261 222 
 950 948 955 925 928 911 910 909 883 882 886 885 884 849 850 851 848 846 847 1328 1602 1603 1605 1610 1725 1726 1727 1587 1686 1685 1684 1668 
               1670 1665 1669 1667 1666 1674 1675 1676 1677 1681 1731 1724 110 933 936 924 919 908 1234
                } 
 claimedprovinces = { 846 847 849 851 848 850 883 884 882 886 885 948 950 955 908 909 910 919 911 928 925 933 936 # Afrika
                      1605 1602 1668 1667 1727 1726 1724 1725 1665 1587 1675 1674 1681 1677 1603 1610 1234 1666 1669 1670 1671 1676 1684 1685 1686 # Pacific
					  1731 #Apia
					  1328 #Qindao
                    }	
  # Germany 1914 techs 
  # ###################### 
   techapps               = { 
	#Infantry Division  
	1010  1020 1030 1040
	#CAVALRY 
	13060 13070 13080 1310  
	#Mountain Division 
	1160 1170 1180
   	#Naval Infantry
	#Engineers
	1830
	#Supply 
	1910 1920
	

	#Tank 
	#Field Artillery 
	2290 2300 
	#Anti-Tank Artillery 
	#Static Anti-Air Artillery 
	#Anti-Air Artillery Brigade 
	#Basic Armoured Car  
	2860

	#Improved Destroyer 
	3010 3020 3030
	#Basic Light Cruiser 
	3110 3120 3130
	#Improved Heavy Cruiser 
	3210 3220 3230  
	#Early Battleship 
	3410 3420 3430 3440
	#Early Battlecruiser
	3310 3320
	#Short Range Submarine 
	3610 3620
	#fleet Carrier 
	#Light carrier 
	#Troopships
	3810
	#ASW
	#Torpedos
	3720
	
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
	4740
	
	#Census Tabulating Machine 
	5310
	#Medicine
	5600
	#Agriculture 
	5700
	#Construction Engineering 
	5800 5080
	#MANUFACTURING 
	5810
	#Basic Oil Refining 
	#Basic Decimetric Radar Warning Sites
	#Faculty of Atomic Research 

	#Landdoctrine ww1 - exp central  germany, turkey, austr, hun, bul, russia
	6500 6510  6530 6590 6600
	#Air Doctrines - ww1 techs
	27480 27490 27500 27510
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8510
	8520 8550 8900 8910
	#Great War Hospital System 
	14000
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 3 
   free_market    = 6 
   freedom      = 4 
   professional_army = 4 
   defense_lobby     = 9 
   interventionism  = 10 
   } 
   headofstate            = {  type = 9 id = 855001  } # Wilhelm II
   headofgovernment       = {  type = 9 id = 855004  } # Theobald von Bethmann-Hollweg
   foreignminister        = {  type = 9 id = 855010  } # Gottlieb von Jagow
   armamentminister       = {  type = 9 id = 855050  } # Hermann Kühn
   ministerofsecurity     = {  type = 9 id = 855056  } # Clemens von Delbrück
   ministerofintelligence = {  type = 9 id = 855067  } # Walter Nicolai
   chiefofstaff           = {  type = 9 id = 855072  } # Helmuth von Moltke
   chiefofarmy 			  = { type = 9 id =  855080  } # Helmuth von Moltke
   chiefofnavy            = {  type = 9 id = 855094  } # Hugo von Pohl
   chiefofair             = {  type = 9 id = 855100  } # Walter von Eberhardt
   
	peacetime_ic_mod       = 0.8 
    wartime_ic_mod       = 0.8    
   
  dormant_leaders    = {  544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 
               574 575 576 577 578 579 
                } 
				
	dormant_ministers = {
	# Weimar Republic
	855200	#Vollzugsrat
	855201	#Zentralrat
	855202	#Friedrich Ebert
	855203	#Friedrich Ebert
	855204	#Philipp Heinrich Scheidemann
	855205	#Gustav Adolf Bauer
	855206	#Hermann Müller
	855207	#Constantin Fehrenbach
	855208	#Joseph Wirth
	855209	#Wilhelm Carl Josef Cuno
	855210	#Gustav Stresemann
	855211	#Wilhelm Marx
	855212	#Hugo Haase
	855213	#Ulrich von Brockdorff-Rantzau
	855214	#Hermann Müller
	855215	#Adolf Köster
	855216	#Walter Simons
	855217	#Friedrich Rosen
	855218	#Karl Joseph Wirth
	855219	#Walther Rathenau
	855220	#Frederic von Rosenberg
	855221	#Gustav Stresemann
	855222	#Philipp Heinrich Scheidemann
	855223	#Eugen Schiffer
	855224	#Bernhard Dernburg
	855225	#Matthias Erzberger
	855226	#Joseph Wirth
	855227	#Andreas Hermes
	855228	#Rudolf Hilferding
	855229	#Hans Luther
	855230	#August Müller
	855231	#Rudolf Wissell
	855232	#Robert Schmidt
	855233	#Ernst Scholz
	855234	#Johann Becker
	855235	#Hans von Raumer
	855236	#Joseph Koeth
	855237	#Eduard Hamm
	855238	#Walther Reinhardt
	855239	#Gustav Noske
	855240	#Otto Geßler
	855241	#Friedrich Ebert
	855242	#Hugo Preuß
	855243	#Eduard David
	855244	#Erich Koch-Weser
	855245	#Georg Gradnauer
	855246	#Adolf Köster
	855247	#Rudolf Oeser
	855248	#Wilhelm Sollmann
	855249	#Karl Jarres
	855250	#Martin Schiele
	855251	#Martin Braune
	855252	#Ferdinand Boehmer
	855253	#Leo Riedel
	855254	#Friedrich Gempp
	855255	#Paul von Hindenburg
	855256	#Hans von Seeckt
	855257	#Wilhelm Heye
	855258	#Otto Hasse
	855259	#Wilhelm Groener
	855260	#Walther Reinhardt
	855261	#Hans von Seeckt
	855262	#Maximilian Rogge
	855263	#Adolf von Trotha
	855264	#William Michaelis
	855265	#Paul Behncke
	855266	#Hans Zenker
	855267	#Hermann von der Lieth-Thomsen
	855268	#Ernst von Hoeppner
	855269	#Wilhelm Haehnelt
	
	# Völkisch Movement
	855300	#Erich Ludendorff
	855301	#Paul von Hindenburg
	855302	#Adolf Hitler
	855303	#Wilhelm II
	855304	#Wilhelm III
	855305	#Walther von Lüttwitz
	855306	#Wolfgang Kapp
	855307	#Gustav Noske
	855308	#Adolf Hitler
	855309	#Gregor Strasser
	855310	#Walther von Lüttwitz
	855311	#Ulrich von Hassell
	855312	#Albrecht von Graefe
	855313	#Franz von Reichenau
	855314	#Heinrich Claß
	855315	#Johann Albrecht zu Mecklenburg
	855316	#Alfred Hugenberg
	855317	#Gottfried Feder
	855318	#Oskar Hergt
	855319	#Hermann Dietrich
	855320	#Max Rötger
	855321	#Hugo Stinnes
	855322	#Ernst von Wrisberg
	855323	#Otto von Lossow
	855324	#Alfred von Tirpitz
	855325	#Wilhelm Kube
	855326	#Wilhelm Frick
	855327	#Christian Roth
	855328	#Hans Heinrich Lammers
	855329	#Kuno von Westarp
	855330	#Traugott von Jagow
	855331	#Hans von Seißer
	855332	#Wilhelm Canaris
	855333	#Hermann Ehrhardt
	855334	#Walter Nicolai
	855335	#Alfred von Tirpitz
	855336	#Magnus Levetzow
	855337	#Adolf von Trotha
	855338	#Max von Grapow
	855339	#Walther von Lüttwitz
	855340	#Rüdiger von der Goltz
	855341	#Erich Ludendorff
	855342	#Paul von Hindenburg
	855343	#Oskar von Hutier
	855344	#August von Mackensen
	855345	#Paul von Lettow-Vorbeck
	855346	#Ludwig von Estorff
	855347	#Burghard von Oven
	855348	#Otto von Lossow
	855349	#Hermann von der Lieth-Thomsen
	855350	#Ernst von Hoeppner
	855351	#Wilhelm Haehnelt
	855352	#Hermann Göring
	855353	#Karl Helfferich
	855354	#Max Wallraf
	855355	#Karl Helfferich
								}
	
  landunit = 
  {   
 location = 163
 name   = "Oberste Heeresleitung" 
 id    = {  type = 10100 id = 1  } 
   Division = 
   {  id    = {  type = 10100 id = 2  } 
    name   = "Grosser Generalstab" 
    type   = hq 
	model = 1
    strength = 90  
	experience = 20
    } 
   } 
  landunit = 
  {  location = 105 
   name   = "Festung Kolmar" 
   id    = {  type = 10100 id = 3  } 
   Division = 
   {  id    = {  type = 10100 id = 4  } 
    name   = "39. Reserve-Division" 
    type   = infantry
  model = 2
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  location = 104 
   name   = "Festung Metz" 
   id    = {  type = 10100 id = 5  } 
   Division = 
   {  id    = {  type = 10100 id = 6  } 
    name   = "33. Reserve-Division" 
    type   = infantry
  model = 2
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  location = 107 
   name   = "Festung Strassburg" 
   id    = {  type = 10100 id = 7  } 
   Division = 
   {  id    = {  type = 10100 id = 8  } 
    name   = "30. Reserve-Division" 
    type   = infantry
  model = 2
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  location = 222 
   name   = "Festung Thorn" 
   id    = {  type = 10100 id = 9  } 
   Division = 
   {  id    = {  type = 10100 id = 10  } 
    name   = "35. Reserve-Division" 
    type   = infantry
  model = 2
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  location = 163 
 name   = "Gardekorps" 
 id    = {  type = 10100 id = 11  } 
   Division = 
   {  id    = {  type = 10100 id = 12  } 
    name   = "II. Armee" 
    type   = hq 
	model = 1
    strength = 75
	experience = 0  
    } 
   Division = 
   {  id    = {  type = 10100 id = 13  } 
    name   = "1. Garde-Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra  = artillery
brigade_model = 0	
	experience = 10
  
    } 
   Division = 
   {  id    = {  type = 10100 id = 14  } 
    name   = "2. Garde-Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra  = engineer 
	brigade_model = 0
	experience = 0
    } 
   } 
  landunit = 
  {  location = 163 
 name   = "Garde-Reservekorps" 
 id    = {  type = 10100 id = 15  } 
   Division = 
   {  id    = {  type = 10100 id = 16  } 
    name   = "3. Garde-Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 10
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 17  } 
    name   = "1. Garde-Reserve-Division" 
    type   = infantry
  model = 2 
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  location = 179 
   name   = "Höhere-Kavallerie-Kommando Nr.1" 
   id    = {  type = 10100 id = 18  } 
   Division = 
   {  id    = {  type = 10100 id = 19  } 
    name   = "Garde-Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 15
    } 
   Division = 
   {  id    = {  type = 10100 id = 20  } 
    name   = "3. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
    } 
   Division = 
   {  id    = {  type = 10100 id = 21  } 
    name   = "5. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   } 
  landunit = 
  {  location = 163 
   name   = "Höhere-Kavallerie-Kommando Nr.2" 
   id    = {  type = 10100 id = 22  } 
   Division = 
   {  id    = {  type = 10100 id = 23  } 
    name   = "2. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 24  } 
    name   = "4. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 25  } 
    name   = "9. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   } 
  landunit = 
  {  location = 134 
   name   = "Höhere-Kavallerie-Kommando Nr.3" 
   id    = {  type = 10100 id = 26  } 
   Division = 
   {  id    = {  type = 10100 id = 27  } 
    name   = "7. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 28  } 
    name   = "8. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 29  } 
    name   = "Bayerische Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   } 
  landunit = 
  {  location = 136 
   name   = "Höhere-Kavallerie-Kommando Nr.4" 
   id    = {  type = 10100 id = 30  } 
   Division = 
   {  id    = {  type = 10100 id = 31  } 
    name   = "6. Kavallerie-Division" 
    type   = cavalry
  model = 3 
    strength = 50
	experience = 0
    } 
   } 
  landunit = 
  {  location = 152
   name   = "Höhere Landwehr-Kommandeur 1" 
   id    = {  type = 10100 id = 32  } 
   Division = 
   {  id    = {  type = 10100 id = 33  } 
    name   = "1. Landwehr-Division" 
    type   = infantry
  model = 1 
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  location = 136
   name   = "Höhere Landwehr-Kommandeur 2" 
   id    = {  type = 10100 id = 34  } 
   Division = 
   {  id    = {  type = 10100 id = 35  } 
    name   = "2. Landwehr-Division" 
    type   = infantry
  model = 1 
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  location = 224
   name   = "Höhere Landwehr-Kommandeur 3" 
   id    = {  type = 10100 id = 36  } 
   Division = 
   {  id    = {  type = 10100 id = 37  } 
    name   = "3. Landwehr-Division" 
    type   = infantry
  model = 1 
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  location = 224
   name   = "Höhere Landwehr-Kommandeur 4" 
   id    = {  type = 10100 id = 38  } 
   Division = 
   {  id    = {  type = 10100 id = 39  } 
    name   = "4. Landwehr-Division" 
    type   = infantry
  model = 1 
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  location = 184
   name   = "I. Armeekorps" 
   id    = {  type = 10100 id = 40  } 
   Division = 
   {  id    = {  type = 10100 id = 41  } 
    name   = "1. Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = artillery
	brigade_model = 0
	experience = 10
    } 
   Division = 
   {  id    = {  type = 10100 id = 42  } 
    name   = "2. Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = engineer
	brigade_model = 0
	experience = 5
    } 
   } 
  landunit = 
  {  location = 184 
   name   = "I. Reservekorps" 
   id    = {  type = 10100 id = 43  } 
   Division = 
   {  id    = {  type = 10100 id = 44  } 
    name   = "1. Reserve-Division" 
    type   = infantry
  model = 2 
  strength = 10
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 45  } 
    name   = "36. Reserve-Division" 
    type   = infantry
  model = 2 
  strength = 10
	experience = 0
    } 
   }  
  landunit = 
  {  location = 179
   name   = "I. Bayerisches Armeekorps" 
   id    = {  type = 10100 id = 46  } 
   Division = 
   {  id    = {  type = 10100 id = 47  } 
    name   = "IV. Armee" 
    type   = hq 
	model = 1
    strength = 75
	experience = 5
    } 
   Division = 
   {  id    = {  type = 10100 id = 48  } 
    name   = "1. Bayerisches Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = artillery
	brigade_model = 0
	experience = 5
    } 
   Division = 
   {  id    = {  type = 10100 id = 49  } 
    name   = "2. Bayerisches Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = engineer
	brigade_model = 0
	experience = 5
    } 
   } 
  landunit = 
  {  location = 179
   name   = "I. Bayerisches Reservekorps" 
   id    = {  type = 10100 id = 50  } 
   Division = 
   {  id    = {  type = 10100 id = 51  } 
    name   = "1.Bayerisches Reserve-Division" 
    type   = infantry
  model = 2 
  strength = 10
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 52  } 
    name   = "5. Bayerisches Reserve-Division" 
    type   = infantry
  model = 2 
  strength = 10
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 53  } 
    name   = "Bayerisches Landwehr-Division" 
    type   = infantry
  model = 1 
  strength = 5
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 54  } 
    name   = "Bayerisches Ersatz-Division" 
    type   = infantry
  model = 0 
  strength = 5
	experience = 0
    } 
   }  
  landunit = 
  {  location = 158
   name   = "II. Armeekorps" 
   id    = {  type = 10100 id = 55  } 
   Division = 
   {  id    = {  type = 10100 id = 56  } 
    name   = "3. Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = artillery
	brigade_model = 0
	experience = 5
    } 
   Division = 
   {  id    = {  type = 10100 id = 57  } 
    name   = "4. Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = engineer
	brigade_model = 0
	experience = 0
    } 
   } 
  landunit = 
  {  location = 180
   name   = "II. Bayerisches Armeekorps" 
   id    = {  type = 10100 id = 58  } 
   Division = 
   {  id    = {  type = 10100 id = 59  } 
    name   = "3. Bayerisches Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = artillery
	brigade_model = 0
	experience = 5
    } 
   Division = 
   {  id    = {  type = 10100 id = 60  } 
    name   = "4. Bayerisches Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = engineer
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 61  } 
    name   = "8. Ersatz-Division" 
    type   = infantry
  model = 0 
  strength = 5
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 62  } 
    name   = "10. Ersatz-Division" 
    type   = infantry
  model = 0 
  strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  location = 163
   name   = "III. Armeekorps" 
   id    = {  type = 10100 id = 63  } 
   Division = 
   {  id    = {  type = 10100 id = 64  } 
    name   = "5. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 65  } 
    name   = "6. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 177 
 name   = "III. Reservekorps" 
 id    = {  type = 10100 id = 66  } 
   Division = 
   {  id    = {  type = 10100 id = 67  } 
 name   = "5. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 68  } 
 name   = "6. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
  landunit = 
  {  location = 177
   name   = "III. Bayerisches Armeekorps" 
   id    = {  type = 10100 id = 69  } 
   Division = 
   {  id    = {  type = 10100 id = 70  } 
    name   = "5. Bayerisches Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = artillery
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 71  } 
    name   = "6. Bayerisches Infanterie-Division" 
    type   = infantry
  model = 3
    strength = 80 
  extra = engineer
	brigade_model = 0
	experience = 0
    } 
   } 
  landunit = 
  {  location = 169
   name   = "IV. Armeekorps" 
   id    = {  type = 10100 id = 72  } 
   Division = 
   {  id    = {  type = 10100 id = 73  } 
    name   = "7. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 74  } 
    name   = "8. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 169
 name   = "IV. Reservekorps" 
 id    = {  type = 10100 id = 75  } 
   Division = 
   {  id    = {  type = 10100 id = 76  } 
 name   = "7. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 77  } 
 name   = "22. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
 landunit = {   
 location = 224
 name   = "V. Armeekorps" 
 id = {  type = 10100 id = 78  } 
   Division = 
   {   
 id    = {  type = 10100 id = 79  } 
 name   = "VIII. Armee" 
 type   = hq
  model = 1
    strength = 75 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 80  } 
    name   = "9. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 81  } 
    name   = "10. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 224
 name   = "V. Reservekorps" 
 id    = {  type = 10100 id = 82  } 
   Division = 
   {  id    = {  type = 10100 id = 83  } 
 name   = "3. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 84  } 
 name   = "9. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10
	experience = 0 
    } 
   Division = 
   {  id    = {  type = 10100 id = 85  } 
 name   = "10. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
 landunit = {   
 location = 167
 name   = "VI. Armeekorps" 
 id = {  type = 10100 id = 86  } 
   Division = 
   {  id    = {  type = 10100 id = 87  } 
    name   = "11. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 88  } 
    name   = "12. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 167
 name   = "VI. Reservekorps" 
 id    = {  type = 10100 id = 89  } 
   Division = 
   {  id    = {  type = 10100 id = 90  } 
 name   = "11. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 91  } 
 name   = "12. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
 landunit = {   
 location = 141
 name   = "VII. Armeekorps" 
 id = {  type = 10100 id = 92  } 
   Division = 
   {  id    = {  type = 10100 id = 93  } 
    name   = "13. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 94  } 
    name   = "14. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 141
 name   = "VII. Reservekorps" 
 id    = {  type = 10100 id = 95  } 
   Division = 
   {  id    = {  type = 10100 id = 96  } 
 name   = "13. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 97  } 
 name   = "14. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
 landunit = {   
 location = 129
 name   = "VIII. Armeekorps" 
 id = {  type = 10100 id = 98  } 
   Division = 
   {  id    = {  type = 10100 id = 99  } 
    name   = "15. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 2
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 100  } 
    name   = "16. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 129
 name   = "VIII. Reservekorps" 
 id    = {  type = 10100 id = 101  } 
   Division = 
   {  id    = {  type = 10100 id = 102  } 
 name   = "15. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 103  } 
 name   = "16. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
 landunit = {   
 location = 152
 name   = "IX. Armeekorps" 
 id = {  type = 10100 id = 104  } 
   Division = 
   {  id    = {  type = 10100 id = 105  } 
    name   = "17. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 106  } 
    name   = "18. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 152
 name   = "IX. Reservekorps" 
 id    = {  type = 10100 id = 107  } 
   Division = 
   {  id    = {  type = 10100 id = 108  } 
 name   = "17. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 109  } 
 name   = "18. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
 landunit = {   
 location = 146
 name   = "X. Armeekorps" 
 id = {  type = 10100 id = 110  } 
   Division = 
   {   
 id    = {  type = 10100 id = 111  } 
 name   = "III. Armee" 
 type   = hq
  model = 1
    strength = 75 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 112  } 
    name   = "19. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 10
      } 
   Division = 
   {  id    = {  type = 10100 id = 113  } 
    name   = "20. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 10
      } 
   } 
 landunit = {   
 location = 146
 name   = "X. Reservekorps" 
 id    = {  type = 10100 id = 114  } 
   Division = 
   {  id    = {  type = 10100 id = 115  } 
 name   = "2. Reserve-Garde-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 116  } 
 name   = "19. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 	
experience = 0
    } 
   } 
 landunit = {   
 location = 137
 name   = "XI. Armeekorps" 
 id = {  type = 10100 id = 117  } 
   Division = 
   {  id    = {  type = 10100 id = 118  } 
    name   = "22. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 119  } 
    name   = "38. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 173
 name   = "XII. (I. sächs.) Armeekorps" 
 id = {  type = 10100 id = 120  } 
   Division = 
   {  id    = {  type = 10100 id = 121  } 
    name   = "23. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 122  } 
    name   = "32. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 173
 name   = "XII. (sächs.) Reservekorps" 
 id    = {  type = 10100 id = 123  } 
   Division = 
   {  id    = {  type = 10100 id = 124  } 
 name   = "23. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 125  } 
 name   = "24. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   } 
 landunit = {   
 location = 134
 name   = "XIII. (württemb.) Armeekorps" 
 id = {  type = 10100 id = 126  } 
   Division = 
   {   
 id    = {  type = 10100 id = 127  } 
 name   = "VI. Armee" 
 type   = hq
  model = 1
    strength = 75 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 128  } 
    name   = "26. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 129  } 
    name   = "27. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 130  } 
 name   = "4. Ersatz-Division" 
 type   = infantry
  model = 0 
 strength = 5
	experience = 0
    } 
   } 
 landunit = {   
 location = 136
 name   = "XIV. Armeekorps" 
 id = {  type = 10100 id = 131  } 
   Division = 
   {   
 id    = {  type = 10100 id = 132  } 
 name   = "V. Armee" 
 type   = hq
  model = 1
    strength = 75 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 133  } 
    name   = "28. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 134  } 
    name   = "29. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 136
 name   = "XIV. Reservekorps" 
 id    = {  type = 10100 id = 135  } 
   Division = 
   {  id    = {  type = 10100 id = 136  } 
 name   = "26. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 137  } 
 name   = "18. Reserve-Division" 
 type   = infantry
  model = 2 
 strength = 10 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 138  } 
 name   = "Garde-Ersatz-Division" 
 type   = infantry
  model = 0 
 strength = 5
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 139  } 
 name   = "19. Ersatz-Division" 
 type   = infantry
  model = 0 
 strength = 5
	experience = 0
    } 
   } 
 landunit = {   
 location = 107
 name   = "XV. Armeekorps" 
 id = {  type = 10100 id = 140  } 
   Division = 
   {  id    = {  type = 10100 id = 141  } 
    name   = "30. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 142  } 
    name   = "39. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 104
 name   = "XVI. Armeekorps" 
 id = {  type = 10100 id = 143  } 
   Division = 
   {  id    = {  type = 10100 id = 144  } 
    name   = "33. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 145  } 
    name   = "34. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 181
 name   = "XVII. Armeekorps" 
 id = {  type = 10100 id = 146  } 
   Division = 
   {   
 id    = {  type = 10100 id = 147  } 
 name   = "I. Armee" 
 type   = hq
  model = 1
    strength = 75 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 148  } 
    name   = "35. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 149  } 
    name   = "36. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 138
 name   = "XVIII. Armeekorps" 
 id = {  type = 10100 id = 150  } 
   Division = 
   {  id    = {  type = 10100 id = 151  } 
    name   = "21. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 152  } 
    name   = "25. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 0
      } 
   } 
 landunit = {   
 location = 138
 name   = "XVIII. Reservekorps" 
 id = {  type = 10100 id = 153  } 
   Division = 
   {  id    = {  type = 10100 id = 154  } 
    name   = "21. Reserve-Division" 
    type   = infantry
  model = 2 
    strength = 10
	experience = 0
      } 
   Division = 
   {  id    = {  type = 10100 id = 155  } 
    name   = "25. Reserve-Division" 
    type   = infantry
  model = 2 
    strength = 10
	experience = 0
   } 
  } 
 landunit = {   
 location = 170
 name   = "XIX. (II. sächs.) Armeekorps" 
 id = {  type = 10100 id = 156  } 
   Division = 
   {  id    = {  type = 10100 id = 157  } 
    name   = "24. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 158  } 
    name   = "40. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 185
 name   = "XX. Armeekorps" 
 id = {  type = 10100 id = 159  } 
   Division = 
   {  id    = {  type = 10100 id = 160  } 
    name   = "37. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 161  } 
    name   = "40. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 
 landunit = {   
 location = 127
 name   = "XXI. Armeekorps" 
 id = {  type = 10100 id = 162  } 
   Division = 
   {   
 id    = {  type = 10100 id = 163  } 
 name   = "VII. Armee" 
 type   = hq
  model = 1
    strength = 75 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 10100 id = 164  } 
    name   = "31. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = artillery
	brigade_model = 0
	experience = 5
      } 
   Division = 
   {  id    = {  type = 10100 id = 165  } 
    name   = "42. Infanterie-Division" 
    type   = infantry
  model = 3 
    strength = 80
    extra     = engineer
	brigade_model = 0
	experience = 5
      } 
   } 

########################################
#
# colonial troops 
#
########################################

 landunit = {   
 location = 850
 name   = "Kaiserliche Schutztruppe für Deutsch-Ostafrika" 
 id = {  type = 10100 id = 169  }
 leader = 855031 # Paul von Lettow-Vorbeck

   Division = 
   {   
 id    = {  type = 10100 id = 170  } 
 name   = "Ostafrikanische Schutztruppe" 
 type   = militia
  model = 1 
    strength = 35
	experience = 10
    } 
   }

 landunit = {   
 location = 1328
 name   = "Schutzgebiet Kiautschou" 
 id = {  type = 10100 id = 179  }
  leader = 855497 # admiral Meyer-Waldeck
 
   Division = 
   {   
 id    = {  type = 10100 id = 180  } 
 name   = "Schutzgebiet Kiautschou" 
 type   = garrison
  model = 0
    strength = 5
    max_strength = 5 
    locked = yes
    } 
   } 


#### Kaiserliche Marine 1914 ######################
#
#
# http://www.gwpda.org/naval/hsfbsco.htm
# http://de.wikipedia.org/wiki/Kaiserliche_Marine#Hochseeflotte
#
#
###################################################

 navalunit = {   
 id = {  type = 10100 id = 503  }  
 name = "Ostasiengeschwader"  
 location = 1328 # Tsingtao   
  base = 1328
 leader = 855033 # Maximilan von Spee
 
	 Division = {  id = {  type = 10100 id = 504  } name = "SMS Scharnhorst" type = heavy_cruiser model = 1 experience = 30  }  
     Division = {  id = {  type = 10100 id = 505  } name = "SMS Gneisenau" type = heavy_cruiser model = 1 experience = 30  }  
     Division = {  id = {  type = 10100 id = 506  } name = "SMS Nürnberg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 507  } name = "SMS Leipzig" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 508  } name = "SMS Emden" type = light_cruiser model = 2  }  
     Division = {  id = {  type = 10100 id = 509  } name = "S90" strength = 10 max_strength = 10 type = destroyer model = 0  } 
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 510  }  
     name = "SMS Dresden"  
     location = 2317 # at sea in the Caribbean 
  
     Division = {  id = {  type = 10100 id = 511  } name = "SMS Dresden" type = light_cruiser model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 512  }  
     name = "SMS Karlsruhe"  
     location = 909 # at sea in the Atlantic 
  
     Division = {  id = {  type = 10100 id = 513  } name = "SMS Karlsruhe" type = light_cruiser model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 514  }  
     name = "SMS Königsberg"  
     location = 850 # Dar es Salaam  
     base = 850 # Dar es Salaam  
  
     Division = {  id = {  type = 10100 id = 515  } name = "SMS Königsberg" type = light_cruiser model = 1  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 516  }  
     name = "Küstenverteidigungsgruppe Ostsee"  
     location = 153 # Rostock  
     base = 153 # Rostock  
  
     Division = {  id = {  type = 10100 id = 517  } name = "SMS Friedrich Karl" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 518  } name = "SMS Augsburg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 519  } name = "SMS Magdeburg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 520  } name = "SMS Lübeck" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 521  } name = "SMS Amazone" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 522  } name = "SMS Undine" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 523  } name = "SMS Thetis" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 524  } name = "SMS Gazelle" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 525  } name = "G 39" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 526  } name = "G 88" type = destroyer model = 0  } 
  }  
  
 navalunit = {   
     id = {  type = 10100 id = 527  }  
     name = "1. Aufklärungsschwadron"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen  
  
     Division = {  id = {  type = 10100 id = 528  } name = "SMS Seydlitz" type = battlecruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 529  } name = "SMS von der Tann" type = battlecruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 530  } name = "SMS Moltke" type = battlecruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 531  } name = "SMS Blücher" type = heavy_cruiser model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 532  }  
     name = "2. Aufklärungsschwadron"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen  
  
     Division = {  id = {  type = 10100 id = 533  } name = "SMS Straßburg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 534  } name = "SMS Straslund" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 536  } name = "SMS Kolberg" type = light_cruiser model = 1  } 
     Division = {  id = {  type = 10100 id = 650  } name = "SMS Mainz" type = light_cruiser model = 1  } 
     Division = {  id = {  type = 10100 id = 651  } name = "SMS Köln" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 537  } name = "V 26" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 538  } name = "Vulkan" type = destroyer model = 2  }  
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 539  }  
     name = "3. Aufklärungsschwadron"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
  
     Division = {  id = {  type = 10100 id = 540  } name = "SMS München" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 541  } name = "SMS Danzig" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 542  } name = "SMS Stuttgart" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 543  } name = "SMS Hela" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 544  } name = "SMS Frauenlob" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 652  } name = "SMS Rostock" type = light_cruiser model = 1  }
    }  

 navalunit = {   
     id = {  type = 10100 id = 545  }  
     name = "4. Aufklärungsschwadron"  
     location = 152 # Kiel  
     base = 152 # Kiel  
  
     Division = {  id = {  type = 10100 id = 546  } name = "SMS Roon" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 547  } name = "SMS Yorck" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 548  } name = "SMS Prinz Adalbert" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 549  } name = "SMS Prinz Heinrich" type = heavy_cruiser model = 1  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 550  }  
     name = "5. Aufklärungsschwadron"  
     location = 153 # Rostock  
     base = 153 # Rostock  
  
     Division = {  id = {  type = 10100 id = 551  } name = "SMS Hansa" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 552  } name = "SMS Victoria Luise" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 553  } name = "SMS Hertha" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 554  } name = "SMS Vineta" type = light_cruiser model = 0  }  
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 555  }  
     name = "Küstenverteidigungsschwadron Weser"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
  
     Division = {  id = {  type = 10100 id = 556  } name = "SMS Berlin" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 557  } name = "SMS Ariadne" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 558  } name = "SMS Niobe" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 559  } name = "V 14" type = destroyer model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 560  }  
     name = "Küstenverteidigungsschwadron Elbe"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
  
     Division = {  id = {  type = 10100 id = 561  } name = "SMS Nymphe" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 562  } name = "SMS Medusa" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 563  } name = "7. Flottille" type = destroyer model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 564  }  
     name = "Flottenflaggschiff"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen  
  
     Division = {  id = {  type = 10100 id = 565  } name = "SMS Friedrich der Große" type = battleship model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 566  }  
     name = "I. Geschwader"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
     leader = 855219 # Wilhelm von Lans
  
     Division = {  id = {  type = 10100 id = 572  } name = "SMS Ostfriesland" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 571  } name = "SMS Helgoland" type = battleship model = 2  }   
     Division = {  id = {  type = 10100 id = 573  } name = "SMS Thüringen" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 574  } name = "SMS Oldenburg" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 567  } name = "SMS Nassau" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 568  } name = "SMS Westfalen" type = battleship model = 2  } 
     Division = {  id = {  type = 10100 id = 569  } name = "SMS Rheinland" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 570  } name = "SMS Posen" type = battleship model = 2  }      
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 575  }  
     name = "II. Geschwader"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
     leader = 855032 # Reinhard Scheer
  
     Division = {  id = {  type = 10100 id = 616  } name = "SMS Preußen" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 576  } name = "SMS Deutschland" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 578  } name = "SMS Hannover" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 653  } name = "SMS Pommern" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 580  } name = "SMS Schleswig-Holstein" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 579  } name = "SMS Schlesien" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 577  } name = "SMS Hessen" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 583  } name = "SMS Lothringen" type = battleship model = 1  } 
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 584  }  
     name = "III. Geschwader"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
     # leader = Konteradmiral Felix Funke -> Ehrhardt Schmidt
  
     Division = {  id = {  type = 10100 id = 588  } name = "SMS Prinzregent Luitpold" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 585  } name = "SMS Kaiser" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 586  } name = "SMS Kaiserin" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 587  } name = "SMS König Albert" type = battleship model = 2  }    
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 589  }  
     name = "IV. Geschwader"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
     leader = 855514 # Erhard Schmidt
  
     Division = {  id = {  type = 10100 id = 590  } name = "SMS Wittelsbach" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 591  } name = "SMS Wettin" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 594  } name = "SMS Zähringen" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 593  } name = "SMS Schwaben" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 592  } name = "SMS Mecklenburg" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 581  } name = "SMS Braunschweig" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 582  } name = "SMS Elsaß" type = battleship model = 1  }     
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 595  }  
     name = "V. Geschwader"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
     # CO unknown
     leader = 855119 # Max von Grapow, from August
   
     Division = {  id = {  type = 10100 id = 598  } name = "SMS Kaiser Wilhelm II" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 600  } name = "SMS Kaiser Wilhelm der Große" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 599  } name = "SMS Kaiser Barbarossa" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 597  } name = "SMS Kaiser Friedrich III" type = battleship model = 1  }    
     Division = {  id = {  type = 10100 id = 601  } name = "SMS Kaiser Karl der Große" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 596  } name = "SMS Wörth" type = battleship model = 0  }  
     Division = {  id = {  type = 10100 id = 602  } name = "SMS Brandenburg" type = battleship model = 0  }  
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 603  }  
     name = "VI. Geschwader"  
     location = 152 # Kiel  
     base = 152
     leader = 855120 # Richard Eckermann
  
     Division = {  id = {  type = 10100 id = 611  } name = "SMS Hildebrand" type = heavy_cruiser model = 0  }
     Division = {  id = {  type = 10100 id = 604  } name = "SMS Beowulf" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 605  } name = "SMS Odin" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 606  } name = "SMS Ägir" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 607  } name = "SMS Frithjof" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 608  } name = "SMS Siegfried" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 609  } name = "SMS Hagen" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 610  } name = "SMS Heimdall" type = heavy_cruiser model = 0  }    
     Division = {  id = {  type = 10100 id = 612  } name = "3. Flottille" type = destroyer model = 0  }  
     Division = {  id = {  type = 10100 id = 613  } name = "8. Flottille" type = destroyer model = 0  }  
     Division = {  id = {  type = 10100 id = 614  } name = "9. Flottille" type = destroyer model = 0  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 615  }  
     name = "7. Schlachtschwadron"  
     location = 152 # Kiel  
     base = 152
     
     Division = {  id = {  type = 10100 id = 617  } name = "SMS Regensberg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 619  } name = "SMS Stettin" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 620  } name = "SMS Hamburg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 621  } name = "SMS Fürst Bismarck" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 622  } name = "SMS Freya" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 623  } name = "SMS Albatros" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 624  } name = "SMS Nautilus" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 625  } name = "SMS Gefion" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 626  } name = "SMS Bremen" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 627  } name = "SMS Kaiserin Augusta" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 628  } name = "SMS Arkona" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 629  } name = "10. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 630  } name = "11. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 631  } name = "12. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 632  } name = "13. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 633  } name = "14. Flottille" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 634  } name = "15. Flottille" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 635  } name = "16. Flottille" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 636  } name = "17. Flottille" type = destroyer model = 0  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 637  }  
     name = "U-bootdivision"  
     location = 154 # Hamburg  
     base = 154
  
     Division = {  id = {  type = 10100 id = 638  } name = "1. Flottille" type = submarine model = 0  }  
     Division = {  id = {  type = 10100 id = 639  } name = "2. Flottille" type = submarine model = 0  }  
     Division = {  id = {  type = 10100 id = 640  } name = "3. Flottille" type = submarine model = 0  }  
    }  
  
  navalunit = {   
     id = {  type = 10100 id = 641  }  
     name = "Mittelmeer-Division"  
     location = 406 # Pola # 2736 # Eastern Adriatic Sea  
     base = 406 # Pola
	 
    Division = {  id = {  type = 10100 id = 642  } name = "SMS Goeben" type = battlecruiser model = 0  }  
	 Division = {  id = {  type = 10100 id = 643  } name = "SMS Breslau" type = light_cruiser model = 2  } 
   }  

 ### Luftwaffe 2752 
 airunit = {   
 id = {  type = 10100 id = 800  }  
 name = "Luftschifftruppe"  
 base = 142 # Duesseldorf
 location = 142 # Duesseldorf
 leader = 855208 # Strasser

 Division = {  id = {  type = 10100 id = 801  } name = "Luftschiff-Abteilung 1"  
 strength = 15 type = tactical_bomber model = 1  } 
 Division = {  id = {  type = 10100 id = 802  } name = "Luftschiff-Abteilung 2"  
 strength = 15 type = tactical_bomber model = 0  } 
  } 

 airunit = {   
 id = {  type = 10100 id = 806  }  
 name = "Fliegertruppe - West"  
 base = 131 # Cologne
 location = 131 # Cologne
 
 Division = {  id = {  type = 10100 id = 807  } name = "Feldflieger-Abteilung 1"  
 strength = 8 type = interceptor model = 0  } 
  } 
 airunit = {   
 id = {  type = 10100 id = 808  }  
 name = "Fliegertruppe - Ost"  
 base = 224 # Poznan
 location = 224 # Poznan
 
 Division = {  id = {  type = 10100 id = 809  } name = "Feldflieger-Abteilung 2"  
 strength = 6 type = interceptor model = 0  } 
  } 
 airunit = {   
 id = {  type = 10100 id = 810  }  
 name = "Seefliegertruppe"  
 base =  152 # Kiel
 location =  152 # Kiel
 
 Division = {  id = {  type = 10100 id = 811  } name = "I. Seeflieger-Abteilung"  
 strength = 5 type = interceptor model = 0  } 
 Division = {  id = {  type = 10100 id = 812  } name = "II. Seeflieger-Abteilung"  
 strength = 5 type = interceptor model = 0  } 
  }  
   
   
   
  # ####under developement ##### 
 division_development = {   
     id = {  type = 10100 id = 644  }  
     name = "SMS Großer Kurfürst"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = july day = 30  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 645  }  
     name = "SMS König"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = august day = 10  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 646  }  
     name = "SMS Markgraf"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = october day = 1  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 647  }  
     name = "SMS Kronprinz"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = november day = 8  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 648  }  
     name = "SMS Derfflinger"  
     type = battlecruiser  
     model = 1  
     cost = 0.4  
     date = {  year = 1914 month = september day = 1  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 649  }  
     name = "SMS Lützow"  
     type = battlecruiser  
     model = 1 
     cost = 0.4  
     date = {  year = 1916 month = march day = 1 }  
    } 
 division_development = {   
     id = {  type = 10100 id = 654  }  
     name = "SMS Pillau"  
     type = light_cruiser 
     model = 2  
     cost = 0.2  
     date = {  year = 1914 month = december day = 1  }  
    } 
 division_development = {   
     id = {  type = 10100 id = 655  }  
     name = "SMS Graudenz"  
     type = light_cruiser 
     model = 2  
     cost = 0.2  
     date = {  year = 1914 month = august day = 1  }  
    }  

} 
