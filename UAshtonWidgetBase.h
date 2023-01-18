// Class /Script/FortniteUI.AshtonWidgetBase
// Size: 0x340
class UAshtonWidgetBase : public ULTMWidgetBase
{
	class AFortAthenaMutator_Ashton* AshtonMutatorRef; // 0x328 (0x8)
	unsigned char padding_330[0x10]; // 0x330 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AshtonWidgetBase.UpdateAllUI (Underlying native function: UpdateAllUI 0xa58055c)
	void UpdateAllUI(bool& bFirstUpdate); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AshtonWidgetBase.OnVillainRespawnsRemainingChanged (Underlying native function: OnVillainRespawnsRemainingChanged 0xa57feac)
	void OnVillainRespawnsRemainingChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AshtonWidgetBase.OnVillainRespawnCountChanged (Has no native function)
	void OnVillainRespawnCountChanged(int& NumRespawnsLeft, float& RespawnPercentLeft); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AshtonWidgetBase.OnStoneListChanged (Underlying native function: OnStoneListChanged 0xa57fe7c)
	void OnStoneListChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AshtonWidgetBase.OnStoneChanged (Has no native function)
	void OnStoneChanged(enum EAshtonStoneType& StoneType, enum EAshtonStoneStateType& StoneState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AshtonWidgetBase.OnOpenWidget (Has no native function)
	void OnOpenWidget(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AshtonWidgetBase.OnCloseWidget (Has no native function)
	void OnCloseWidget(); // (Event | Public | BlueprintEvent)
};

