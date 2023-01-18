// Class /Script/FortniteUI.RespawnAndSpectateSelectContainerWidget
// Size: 0x348
class URespawnAndSpectateSelectContainerWidget : public ULTMWidgetBase
{
	class UClass* RespawnAndSpectateSelectWidgetClass; // 0x328 (0x8)
	unsigned char padding_330[0x18]; // 0x330 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.RespawnAndSpectateSelectContainerWidget.UpdateRespawnAndSpectateSelectWidgetVisibility (Underlying native function: UpdateRespawnAndSpectateSelectWidgetVisibility 0xa5806e4)
	void UpdateRespawnAndSpectateSelectWidgetVisibility(bool& bNewVisibility); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectContainerWidget.OnRespawnAndSpectateSelectPlayerRespawned (Underlying native function: OnRespawnAndSpectateSelectPlayerRespawned 0xa57f80c)
	void OnRespawnAndSpectateSelectPlayerRespawned(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectContainerWidget.OnRespawnAndSpectateSelectAvailableOptionsChanged (Underlying native function: OnRespawnAndSpectateSelectAvailableOptionsChanged 0xa57f7f8)
	void OnRespawnAndSpectateSelectAvailableOptionsChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectContainerWidget.OnPanelOptionSelected (Underlying native function: OnPanelOptionSelected 0xa57f740)
	void OnPanelOptionSelected(int& SelectedOption); // (Final | Native | Protected)
};

