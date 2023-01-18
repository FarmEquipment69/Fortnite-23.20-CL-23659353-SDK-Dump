// Class /Script/FortniteGame.SynchronizedTeleportPlayerComponent
// Size: 0x110
class USynchronizedTeleportPlayerComponent : public UFortControllerComponent
{
	class USoundBase* TeleportScreenMusicCue; // 0xa0 (0x8)
	float TeleportScreenFadeoutTime; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct FSynchronizedTeleportFadeOutReplicationData FadeOutData; // 0xb0 (0x20)
	bool bIsServerWaitingForClientToCancelRespawn; // 0xd0 (0x1)
	unsigned char padding_d1[0x3f]; // 0xd1 (0x3f)

	/* Functions */

	// Function /Script/FortniteGame.SynchronizedTeleportPlayerComponent.ServerRestartRespawn (Underlying native function: ServerRestartRespawn 0x6a4bfa4)
	void ServerRestartRespawn(); // (Final | 0x00000002 | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.SynchronizedTeleportPlayerComponent.OnRep_IsServerWaitingForClientToCancelRespawn (Underlying native function: OnRep_IsServerWaitingForClientToCancelRespawn 0x8546a48)
	void OnRepIsServerWaitingForClientToCancelRespawn(); // (Final | Native | Private)

	// Function /Script/FortniteGame.SynchronizedTeleportPlayerComponent.OnRep_FadeOutData (Underlying native function: OnRep_FadeOutData 0x8546a20)
	void OnRepFadeOutData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.SynchronizedTeleportPlayerComponent.HandleTeleportScreenStatusChanged (Underlying native function: HandleTeleportScreenStatusChanged 0x85461bc)
	void HandleTeleportScreenStatusChanged(class AFortPlayerControllerAthena*& PlayerController, bool& bEnableLoadScreen, struct FText& HUDReasonText); // (0x00000002 | Native | Protected)
};

