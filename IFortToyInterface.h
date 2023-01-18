// Class /Script/FortniteGame.FortToyInterface
// Size: 0x28
class IFortToyInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortToyInterface.StartToyFadeOutDueToNewPlacement (Has no native function)
	void StartToyFadeOutDueToNewPlacement(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortToyInterface.NotifyToyInstanceOfReuse (Has no native function)
	void NotifyToyInstanceOfReuse(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortToyInterface.InitializeToyPreviewInFrontend (Has no native function)
	void InitializeToyPreviewInFrontend(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortToyInterface.InitializeToyInstance (Has no native function)
	void InitializeToyInstance(class AFortPlayerController*& OwningPC, int& NumTimesSummoned); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

