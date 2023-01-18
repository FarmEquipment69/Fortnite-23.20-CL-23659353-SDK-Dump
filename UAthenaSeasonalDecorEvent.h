// Class /Script/FortniteGame.AthenaSeasonalDecorEvent
// Size: 0x478
class UAthenaSeasonalDecorEvent : public UFortEventItemDefinitionBase
{
	struct TWeakObjectPtr<class UClass> SupplyDropOverride; // 0x430 (0x28)
	struct TArray<struct FAthenaVehicleOverride> VehicleOverrides; // 0x458 (0x10)
	bool bForceBattleBusOverrideEvenIfCosmeticSlotted; // 0x468 (0x1)
	unsigned char unreflected_469[0x7]; // 0x469 (0x7) 
	class UAthenaBattleBusItemDefinition* BattleBusOverride; // 0x470 (0x8)
};

