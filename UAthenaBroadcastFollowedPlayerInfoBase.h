// Class /Script/FortniteUI.AthenaBroadcastFollowedPlayerInfoBase
// Size: 0x2f8
class UAthenaBroadcastFollowedPlayerInfoBase : public UFortHUDElementWidget
{
	class UAthenaSpectatorPlayerWidgetBase* PlayerWidget; // 0x2d0 (0x8)
	class UAthenaSpectatorHitPointBarBase* HitPointBarHealth; // 0x2d8 (0x8)
	class UAthenaSpectatorHitPointBarBase* HitPointBarShield; // 0x2e0 (0x8)
	class UAthenaSpectatorHitPointBarBase* HitPointBarVehicle; // 0x2e8 (0x8)
	unsigned char padding_2f0[0x8]; // 0x2f0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBroadcastFollowedPlayerInfoBase.OnVehicleStateChanged (Has no native function)
	void OnVehicleStateChanged(class AActor*& NewVehicle, class AActor*& OldVehicle); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastFollowedPlayerInfoBase.OnPipModeChanged (Has no native function)
	void OnPipModeChanged(bool& bPipModeEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastFollowedPlayerInfoBase.OnFollowedPlayerChanged (Underlying native function: OnFollowedPlayerChanged 0x1bb6bfc)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatingPC, class AFortPlayerState*& FollowedPlayerState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastFollowedPlayerInfoBase.OnEliminatedStateChanged (Has no native function)
	void OnEliminatedStateChanged(class UAthenaRemotePlayerViewData*& PlayerData, bool& bIsEliminated); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastFollowedPlayerInfoBase.GetFollowedPlayerData (Underlying native function: GetFollowedPlayerData 0x26a179c)
	class UAthenaRemotePlayerViewData* GetFollowedPlayerData(); // (Final | Native | Protected | BlueprintCallable)
};

