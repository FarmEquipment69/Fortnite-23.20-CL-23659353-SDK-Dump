// Class /Script/FortniteUI.AthenaIndicatorLayerBase
// Size: 0x3a0
class UAthenaIndicatorLayerBase : public UFortHUDElementWidget
{
	class UFortActorCanvas* GeneralIndicators; // 0x2d0 (0x8)
	class UFortActorCanvas* NameIndicators; // 0x2d8 (0x8)
	class UClass* PlayerIndicatorClass; // 0x2e0 (0x8)
	int PlayerIndicatorPoolSize; // 0x2e8 (0x4)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	struct FUserWidgetPool PlayerIndicatorWidgetPool; // 0x2f0 (0x88)
	class UAthenaPlayerViewModel* PlayerVM; // 0x378 (0x8)
	class USlateVectorArtData* TeamIndicatorMesh; // 0x380 (0x8)
	bool bWasTargeting; // 0x388 (0x1)
	unsigned char padding_389[0x17]; // 0x389 (0x17)

	/* Functions */

	// Function /Script/FortniteUI.AthenaIndicatorLayerBase.OnTargetingChanged (Has no native function)
	void OnTargetingChanged(bool& bTargeting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIndicatorLayerBase.OnTargetChangedNative (Underlying native function: OnTargetChangedNative 0x2666fa0)
	void OnTargetChangedNative(bool& bTargeting); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaIndicatorLayerBase.HandleIndicatorModeChanged (Underlying native function: HandleIndicatorModeChanged 0xa470424)
	void HandleIndicatorModeChanged(bool& bIndicatorsEnabled); // (Final | Native | Protected)
};

