// Class /Script/FortniteGame.FortAthenaMutator_DBNOSetting
// Size: 0x340
class AFortAthenaMutator_DBNOSetting : public AFortAthenaMutator
{
	struct TArray<struct FDBNOSettingsByActor> SettingsByActor; // 0x330 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_DBNOSetting.UnsetDBNOSettings (Underlying native function: UnsetDBNOSettings 0x84a9cfc)
	void UnsetDBNOSettings(class AActor*& ActorRemovingSettings); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_DBNOSetting.SetDBNOSettingsAndOverride (Underlying native function: SetDBNOSettingsAndOverride 0x84a94a4)
	void SetDBNOSettingsAndOverride(struct FDBNOCustomSettings& InDBNOSettings, class AActor*& ActorApplyingSettings); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_DBNOSetting.GetDBNOSettingsMutator (Underlying native function: GetDBNOSettingsMutator 0x84a58fc)
	static class AFortAthenaMutator_DBNOSetting* GetDBNOSettingsMutator(class AFortMinigame*& Minigame); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

