// Class /Script/FortniteGame.FortEntitlementComponent
// Size: 0xc0
class UFortEntitlementComponent : public UActorComponent
{
	struct TArray<struct FFortEntitlementState> Entitlements; // 0xa0 (0x10)
	unsigned char padding_b0[0x10]; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortEntitlementComponent.OnRep_Entitlements (Underlying native function: OnRep_Entitlements 0x86e95fc)
	void OnRepEntitlements(); // (Final | Native | Private)
};

