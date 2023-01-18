// Class /Script/FortniteGame.FortAnimNotifyState_ConditionalSwapEquippedCosmetic
// Size: 0x48
class UFortAnimNotifyState_ConditionalSwapEquippedCosmetic : public UAnimNotifyState
{
	bool bCheckBaseLoadout; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FFortCosmeticDependentSwapData> Swaps; // 0x38 (0x10)
};

