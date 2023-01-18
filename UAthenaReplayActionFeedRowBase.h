// Class /Script/FortniteUI.AthenaReplayActionFeedRowBase
// Size: 0x328
class UAthenaReplayActionFeedRowBase : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct TWeakObjectPtr<class UTexture2D> TextureEliminationIcon; // 0x298 (0x28)
	struct TWeakObjectPtr<class UTexture2D> TextureDbnoIcon; // 0x2c0 (0x28)
	class UImage* ImageEventIcon; // 0x2e8 (0x8)
	class UCommonTextBlock* TextEventTime; // 0x2f0 (0x8)
	class UCommonButtonLegacy* ButtonInstigatorButton; // 0x2f8 (0x8)
	class UCommonButtonLegacy* ButtonVictimButton; // 0x300 (0x8)
	class UAthenaReplayActionFeedRowProxyInstance* RowProxy; // 0x308 (0x8)
	unsigned char padding_310[0x18]; // 0x310 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReplayActionFeedRowBase.OnVictimNameUpdated (Has no native function)
	void OnVictimNameUpdated(struct FText& VictimName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReplayActionFeedRowBase.OnPlayerStateAdded (Underlying native function: OnPlayerStateAdded 0xa5bbc1c)
	void OnPlayerStateAdded(class AFortPlayerStateAthena*& FPSA); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaReplayActionFeedRowBase.OnInstigatorNameUpdated (Has no native function)
	void OnInstigatorNameUpdated(struct FText& InstigatorName); // (Event | Protected | HasOutParms | BlueprintEvent)
};

