// Class /Script/FortniteUI.AthenaEventMatchSquadWidgetBase
// Size: 0x2d8
class UAthenaEventMatchSquadWidgetBase : public UFortHUDElementWidget
{
	struct TWeakObjectPtr<class UAthenaRemoteSquadViewData> SquadData; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.SetSquadIdVisible (Has no native function)
	void SetSquadIdVisible(bool& bSquadIdVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.OnSquadSessionRankChanged (Has no native function)
	void OnSquadSessionRankChanged(class UAthenaRemoteSquadViewData*& InSquadData, int& InSquadSessionRank); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.OnSquadPlaceChanged (Has no native function)
	void OnSquadPlaceChanged(class UAthenaRemoteSquadViewData*& InSquadData, int& InSquadPlace); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.OnSquadKillscoreChanged (Has no native function)
	void OnSquadKillscoreChanged(class UAthenaRemoteSquadViewData*& InSquadData, int& InSquadKills); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.OnSquadIdChanged (Has no native function)
	void OnSquadIdChanged(class UAthenaRemoteSquadViewData*& InSquadData, unsigned char& InSquadId); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.OnSquadColorChanged (Has no native function)
	void OnSquadColorChanged(class UAthenaRemoteSquadViewData*& InSquadData, struct FLinearColor& InSquadColor); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.OnPlayerAdded (Has no native function)
	void OnPlayerAdded(class UAthenaRemoteSquadViewData*& InSquadData, class UAthenaRemotePlayerViewData*& InPlayerData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchSquadWidgetBase.HandleDisplaySessionRankChanged (Has no native function)
	void HandleDisplaySessionRankChanged(bool& bDisplay); // (Event | Protected | BlueprintEvent)
};

