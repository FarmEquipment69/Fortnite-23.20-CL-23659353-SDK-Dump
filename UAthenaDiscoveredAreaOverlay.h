// Class /Script/FortniteUI.AthenaDiscoveredAreaOverlay
// Size: 0x400
class UAthenaDiscoveredAreaOverlay : public UAthenaDiscoverabilityBase
{
	unsigned char unreflected_400[0x400]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaDiscoveredAreaOverlay.OnNewDiscovery (Has no native function)
	void OnNewDiscovery(struct FText& LocalizedLocationName, struct TWeakObjectPtr<class USoundCue>& DiscoveredSoundCue, bool& bIsNamedLocation, bool& bIsDiscovered); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDiscoveredAreaOverlay.BP_HandlePlaylistExtensionWidgetCreated (Has no native function)
	void BPHandlePlaylistExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)
};

