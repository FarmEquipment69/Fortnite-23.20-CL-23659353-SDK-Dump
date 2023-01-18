// Class /Script/FortniteGame.FortControllerComponent_MiniMapDiscoverable
// Size: 0x250
class UFortControllerComponent_MiniMapDiscoverable : public UFortControllerComponent
{
	struct FMulticastInlineDelegate OnSquadAlliesSharedMiniMapVisibility; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnClientVisibilitiesMapUpdated; // 0xb0 (0x10)
	struct FScalableFloat bShareMiniMapComponentVisibilityWithAllySquadmates; // 0xc0 (0x28)
	struct FFortControllerMiniMapComponentVisibilitiesArray FortControllerMiniMapComponentVisibilities; // 0xe8 (0x118)
	struct TMap<class UFortMiniMapComponent_Discoverable*, struct FFortControllerMiniMapComponentVisibility> FortControllerMiniMapComponentVisibilitiesMap; // 0x200 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_MiniMapDiscoverable.OnRep_FortControllerMiniMapComponentVisibilities (Underlying native function: OnRep_FortControllerMiniMapComponentVisibilities 0x8289438)
	void OnRepFortControllerMiniMapComponentVisibilities(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MiniMapDiscoverable.HandleServerSquadChange (Underlying native function: HandleServerSquadChange 0x82886e8)
	void HandleServerSquadChange(class AFortPlayerStateAthena*& InPlayerState, unsigned char& PreviousSquadId); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MiniMapDiscoverable.ClientSendOnSquadAlliesSharedMiniMapVisibilityMessage (Underlying native function: ClientSendOnSquadAlliesSharedMiniMapVisibilityMessage 0x6a4bfa4)
	void ClientSendOnSquadAlliesSharedMiniMapVisibilityMessage(); // (Net | NetReliable | Native | Event | Public | NetClient)
};

