// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
// Size: 0xe8
class USpecialEventGameUserSettingsControllerComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnLoaded; // 0xa0 (0x10)
	struct FString Version; // 0xb0 (0x10)
	float MinTimeBetweenSaves; // 0xc0 (0x4)
	unsigned char padding_c4[0x24]; // 0xc4 (0x24)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug (Underlying native function: SpecialEventGameUserSettings_ToggleDebug 0x26daa0c)
	void SpecialEventGameUserSettingsToggleDebug(); // (Final | BlueprintCosmetic | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData (Underlying native function: SpecialEventGameUserSettings_SetData 0x7291288)
	void SpecialEventGameUserSettingsSetData(struct FString& Data); // (Final | BlueprintCosmetic | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData (Underlying native function: SpecialEventGameUserSettings_LogData 0x26daa0c)
	void SpecialEventGameUserSettingsLogData(); // (Final | BlueprintCosmetic | Exec | Native | Public | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData (Underlying native function: SpecialEventGameUserSettings_ClearData 0x26daa0c)
	void SpecialEventGameUserSettingsClearData(); // (Final | BlueprintCosmetic | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetSavingBlocked (Underlying native function: SetSavingBlocked 0x76c7908)
	void SetSavingBlocked(bool& bBlocked); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData (Underlying native function: SetData 0x76c6ebc)
	void SetData(struct FString& Data, bool& bAllowSave, bool& bSaveNow); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData (Has no native function)
	void ParseLoadedData(struct FString& Data); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetSpecialEventGameUserSettingsControllerComponent (Underlying native function: GetSpecialEventGameUserSettingsControllerComponent 0x76c2f54)
	static class USpecialEventGameUserSettingsControllerComponent* GetSpecialEventGameUserSettingsControllerComponent(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData (Underlying native function: GetData 0x76c24a4)
	void GetData(enum ESpecialEventGameUserSettingsResult& outResult, struct FString& OutData); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | Const)
};

