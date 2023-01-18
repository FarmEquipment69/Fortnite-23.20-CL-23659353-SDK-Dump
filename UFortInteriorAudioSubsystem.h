// Class /Script/FortniteGame.FortInteriorAudioSubsystem
// Size: 0x230
class UFortInteriorAudioSubsystem : public UWorldSubsystem
{
	unsigned char unreflected_30[0x28]; // 0x30 (0x28) 
	struct FSoftObjectPath InteriorAudioSettingsPath; // 0x58 (0x18)
	class UFortInteriorAudioSettings* Settings; // 0x70 (0x8)
	struct FMulticastInlineDelegate OnInteriorStateChanged; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnRoofStateChanged; // 0x88 (0x10)
	unsigned char unreflected_98[0x18]; // 0x98 (0x18) 
	struct TWeakObjectPtr<class AFortPlayerController> FPC; // 0xb0 (0x8)
	class AFortInteriorAudioManager* AudioManager; // 0xb8 (0x8)
	struct FInteriorAudioPlayerInfo Player; // 0xc0 (0x120)
	struct FInteriorAudioScanResults CurrentScanResults; // 0x1e0 (0x38)
	class UBuildingStructuralSupportSystem* BuildingGrid; // 0x218 (0x8)
	unsigned char padding_220[0x10]; // 0x220 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortInteriorAudioSubsystem.SetEnabled (Underlying native function: SetEnabled 0x8e818f0)
	void SetEnabled(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortInteriorAudioSubsystem.GetPlayerInfo (Underlying native function: GetPlayerInfo 0x10b05b4)
	struct FInteriorAudioPlayerInfo GetPlayerInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

