// Class /Script/FortniteGame.FortAthenaMutator_PlayerClassSettings
// Size: 0x620
class AFortAthenaMutator_PlayerClassSettings : public AFortAthenaMutator_PlayerSettingsBase
{
	unsigned char NumClassSlots; // 0x570 (0x1)
	unsigned char unreflected_571[0x7]; // 0x571 (0x7) 
	class UClass* ClassSettingsClass; // 0x578 (0x8)
	unsigned char unreflected_580[0x50]; // 0x580 (0x50) 
	struct TMap<unsigned char, struct FMutatorPlayerSettingsData> ClassSettingsDataMap; // 0x5d0 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerClassSettings.SetupGameRulesForClassContext (Underlying native function: SetupGameRulesForClassContext 0x84eee20)
	bool SetupGameRulesForClassContext(class AFortMinigame*& Minigame); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerClassSettings.SetClassContext (Underlying native function: SetClassContext 0x84eed20)
	void SetClassContext(unsigned char& ClassSlotIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerClassSettings.RemoveDataSource (Underlying native function: RemoveDataSource 0x84ee9d4)
	bool RemoveDataSource(class UObject*& DataSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerClassSettings.GetClassContext (Underlying native function: GetClassContext 0x84ed8f4)
	unsigned char GetClassContext(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerClassSettings.AddDataSourceForPlayerClass (Underlying native function: AddDataSourceForPlayerClass 0x84ed33c)
	bool AddDataSourceForPlayerClass(unsigned char& ClassSlotIndex, class UObject*& DataSource); // (Final | Native | Public | BlueprintCallable)
};

