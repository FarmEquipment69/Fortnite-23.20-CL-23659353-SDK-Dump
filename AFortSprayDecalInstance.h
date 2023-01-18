// Class /Script/FortniteGame.FortSprayDecalInstance
// Size: 0xe00
class AFortSprayDecalInstance : public ABuildingSMActor
{
	struct FFortSprayDecalRepPayload SprayInfo; // 0xdd0 (0x18)
	unsigned char bDestroyOnNearbyDestruction; // 0xde8 (0x1)
	unsigned char bDestroyOnNearbyDamageTaken; // 0xde8 (0x1)
	unsigned char bDestroyOnNearbyBounce; // 0xde8 (0x1)
	unsigned char unreflected_de9[0x7]; // 0xde9 (0x7) 
	struct TArray<class UMaterialInstanceDynamic*> SprayMIDsThatCanBounce; // 0xdf0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortSprayDecalInstance.StartSprayFadeOutDueToNewPlacement (Underlying native function: StartSprayFadeOutDueToNewPlacement 0x27c7820)
	void StartSprayFadeOutDueToNewPlacement(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortSprayDecalInstance.SetSprayParameters (Underlying native function: SetSprayParameters 0x8846390)
	void SetSprayParameters(class AFortPlayerController*& SpawningPC, class UAthenaSprayItemDefinition*& InSprayAsset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSprayDecalInstance.OnSprayInfoReady (Has no native function)
	void OnSprayInfoReady(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSprayDecalInstance.OnRep_SprayInfo (Underlying native function: OnRep_SprayInfo 0x8844bd0)
	void OnRepSprayInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSprayDecalInstance.OnBounceOccurs (Has no native function)
	void OnBounceOccurs(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSprayDecalInstance.GetSpraySortOrder (Underlying native function: GetSpraySortOrder 0x884362c)
	int GetSpraySortOrder(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

