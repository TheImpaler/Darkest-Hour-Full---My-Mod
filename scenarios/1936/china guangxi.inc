 
 ############################## 
 # Country definition for CGX # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CGX 
   regular_id             = CHI 
   intrinsic_gov_type     = paternal_autocrat 
   extra_tc               = 10 
   puppet                 = CHI 
   # Resource Reserves 
energy                 = 600
metal                  = 300
rare_materials         = 150
   transports = 100
   oil                    = 100 
   supplies               = 100 
   money                  = 50 
   capital                = 1378 # Guilin 
   manpower               = 32 
   dissent                = 40 
   diplomacy = 
   {  relation = {  tag = CHC value = -200  } 
     relation = {  tag = CHI value = 100  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = U67 value = 150  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
    } 
   SpyInfo                = {  country = "CGX" NumberOfSpies = 2  } 
   nationalprovinces      = {   1378 1365   1376 1377  1375  1380 1381 1382 1383  1369 1370 1373  1379 1367  1374 1368  } 
   ownedprovinces         = {   1378 1365   1376 1377  1375  1380 1381 1382 1383  1369 1370 1373  1379 1367  1374 1368  } 
   controlledprovinces    = {   1378 1365   1376 1377  1375  1380 1381 1382 1383  1369 1370 1373  1379 1367  1374 1368  } 
   # Guangxi 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 



#Great War Destroyer 
3010 3020 3030 3040
#Early Light Cruiser 
3110 3120 3130

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 2 
    } 
   headofstate            = {  type = 9 id = 585001  } 
   headofgovernment       = {  type = 9 id = 585002  } 
   foreignminister        = {  type = 9 id = 585003  } 
   armamentminister       = {  type = 9 id = 585004  } 
   ministerofsecurity     = {  type = 9 id = 585005  } 
   ministerofintelligence = {  type = 9 id = 585006  } 
   chiefofstaff           = {  type = 9 id = 585007  } 
   chiefofarmy            = {  type = 9 id = 585008  } 
   chiefofnavy            = {  type = 9 id = 585009  } 
   chiefofair             = {  type = 9 id = 585010  } 
   # ###### 
   # GUANGXI OOB 
   # ###### 
   landunit = 
   {  location = 1369 # Guangzhou 
     name     = "1. Juntuan" 
     # ## leader = # Chen Jitang 
     id       = {  type = 22400 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 2  } 
       name       = "Xunlian Bubing Shi" 
       type     = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 3  } 
       name       = "1. Duli Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 4  } 
       name       = "Jingbei Lü" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Shaoguan 
     name     = "1. Jun" 
     # ## leader = # Yu Hanmou 
     id       = {  type = 22400 id = 5  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 6  } 
       name       = "1. Bubing Shi" 
       type     = garrison 
       strength   = 40 
       model      = 2
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 7  } 
       name       = "2. Bubing Shi" 
       type     = garrison 
       strength   = 40 
       model      = 2
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 8  } 
       name       = "3. Bubing Shi" 
       type       = garrison 
       strength   = 40 
       model      = 2
      } 
    } 
   landunit = 
   {  location = 1375 # Shantou 
     name     = "2. Jun" 
     # ## leader = # Chang Ta 
     id       = {  type = 22400 id = 9  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 10  } 
       name       = "4. Bubing Shi" 
       type     = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 11  } 
       name       = "5. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 12  } 
       name       = "6. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Maoming 
     name     = "3. Jun" 
     # ## leader = # Yu Hanmou 
     id       = {  type = 22400 id = 13  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 14  } 
       name       = "7. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 15  } 
       name       = "8. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 16  } 
       name       = "9. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "4. Juntuan" 
     # ## leader = # Li Zongren 
     id       = {  type = 22400 id = 17  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 18  } 
       name       = "19. Lujun" 
       type       = militia 
       strength   = 30 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1382 # Liuzhou 
     name     = "7. Jun" 
     # ## leader = # Liao Lei 
     id       = {  type = 22400 id = 19  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 20  } 
       name       = "19. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 21  } 
       name       = "21. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 22  } 
       name       = "22. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 23  } 
       name       = "24. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1379 # Nanning 
     name     = "15. Jun" 
     # ## leader = # Xia Wei 
     id       = {  type = 22400 id = 24  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 25  } 
       name       = "42. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 26  } 
       name       = "43. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 27  } 
       name       = "44. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 28  } 
       name       = "45. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1369 # Guangzhou 
     name     = "Guangdong Jingbei" 
     id       = {  type = 22400 id = 29  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 30  } 
       name       = "Guangdong Baoantui" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "Guangxi Jingbei" 
     id       = {  type = 22400 id = 31  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 32  } 
       name       = "Guangdong Baoantui" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 33  } 
       name       = "Guangdong Bubing Jun" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1365 # Hainan 
     name     = "Hainan Jingbei" 
     id       = {  type = 22400 id = 34  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 35  } 
       name       = "9. Duli Lü" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1381 # Bose 
     name     = "9. Jun" 
     # ## leader = 50089 # Hao Menglin 
     id       = {  type = 22000 id = 20  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 21  } 
       name       = "9. Jun" 
       type       = militia 
	   strength  = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1382 # Liuzhou 
     name     = "28. Jun" 
     # leader = X # ? 
     id       = {  type = 22000 id = 67  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 68  } 
       name       = "28. Jun" 
       type       = militia 
	   strength  = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "Hunan Xi Jingbei" 
     # ## leader = # 
     id       = {  type = 22000 id = 192  } 
     Division = 
     {  experience   = 30 
       id           = {  type = 22000 id = 193  } 
       name         = "34. Xin Bubing Shi" 
       type         = militia 
       max_strength = 50 
       strength     = 50 
       model        = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Wuzhou 
     name     = "Ningbo Jingbei" 
     # ## leader = # 
     id       = {  type = 22000 id = 215  } 
     Division = 
     {  id           = {  type = 22000 id = 216  } 
       name         = "37. Duli Bubing Lü" 
       type         = militia 
       max_strength = 25 
       strength     = 25 
       model        = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Shaoguan 
     name     = "20. Jun" 
     # ## leader = 50162 # Guo Rudong 
     id       = {  type = 22000 id = 106  } 
     Division = 
     {  id    = {  type = 22000 id = 107  } 
       name  = "20. Jun" 
       type  = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1369 # Guangzhou 
     name     = "2. Jun" 
     # ## leader = 50050 # Jiang Dingwen 
     id       = {  type = 22000 id = 6  } 
     Division = 
     {  id    = {  type = 22000 id = 7  } 
       name  = "2. Jun" 
       type  = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1375 # Chao'an 
     name     = "16. Jun" 
     # ## leader = # Li Yunyan 
     id       = {  type = 22000 id = 36  } 
     Division = 
     {  id    = {  type = 22000 id = 37  } 
       name  = "16. Jun" 
       type  = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1375 # Shantou 
     name     = "36. Jun" 
     # ## leader = # Chou Hunyuan 
     id       = {  type = 22000 id = 87  } 
     Division = 
     {  id    = {  type = 22000 id = 88  } 
       name  = "36. Jun" 
       type  = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1381 # Bose 
     name     = "14. Lujun" 
     # ## leader = # 
     id       = {  type = 22000 id = 161  } 
     Division = 
     {  id    = {  type = 22000 id = 162  } 
       name  = "14. Lujun" 
       type  = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1382 # Liuzhou 
     name     = "18. Jun" 
     # ## leader = 50219 # Luo Zhuoying 
     id       = {  type = 22000 id = 38  } 
     Division = 
     {  id    = {  type = 22000 id = 39  } 
       name  = "18. Jun" 
       type  = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "26. Jun" 
     # ## leader = 50104 # Xiao Zhichu 
     id       = {  type = 22000 id = 62  } 
     Division = 
     {  id    = {  type = 22000 id = 63  } 
       name  = "26. Jun" 
       type  = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   # ##### NAVY OOB ###### 
   navalunit = 
   {  location = 1369 # Guangzhou 
     name     = "Guangdong Haijun" 
     id       = {  type = 22400 id = 40  } 
     base     = 1369 
     Division = 
     {  id    = {  type = 22400 id = 43  } 
       name  = "1. Yunshuji Dadui" 
       type  = transport 
       model = 0 
      } 
    } 
   # ##### AIR FORCE OOB ###### 
   airunit = 
   {  location = 1369 # Guangzhou 
     name     = "Guangxi Kongjun" 
     base     = 1369 # Guangzhou 
     id       = {  type = 22400 id = 38  } 
     Division = 
     {  id           = {  type = 22400 id = 39  } 
       name         = "Guangxi Hang Kong Dui" 
       type         = interceptor 
       model        = 5
       max_strength = 40 
       strength     = 20 
      } 
    } 
  } 
 