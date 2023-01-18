// ScriptStruct /Script/FortniteGame.FortSupplyDropMutatorData
// Size: 0x18
struct FFortSupplyDropMutatorData
{
	struct FName SupplyDropID; // 0x0 (0x4)
	bool bShouldCenterGroundCheckAtFoundLocation; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FFortItemDeliverySupplyDropMutatorData> ItemDeliveryMutatorPerSafeZonePhase; // 0x8 (0x10)
};

