 
 ############################## 
 # Country definition for CHC # 
 ############################## 
  

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHC 
   ai = "chc_1936.ai"
   dissent = 20
   intrinsic_gov_type     = leninist 
   extra_tc               = 7 
   capital                = 1259 # Yan'an 
   # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
   oil                    = 100 
   supplies               = 800 
   money                  = 50 
   manpower               = 220 #120 added to reinforce units 
   diplomacy = 
   {  relation = {  tag = JAP value = -200  } 
     relation = {  tag = MAN value = -100  } 
     relation = {  tag = CHI value = -200  } 
     relation = {  tag = CGX value = -200  } 
     relation = {  tag = CYN value = -200  } 
     # CHC protected by Shaanxi provincial governor who was secret communist
     relation = {  tag = CSX value = -75  } 
     relation = {  tag = CXB value = -100  } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = MON value = 25  }
     relation = {  tag = U67 value = 50  } 
     relation = {  tag = SIK value = 40  }
    } 
   SpyInfo                = {  country = "CHC" NumberOfSpies = 3  } 
   nationalprovinces      = {   
  
 #Communist China at start      
 1259 1260 1255 
  
 #Nationalist China  
 1333 1261 1303 1339 1334 1336 1340 1341 1319 1323 1322 1324 1325 1326 1316 1317 1344 1342 1337  1338 1345 1346 1347 1348  1357 1358  1359 1360 1354 1353 1318 1355 1309  1311 1312 1310  1304   1302  1258 1262 1257  1296 1292 1293 1297 1298  1305 1306 1291 1313 1307  1308  1356 1160 1349     1335    1314 1315    1267 1256   1320 1321  1299  1343  1300 1301 1350 1351 1352      
  
 #Yunnan          
 1389 1390    1385 1386 1387 1388 
  
 #Guanxi Clique  
  1378   1365 1376 1377  1375 510 1380 1381 1382 1383  1369 1370 1373  1379 1367 1361 1374 1368  
  
 #Shanxi       
  1241 1247 1246 1251  1242 1254  1331 1332  1252 1253 1248 1249 1250 1327  1243 1244 1245  1328 1329  1330   
  
 #Manchoukou 
 1202 1204 1212 1205 1199 1203 1200 1206 1213 1237  1207 1220 1218 2750 1236 1201 1208 1209     1210 1211 1214   1215  1216 1235 1217 1197 1198   
  
 #Xibei san ma            
 1269 1268 1270 1271 1264 1263 1272 1265 1266 1283 1284 1285   
  
 #Tibet       
 1294 1290 1286 1287 1288 1289 1295 
  
 #Sinkiang        
 1273 1279 1280 1281 1277 1274 1275 1282 
  
 #India        
 1278 1276  
  
 #Japan In China     
 1219 1238  1240 1239 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1362 1364 1363  
  
                             } 
   ownedprovinces         = {  1259 1260 1255  } 
   controlledprovinces    = {  1259 1260 1255  } 
   claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
						} 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010  
#Basic Armoured Car  
2860 2870 2880 2020   
#Great War Light Field Artillery  
2290  
#SW Tank 
7600 7610
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 1070 1080
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Early Mountain Division
1160 1170 1180 1190 1200 1210 1220 1230 1240
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Basic Construction Engineering 
5800 5080
#Engineers
1830 

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010   


} 
inventions = { 3000027 }
   blueprints             = {  } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     free_market       = 1 
     freedom           = 2 
     professional_army = 2 
     defense_lobby     = 10 
     interventionism   = 5 
    } 
   headofstate            = {  type = 9 id = 260001  } 
   headofgovernment       = {  type = 9 id = 260002  } 
   foreignminister        = {  type = 9 id = 260003  } 
   armamentminister       = {  type = 9 id = 260004  } 
   ministerofsecurity     = {  type = 9 id = 260005  } 
   ministerofintelligence = {  type = 9 id = 260006  } 
   chiefofstaff           = {  type = 9 id = 260007  } 
   chiefofarmy            = {  type = 9 id = 260008  } 
   chiefofnavy            = {  type = 9 id = 260009  } 
   chiefofair             = {  type = 9 id = 260010  } 
   # ###### 
   # COMMUNSIT CHINA OOB
   # 7000 from First Red Army arrived Oct 35 (15 divisions at 5% strength up to 20% by Jan 36)
   # 2 other units did not arrive until 1 year later
   # ###### 
   landunit = 
   {  location = 1260 # Yan'an 
     name     = "1. Fangmianjun" 
     id       = {  type = 24000 id = 1  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 2  } 
       name       = "1. Juntuan" 
       type       = bergsjaeger 
       strength  = 20 
       model      = 6 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 3  } 
       name       = "3. Juntuan" 
       type       = bergsjaeger 
       strength  = 20 
       model      = 6 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 4  } 
       name       = "5. Juntuan" 
       type       = bergsjaeger 
       strength  = 20 
       model      = 6 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 5  } 
       name       = "8. Juntuan" 
       type       = infantry 
       strength  = 20
       model      = 6 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 6  } 
       name       = "9. Juntuan" 
       type       = infantry 
       strength  = 20
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1255 
     name     = "2. Fangmianjun" 
     id       = {  type = 24000 id = 7  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 8  } 
       name       = "2. Juntuan" 
       type       = infantry 
       strength  = 20
       model      = 6 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 9  } 
       name       = "6. Juntuan" 
       type       = infantry 
       strength  = 20
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1259 # Xianyang 
     name     = "4. Fangmianjun" 
     id       = {  type = 24000 id = 10  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 11  } 
       name       = "4. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 12  } 
       name       = "9. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 13  } 
       name       = "30. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 14  } 
       name       = "31. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6
      } 
     dig_in   = 20.000
    } 
   landunit = 
   {  location = 1260 # Yan'an 
     name     = "15. Juntuan" 
     id       = {  type = 24000 id = 15  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 16  } 
       name       = "25. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 17  } 
       name       = "26. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 18  } 
       name       = "27. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 19  } 
       name       = "28. Jun" 
       type       = infantry 
       strength  = 20
       model      = 6
      } 
     dig_in   = 20.000 
    } 
  } 
 