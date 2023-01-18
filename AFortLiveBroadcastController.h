// Class /Script/FortniteGame.FortLiveBroadcastController
// Size: 0x3b80
class AFortLiveBroadcastController : public AFortLiveSpectatorController
{
	struct FMulticastInlineDelegate OnHideBusButtonFromServer; // 0x3b38 (0x10)
	struct FMulticastInlineDelegate OnToggleOffAirWidgetVisibilty; // 0x3b48 (0x10)
	struct FMulticastInlineDelegate OnToggleNetUIWidgetVisibilty; // 0x3b58 (0x10)
	class UClass* BroadcastPostProcessingActorClass; // 0x3b68 (0x8)
	class UClass* SquadMarkerActorClass; // 0x3b70 (0x8)
	unsigned char padding_3b78[0x8]; // 0x3b78 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortLiveBroadcastController.TryBeginBusPhase (Underlying native function: TryBeginBusPhase 0x8d9a400)
	void TryBeginBusPhase(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLiveBroadcastController.ServerOnSpectatorCameraTypeChanged (Underlying native function: ServerOnSpectatorCameraTypeChanged 0x8d95c0c)
	void ServerOnSpectatorCameraTypeChanged(enum ESpectatorCameraType& NewCameraMode, struct FVector& SpectatorLocation, bool& bValidPos); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortLiveBroadcastController.ServerBeginBusPhase (Underlying native function: ServerBeginBusPhase 0x8d93ff8)
	void ServerBeginBusPhase(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// DelegateFunction /Script/FortniteGame.FortLiveBroadcastController.NoParamDelegate__DelegateSignature (Has no native function)
	void NoParamDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortLiveBroadcastController.ClientHideBusButton (Underlying native function: ClientHideBusButton 0x8d8e764)
	void ClientHideBusButton(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortLiveBroadcastController.CanStartBattleBus (Underlying native function: CanStartBattleBus 0x8d8c944)
	bool CanStartBattleBus(); // (Final | Native | Public | BlueprintCallable)
};

