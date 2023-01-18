// Class /Script/FortniteUI.FortBangWrapper_NUI
// Size: 0x2a8
class UFortBangWrapper_NUI : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	enum EFortBangType BangType; // 0x298 (0x1)
	unsigned char unreflected_299[0x3]; // 0x299 (0x3) 
	struct FName TutorialNameID; // 0x29c (0x4)
	class UNamedSlot* ContentSlot; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortBangWrapper_NUI.UnregisterTutorialNameID (Underlying native function: UnregisterTutorialNameID 0xa6b6560)
	void UnregisterTutorialNameID(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.SetTutorialNameID (Underlying native function: SetTutorialNameID 0xa6b5e88)
	void SetTutorialNameID(struct FName& InTutorialNameID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.SetBangType (Underlying native function: SetBangType 0xa6b4a48)
	void SetBangType(enum EFortBangType& NewBangType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.SetBangStateBP (Underlying native function: SetBangStateBP 0x2738fb4)
	void SetBangStateBP(bool& bEnabled, int& Count); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.OnTutorialCalloutFinished (Has no native function)
	void OnTutorialCalloutFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.OnStopCallout (Has no native function)
	void OnStopCallout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.OnStartCallout (Has no native function)
	void OnStartCallout(struct FName& TutorialObjectiveName, enum ETutorialType& TutorialType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.OnBangStateChanged (Has no native function)
	void OnBangStateChanged(bool& bEnabled, int& Count); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBangWrapper_NUI.AsyncPlaySound2D (Underlying native function: AsyncPlaySound2D 0xa6b1944)
	void AsyncPlaySound2D(class UObject*& WorldContextObject, struct TWeakObjectPtr<class USoundBase>& SoundToLoad, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

