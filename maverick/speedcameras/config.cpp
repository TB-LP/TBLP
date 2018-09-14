/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

//Customize your settings, to fit your server setup!
class Maverick_SpeedCameras {

    //Define the possible locations for your speed cameras.
    //position -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
    //direction -> Get the position via: diag_log((getDir player) - 90)
    //speedlimit -> Choose any value you like. In a zone where people should drive 50, make set it to 55 or 60, to catch those speeders!
	SpeedCameras[] = {
	  //{{<position>}, <direction>, <speedlimit>},

        //Tanoa//
        
		
		{{5825.78,10458.9,0.110928},187.15,50},
		{{5809.08,10466.8,0.272611},350.391,50},

        {{3605.94,13087.6,0}, 283.865, 20}, //Kavalla Martketplace [Altis]
        {{3777.49,13420.8,0}, 146.733, 65}  //Outside kavalla near the construction site [Altis]
	};
	
	//Define the radius in meter in front of the speed camera where it should be active. 25 Works well with default arma roads.
	Radius = 25;
	
	SideWhitelist[] = {
		//Side name to lower case!
		"west",//Prevent Police officers from triggering the speed camera
		"guer" //Prevent medics from triggering the speed camera
	};
	
    //Shall the user get its driver licenses revoked?
	RemoveLicenses[] = {
		//{ <License name to display in the hint 'msgRemoveLicense'>, <license_variable_name>, <how fast over the limit does he need to drive to get the license removed e.g 10>}
		{ "driver license" , "license_civ_driver", 30 },     //Remove the driver license if he was diriving faster than allowed by at least 1km/h
		{ "trucker license" , "license_civ_trucking", 30 }, //Remove the trucker license if he was diriving faster than allowed by at least 25km/h
	};

    //Shall the player be added to the wanted list with a speeding entry?
    AddPlayerToWanted      = 1;   				   // 0 = No | 1 = yes
	WantedCase			   = "4"; 				   //The number/numbers+charaters that describe the crime you want the player to be added for
	WantedFunction		   = "life_fnc_wantedAdd"; //Adjust if you use any other wanted add function name
	
    //Let the player pay a fine from his bank account
    SpeedingFee            = 500;			 // 0 = No fine payed | Any value over 0 $ will be then subtracted from the bank account
    EnableFactor           = 1;			 	 // 0 = No | 1 = yes -> SpeedingFee * Amount of speed the player was going to fast = 500$ * 24kmh = 12000$
	BankVariable		   = "life_atmbank"; //Adjust your bank account variable
	
	class localization {
	
		//Define the messages, which will be shown to the player, when he was driving too fast
		msgSpeedCamera		   = "Speedcamera";
		msgInfo                = "制限速度を %1 km/h 超過しました!";
		msgRemoveLicense 	   = "あなたの %1 が取り消されました!";
		msgWantedAdd  		   = "あなたに犯罪記録が付きました!";
		msgSpeedingFee         = "あなたはスピード違反のために %1$ の罰金を銀行口座から強制徴収致しました";
	};
};