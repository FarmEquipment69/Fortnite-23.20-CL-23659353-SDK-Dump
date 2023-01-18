// Class /Script/FortniteGame.FortControllerComponent_SmartBuild
// Size: 0xe0
class UFortControllerComponent_SmartBuild : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	bool bUseSmartBuild; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct TArray<class UFortBuildingItemDefinition*> BuildItemDefinitions; // 0xb0 (0x10)
	struct TArray<class UFortBuildingItemDefinition*> SmartBuildItemDefinitions; // 0xc0 (0x10)
	class UFortSmartBuildingItemDefinition* LastBuildItem; // 0xd0 (0x8)
	float TurboFirstInterval; // 0xd8 (0x4)
	float TurboInterval; // 0xdc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_SmartBuild.ServerSetUseSmartBuild (Underlying native function: ServerSetUseSmartBuild 0x73f3f74)
	void ServerSetUseSmartBuild(bool& bInUseSmartBuild); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_SmartBuild.OnRep_UseSmartBuild (Underlying native function: OnRep_UseSmartBuild 0x86e9708)
	void OnRepUseSmartBuild(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_SmartBuild.ClientEquipBuildingItems (Underlying native function: ClientEquipBuildingItems 0x6a4bfa4)
	void ClientEquipBuildingItems(); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

