// Class /Script/FortniteGame.FortCreativeObjectTrackingComponent
// Size: 0xd8
class UFortCreativeObjectTrackingComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	bool bUpdatePreviewLocation; // 0xd0 (0x1)
	unsigned char padding_d1[0x7]; // 0xd1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeObjectTrackingComponent.ServerSetPreviewLocation (Underlying native function: ServerSetPreviewLocation 0x87b664c)
	void ServerSetPreviewLocation(bool& bPreviewActive, struct FVector& Location); // (Final | Net | NetReliable | Native | Event | Private | NetServer | HasDefaults)

	// DelegateFunction /Script/FortniteGame.FortCreativeObjectTrackingComponent.OnThermometerBetaEnabledChangedSignature__DelegateSignature (Has no native function)
	void OnThermometerBetaEnabledChangedSignatureDelegateSignature(bool& bBetaEnabled); // (MulticastDelegate | Public | Delegate)
};

