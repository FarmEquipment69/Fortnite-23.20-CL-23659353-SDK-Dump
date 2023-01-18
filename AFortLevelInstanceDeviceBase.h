// Class /Script/FortniteGame.FortLevelInstanceDeviceBase
// Size: 0xf88
class AFortLevelInstanceDeviceBase : public AFortCreativeDeviceProp
{
	unsigned char unreflected_ef8[0x8]; // 0xef8 (0x8) 
	struct TWeakObjectPtr<class UWorld> WorldAsset; // 0xf00 (0x28)
	class AGameplayVolume* GameplayVolume; // 0xf28 (0x8)
	struct FGuid LevelInstanceSpawnGuid; // 0xf30 (0x10)
	unsigned char padding_f40[0x48]; // 0xf40 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.SetLastUsedLevelName (Underlying native function: SetLastUsedLevelName 0x87d2488)
	void SetLastUsedLevelName(struct FString& InLevelName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.OnRep_LevelInstanceSpawnGuid (Underlying native function: OnRep_LevelInstanceSpawnGuid 0x87d1d48)
	void OnRepLevelInstanceSpawnGuid(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.GetGameplayVolume (Underlying native function: GetGameplayVolume 0x87d0334)
	class AGameplayVolume* GetGameplayVolume(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.AttemptToLoadLastUsedSettings (Underlying native function: AttemptToLoadLastUsedSettings 0x87cda14)
	void AttemptToLoadLastUsedSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.ApplyLastUsedSettings (Has no native function)
	void ApplyLastUsedSettings(struct FGuid& LevelGuid, struct FString& LevelName, int& SizeX, int& SizeY, int& Height); // (Event | Protected | HasDefaults | BlueprintEvent)
};

