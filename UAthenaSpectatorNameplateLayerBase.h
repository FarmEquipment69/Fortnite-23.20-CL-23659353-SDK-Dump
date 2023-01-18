// Class /Script/FortniteUI.AthenaSpectatorNameplateLayerBase
// Size: 0x388
class UAthenaSpectatorNameplateLayerBase : public UFortHUDElementWidget
{
	class UClass* NameplateWidgetClass; // 0x2d0 (0x8)
	struct TMap<struct FUniqueNetIdRepl, class UAthenaSpectatorNameplateBase*> NameplateWidgetMap; // 0x2d8 (0x50)
	class UFortActorCanvas* CanvasNameplateIndicators; // 0x328 (0x8)
	unsigned char padding_330[0x58]; // 0x330 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorNameplateLayerBase.OnTeamColorVisibleChanged (Underlying native function: OnTeamColorVisibleChanged 0xa5bc2b8)
	void OnTeamColorVisibleChanged(bool& bVisible); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateLayerBase.OnPlayerDataAdded (Underlying native function: OnPlayerDataAdded 0xa5bbb88)
	void OnPlayerDataAdded(class UAthenaRemotePlayerViewData*& InPlayerData); // (Final | Native | Public)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateLayerBase.OnArrowTeamColorVisibleChanged (Underlying native function: OnArrowTeamColorVisibleChanged 0xa5bb5fc)
	void OnArrowTeamColorVisibleChanged(bool& bVisible); // (Final | Native | Private)
};

