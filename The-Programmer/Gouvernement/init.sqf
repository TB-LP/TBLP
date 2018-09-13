/*
_null=this execVM "The-Programmer\Gouvernement\init.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_ELECTION_GOUVERNEMENT","Max_Settings_Gouvernement","Gouvernement_Localization"] call theprogrammer_core_fnc_localize),{[] spawn max_gouvernement_fnc_electionMenu;}];
_this addAction [(["STR_DECLARE_REVENUS","Max_Settings_Gouvernement","Gouvernement_Localization"] call theprogrammer_core_fnc_localize),{[] spawn max_gouvernement_fnc_declareRevenuMenu;}];