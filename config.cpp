class CfgPatches 
{
	class 1TAC_ADMIN_CONSOLE
	{
		units[] = {};
		weapons[] = {};
		worlds[] = {};
		requiredAddons[] = {"a3_data_f","a3data"};
		requiredVersion = 1.0;
		author = "Snippers";
		url = "www.teamonetactical.com";
	};
};

#include "defines.hpp"
#include "dialogs.hpp"

class CfgFunctions
{
	class tac1_admin
	{
		class adminMenu
		{
			file="1tac_admin\func";
			class Init { 
				postInit=1;
				file = "1tac_admin\init.sqf";
			};
			class actionAiHuntPlayers {};
			class actionGiveZeus {};
			class actionGiveZeusSelf {};
			class actionGroupTeleport {};
			class actionPlayerTeleport {};
			class actionZeusAddAllObjects {};
			class endMissionInstant {};
			class endMissionSmooth {};
			class fillMissionEndingBox {};
			class fillPlayerListBox {};
			class keyPressed {};
			class zeusAddAllObjects {};
			class zeusServerMake {};
			class zeusServerObjectPlacedSync {};
			class zeusSetupSync {};
			class teleportDrawMapIcons {};
			class teleportMapClick {};
			class teleportMapLoaded {};
			class messageAdmin {};
			class aiHuntPlayers {};
		};
		class scripts
		{
			file="1tac_admin\scripts";
			class checkMods {};
		};
	};
};
