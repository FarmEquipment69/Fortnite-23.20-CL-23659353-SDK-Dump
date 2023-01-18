// Class /Script/FortniteGame.FortAthenaMutator_WeaponSettings
// Size: 0x350
class AFortAthenaMutator_WeaponSettings : public AFortAthenaMutator
{
	struct TArray<class UFortWeaponSettingsComponent*> WeaponSettings; // 0x330 (0x10)
	bool Enabled; // 0x340 (0x1)
	unsigned char unreflected_341[0x3]; // 0x341 (0x3) 
	float RangeMultiplier; // 0x344 (0x4)
	unsigned char padding_348[0x8]; // 0x348 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_WeaponSettings.RemoveDataSource (Underlying native function: RemoveDataSource 0x85248fc)
	void RemoveDataSource(class UObject*& DataSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_WeaponSettings.AddDataSourceForTeam (Underlying native function: AddDataSourceForTeam 0x85226d0)
	void AddDataSourceForTeam(class UFortItemDefinition*& ItemDefinition, unsigned char& TeamIndex, class UObject*& DataSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_WeaponSettings.AddDataSourceForClassSlot (Underlying native function: AddDataSourceForClassSlot 0x85224d4)
	void AddDataSourceForClassSlot(class UFortItemDefinition*& ItemDefinition, unsigned char& ClassSlot, class UObject*& DataSource); // (Final | Native | Public | BlueprintCallable)
};

