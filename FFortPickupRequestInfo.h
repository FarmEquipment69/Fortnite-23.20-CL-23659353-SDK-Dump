// ScriptStruct /Script/FortniteGame.FortPickupRequestInfo
// Size: 0x38
struct FFortPickupRequestInfo
{
	struct FGuid SwapWithItem; // 0x0 (0x10)
	float FlyTime; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector Direction; // 0x18 (0x18)
	unsigned char bPlayPickupSound; // 0x30 (0x1)
	unsigned char bIsAutoPickup; // 0x30 (0x1)
	unsigned char bUseRequestedSwap; // 0x30 (0x1)
	unsigned char bTrySwapWithWeapon; // 0x30 (0x1)
	unsigned char bIsVisualOnlyPickup; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

