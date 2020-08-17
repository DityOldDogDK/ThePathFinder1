class CfgPatches
{
	class ThePathFinder
	{
		units[]=
		{
			"ThePathFinderSignwelcome",
			"ThePathFinderSignNoParking",
			"M65_camo_Dk",
			"PatrolPants_Dk",
			"Alicebackpack_camo_Dk",
			"TacticalHelmetcamo_Dk",
			"TacticalVestcamo_Dk",
			"TacticalGloves_camo_Dk",
			"PlateCarrier_Dk",
			"PlateCarrierHolster_Dk",
			"PlateCarrierPouches_Dk"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DayZExpansion_Scripts",
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Gear_Containers",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Characters_Pants",
			"DZ_Characters_Masks",
			"DZ_Characters_Belts",
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Gear_Tools",
			"DZ_Gear_Cooking",
			"DZ_Gear_Food",
			"DZ_Gear_Navigation",
			"DZ_Gear_Drinks",
			"DZ_Gear_Camping",
			"DZ_Gear_Optics",
			"DZ_Gear_Crafting",
			"DZ_Weapons_Firearms",
			"DZ_Radio",
			"DZ_Structures_Signs",
			"DZ_Structures",
			"DZ_Structures_Furniture",
			"DZ_Characters_Belts"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing;
	class Container_Base;
	class PlateCarrierVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class HighCapacityVest_ColorBase;
	class Mich2001Helmet;
	class M65Jacket_ColorBase;
	class AliceBag_ColorBase;
	class GorkaPants_ColorBase;
	class TacticalGloves_ColorBase;
	class Inventory_Base;
	class Grenade_Base;
	class Transmitter_Base;
	class ItemOptics;
	class EvocatusFatBillboard1Base;
	class ThePathFinderSignwelcome: EvocatusFatBillboard1Base
	{
		scope=2;
		displayName="ThePathFinderSignwelcome";
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\ThePathFinderSignwelcome\The_PathFinder_Signwelcome_co.paa"
		};
	};
	class EvocatusBillboard1Base;
	class ThePathFinderSignNoParking: EvocatusBillboard1Base
	{
		scope=2;
		displayName="ThePathFinderSignNoParking";
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\ThePathFinderSignNoParking\The_PathFinderSign_NoParking_co.paa"
		};
	};
	class M65_camo_Dk: M65Jacket_ColorBase
	{
		displayName="M65 camo Dk";
		descriptionShort="M65 Jacket Dk by DirtyOldDog";
		scope=2;
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1630;
		itemSize[]={1,1};
		itemsCargoSize[]={10,20};
		quickBarBonus=3;
		absorbency=0.2;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="HeavyJacket";
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\M65Jacket\M65_camo_Dk.paa",
			"ThePathFinder\data\M65Jacket\M65_camo_Dk.paa",
			"ThePathFinder\data\M65Jacket\M65_camo_Dk.paa"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\tops\Data\M65_Jacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\M65_Jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\tops\M65_Jacket_m.p3d";
			female="\DZ\characters\tops\M65_Jacket_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PatrolPants_Dk: GorkaPants_ColorBase
	{
		displayName="Patrol Pants camo Dk";
		descriptionShort="Patrol Pants by DirtyOldDog";
		ContinuouActions[]=
		{
			""
		};
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={1,1};
		itemsCargoSize[]={10,10};
		weight=400;
		ragQuantity=3;
		absorbency=0.2;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\Pants\PatrolPants_Dk.paa",
			"ThePathFinder\data\Pants\PatrolPants_Dk.paa",
			"ThePathFinder\data\Pants\PatrolPants_Dk.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\pants\gorka_pants_m.p3d";
			female="\DZ\characters\pants\gorka_pants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\GorkaEPants.rvmat",
								"DZ\characters\pants\Data\GorkaEPants_dropped.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\GorkaEPants.rvmat",
								"DZ\characters\pants\Data\GorkaEPants_dropped.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\GorkaEPants_damage.rvmat",
								"DZ\characters\pants\Data\GorkaEPants_dropped_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\GorkaEPants_damage.rvmat",
								"DZ\characters\pants\Data\GorkaEPants_dropped_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\GorkaEPants_destruct.rvmat",
								"DZ\characters\pants\Data\GorkaEPants_dropped_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Alicebackpack_camo_Dk: AliceBag_ColorBase
	{
		scope=2;
		displayName="Alicebackpack camo Dk";
		descriptionShort="Alicebackpack camo Dk by DirtyOldDog";
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\BPCamo\Alicebackpack_camo_Dk.paa",
			"ThePathFinder\data\BPCamo\Alicebackpack_camo_Dk.paa",
			"ThePathFinder\data\BPCamo\Alicebackpack_camo_Dk.paa"
		};
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestPouch",
			"Pistol",
			"firstaidkit"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={1,1};
		itemsCargoSize[]={10,20};
		weight=1600;
		absorbency=0.1;
		heatIsolation=0.1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\alicebackpack_m.p3d";
			female="\DZ\characters\backpacks\alicebackpack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TacticalHelmetcamo_Dk: Mich2001Helmet
	{
		displayName="Tactical Helmet camo";
		descriptionShort="Tactical Helmet camo by DirtyOldDog";
		scope=2;
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG",
			"helmetFlashlight",
			"BatteryD",
			"BatteryD"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={1,1};
		noMask=0;
		absorbency=0;
		heatIsolation=0.80000001;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\TacticalHelmetcamo\TacticalHelmet_camo_Dk.paa",
			"ThePathFinder\data\TacticalHelmetcamo\TacticalHelmet_camo_Dk.paa",
			"ThePathFinder\data\TacticalHelmetcamo\TacticalHelmet_camo_Dk.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\mich2001.rvmat",
								"DZ\characters\headgear\data\mich2001_rail.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\mich2001.rvmat",
								"DZ\characters\headgear\data\mich2001_rail.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\mich2001_damage.rvmat",
								"DZ\characters\headgear\data\mich2001_rail_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\mich2001_damage.rvmat",
								"DZ\characters\headgear\data\mich2001_rail_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\mich2001_destruct.rvmat",
								"DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Mich2001.p3d";
			female="\DZ\characters\headgear\Mich2001.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TacticalVestcamo_Dk: HighCapacityVest_ColorBase
	{
		displayName="Tactical Vest camo Dk";
		descriptionShort="Tactical Vest by DirtyOldDog";
		scope=2;
		color="camo_Dk";
		inventorySlot[]=
		{
			"Vest"
		};
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=2400;
		itemSize[]={1,1};
		itemsCargoSize[]={10,15};
		quickBarBonus=3;
		absorbency=0.1;
		heatIsolation=0.25;
		repairableWithKits[]={5,3};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\Camovest\TacticalVestcamo_Dk.paa",
			"ThePathFinder\data\Camovest\TacticalVestcamo_Dk.paa",
			"ThePathFinder\data\Camovest\TacticalVestcamo_Dk.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\tacticalvest2_m.p3d";
			female="\DZ\characters\vests\tacticalvest2_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\TacticalVest2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\TacticalVest2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TacticalGloves_camo_Dk: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="Tactical Gloves camo Dk";
		descriptionShort="Tactical Gloves used by DirtyOldDog";
		visibilityModifier=1;
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\Tacticalclovescamo\TacticalGloves_camo_Dk.paa",
			"ThePathFinder\data\Tacticalclovescamo\TacticalGloves_camo_Dk.paa",
			"ThePathFinder\data\Tacticalclovescamo\TacticalGloves_camo_Dk.paa"
		};
	};
	class PlateCarrier_Dk: PlateCarrierVest
	{
		displayName="Plate Carrier Camo Dk";
		descriptionShort="Plate Carrier vest by DirtyOldDog";
		scope=2;
		color="camo_Dk";
		itemSize[]={1,1};
		inventorySlot[]=
		{
			"Vest"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa",
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa",
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa"
		};
		weight=12000;
		absorbency=0.1;
		heatIsolation=0.1;
		repairableWithKits[]={5,3};
		repairCosts[]={30,25};
		class ClothingTypes
		{
			male="\DZ\characters\vests\plate_carrier_m.p3d";
			female="\DZ\characters\vests\plate_carrier_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\BallisticVest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\BallisticVest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PlateCarrierHolster_Dk: PlateCarrierHolster
	{
		displayName="Plate Carrier Holster camo Dk";
		descriptionShort="Plate Carrier Holster by DirtyOldDog";
		scope=2;
		itemSize[]={1,1};
		absorbency=0.1;
		heatIsolation=0.1;
		repairableWithKits[]={5,3};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"VestHolster",
			"VestHolster",
			"VestPouch",
			"Belt_Left",
			"Belt_Right"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=110;
		attachments[]=
		{
			"Pistol"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa",
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa",
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa"
		};
	};
	class PlateCarrierPouches_Dk: PlateCarrierPouches
	{
		displayName="Plate Carrier Pouches camo Dk";
		descriptionShort="Plate Carrier Pouches by DirtyOldDog";
		scope=2;
		itemSize[]={1,1};
		itemsCargoSize[]={5,15};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa",
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa",
			"ThePathFinder\data\Camovest\PlateCarrier_Dk.paa"
		};
	};
};
class CfgMods
{
	class ThePathFinder
	{
		dir="ThePathFinder";
		picture="ThePathFinder/data/ThePathFinder_image/ThePathFinder_image.edds";
		logoSmall="ThePathFinder/data/ThePathFinder_image/ThePathFinder_image.edds";
		logoOver="ThePathFinder/data/ThePathFinder_image/ThePathFinder_image.edds";
		tooltip="ThePathFinder";
		action="";
		hideName=1;
		hidePicture=1;
		name="DirtyOldDogDK";
		credits="Henrik lynge,mistaputt,Not A Banana";
		author="DirtyOldDogDK;";
		authorID="0";
		version="1.0.2";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"ThePathFinder/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ThePathFinder/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"ThePathFinder/Scripts/5_Mission"
				};
			};
		};
	};
};
