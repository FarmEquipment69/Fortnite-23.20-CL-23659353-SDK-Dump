// Class /Script/IKRig.IKRetargeter
// Size: 0x200
class UIKRetargeter : public UObject
{
	struct TWeakObjectPtr<class UIKRigDefinition> SourceIKRigAsset; // 0x28 (0x28)
	struct TWeakObjectPtr<class UIKRigDefinition> TargetIKRigAsset; // 0x50 (0x28)
	struct TArray<struct FRetargetChainMap*> ChainMapping; // 0x78 (0x10)
	struct TArray<class URetargetChainSettings*> ChainSettings; // 0x88 (0x10)
	class URetargetRootSettings* RootSettings; // 0x98 (0x8)
	class UIKRetargetGlobalSettings* GlobalSettings; // 0xa0 (0x8)
	struct TMap<struct FName, struct FRetargetProfile> Profiles; // 0xa8 (0x50)
	struct FName CurrentProfile; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct TMap<struct FName, struct FIKRetargetPose> SourceRetargetPoses; // 0x100 (0x50)
	struct TMap<struct FName, struct FIKRetargetPose> TargetRetargetPoses; // 0x150 (0x50)
	struct FName CurrentSourceRetargetPose; // 0x1a0 (0x4)
	struct FName CurrentTargetRetargetPose; // 0x1a4 (0x4)
	struct TMap<struct FName, struct FIKRetargetPose> RetargetPoses; // 0x1a8 (0x50)
	struct FName CurrentRetargetPose; // 0x1f8 (0x4)
	unsigned char padding_1fc[0x4]; // 0x1fc (0x4)

	/* Functions */

	// Function /Script/IKRig.IKRetargeter.SetRootSettingsInRetargetProfile (Underlying native function: SetRootSettingsInRetargetProfile 0x7ca78f8)
	static void SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetRootSettings& RootSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile (Underlying native function: SetGlobalSettingsInRetargetProfile 0x7ca735c)
	static void SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FRetargetGlobalSettings& GlobalSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile (Underlying native function: SetChainSpeedPlantSettingsInRetargetProfile 0x7ca7120)
	static void SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, struct FName& TargetChainName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/IKRig.IKRetargeter.SetChainSettingsInRetargetProfile (Underlying native function: SetChainSettingsInRetargetProfile 0x7ca6f88)
	static void SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSettings& ChainSettings, struct FName& TargetChainName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile (Underlying native function: SetChainIKSettingsInRetargetProfile 0x7ca6d40)
	static void SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainIKSettings& IKSettings, struct FName& TargetChainName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile (Underlying native function: SetChainFKSettingsInRetargetProfile 0x7ca6b14)
	static void SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainFKSettings& FKSettings, struct FName& TargetChainName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile (Underlying native function: GetRootSettingsFromRetargetProfile 0x7ca69f0)
	static struct FTargetRootSettings GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset (Underlying native function: GetRootSettingsFromRetargetAsset 0x7ca6700)
	static void GetRootSettingsFromRetargetAsset(class UIKRetargeter*& RetargetAsset, struct FName& OptionalProfileName, struct FTargetRootSettings& OutSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile (Underlying native function: GetGlobalSettingsFromRetargetProfile 0x7ca6610)
	static struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset (Underlying native function: GetGlobalSettingsFromRetargetAsset 0x7ca6388)
	static void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter*& RetargetAsset, struct FName& OptionalProfileName, struct FRetargetGlobalSettings& OutSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset (Underlying native function: GetChainUsingGoalFromRetargetAsset 0x7ca6110)
	static struct FTargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter*& RetargetAsset, struct FName& IKGoalName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile (Underlying native function: GetChainSettingsFromRetargetProfile 0x7ca5eb8)
	static struct FTargetChainSettings GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FName& TargetChainName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset (Underlying native function: GetChainSettingsFromRetargetAsset 0x7ca5a94)
	static struct FTargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter*& RetargetAsset, struct FName& TargetChainName, struct FName& OptionalProfileName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

