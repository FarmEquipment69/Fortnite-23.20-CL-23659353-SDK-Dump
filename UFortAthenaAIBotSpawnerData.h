// Class /Script/FortniteAI.FortAthenaAIBotSpawnerData
// Size: 0x138
class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData
{
	class UClass* SkillSetComponent; // 0x110 (0x8)
	class UClass* ConstructionComponent; // 0x118 (0x8)
	class UClass* VehicleComponent; // 0x120 (0x8)
	class UClass* CoverComponent; // 0x128 (0x8)
	class UClass* PerksComponent; // 0x130 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetVehicleComponent (Underlying native function: GetVehicleComponent 0xa3acaf4)
	class UFortAthenaAISpawnerDataComponent_VehicleBase* GetVehicleComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetSkillSetComponent (Underlying native function: GetSkillSetComponent 0xa3ac7e8)
	class UFortAthenaAISpawnerDataComponent_SkillsetBase* GetSkillSetComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetPerksComponent (Underlying native function: GetPerksComponent 0xa3ac770)
	class UFortAthenaAISpawnerDataComponent_PerksBase* GetPerksComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetCoverComponent (Underlying native function: GetCoverComponent 0xa3abdf0)
	class UFortAthenaAISpawnerDataComponent_CoverBase* GetCoverComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotSpawnerData.GetConstructionComponent (Underlying native function: GetConstructionComponent 0xa3abd3c)
	class UFortAthenaAISpawnerDataComponent_ConstructionBase* GetConstructionComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

