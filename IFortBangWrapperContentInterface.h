// Class /Script/FortniteUI.FortBangWrapperContentInterface
// Size: 0x28
class IFortBangWrapperContentInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteUI.FortBangWrapperContentInterface.OnStopCallout (Has no native function)
	void OnStopCallout(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortBangWrapperContentInterface.OnStartCallout (Has no native function)
	void OnStartCallout(struct FName& TutorialObjectiveName, enum ETutorialType& TutorialType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortBangWrapperContentInterface.OnBangStateChanged (Has no native function)
	void OnBangStateChanged(bool& bEnabled, int& Count); // (Event | Public | BlueprintEvent)
};

