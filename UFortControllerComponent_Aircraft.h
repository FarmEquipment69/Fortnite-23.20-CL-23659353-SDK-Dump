// Class /Script/FortniteGame.FortControllerComponent_Aircraft
// Size: 0x138
class UFortControllerComponent_Aircraft : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMulticastInlineDelegate OnAircraftStateChange; // 0xa8 (0x10)
	class AFortAircraft* CurrentAircraft; // 0xb8 (0x8)
	unsigned char unreflected_c0[0x50]; // 0xc0 (0x50) 
	struct FMulticastInlineDelegate OnEnterAircraftEvent; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnExitAircraftEvent; // 0x120 (0x10)
	struct FName TargetGrid; // 0x130 (0x4)
	unsigned char padding_134[0x4]; // 0x134 (0x4)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_Aircraft.SimpleAircraftEvent__DelegateSignature (Has no native function)
	void SimpleAircraftEventDelegateSignature(class AController*& Controller); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortControllerComponent_Aircraft.ServerAttemptAircraftJump (Underlying native function: ServerAttemptAircraftJump 0x86d0f30)
	void ServerAttemptAircraftJump(struct FRotator& ClientRotation); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortControllerComponent_Aircraft.PlacePlayerInAircraft (Underlying native function: PlacePlayerInAircraft 0x70dc11c)
	void PlacePlayerInAircraft(class AFortAircraft*& AircraftToEnter, bool& bKeepInventory); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Aircraft.OnCurrentAircraftEnterDropZone (Underlying native function: OnCurrentAircraftEnterDropZone 0x86d0448)
	void OnCurrentAircraftEnterDropZone(class AFortAthenaAircraft*& InAircraft); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortControllerComponent_Aircraft.OnAircraftStateChange__DelegateSignature (Has no native function)
	void OnAircraftStateChangeDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortControllerComponent_Aircraft.KickFromAircraft (Underlying native function: KickFromAircraft 0x86d0434)
	void KickFromAircraft(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Aircraft.IsInAircraft (Underlying native function: IsInAircraft 0x86d03c4)
	bool IsInAircraft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Aircraft.ClientExitAircraft (Underlying native function: ClientExitAircraft 0x6a4bfa4)
	void ClientExitAircraft(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_Aircraft.ClientEnterAircraft (Underlying native function: ClientEnterAircraft 0x72923e0)
	void ClientEnterAircraft(class AFortAircraft*& InAircraft); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

