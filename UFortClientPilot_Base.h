// Class /Script/FortniteGame.FortClientPilot_Base
// Size: 0x160
class UFortClientPilot_Base : public UClientPilotComponent
{
	unsigned char unreflected_28[0x90]; // 0x28 (0x90) 
	struct TArray<class UFortClientPilotArbitraryAction*> AvailableAAs; // 0xb8 (0x10)
	struct TArray<class UFortClientPilotArbitraryAction*> AAQueue; // 0xc8 (0x10)
	unsigned char unreflected_d8[0x2c]; // 0xd8 (0x2c) 
	struct TWeakObjectPtr<class AFortPawn> WeakEnemyTarget; // 0x104 (0x8)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	class AFortPickup* PickupTarget; // 0x110 (0x8)
	class ABuildingActor* BuildingTarget; // 0x118 (0x8)
	class ABuildingSMActor* EditTarget; // 0x120 (0x8)
	unsigned char padding_128[0x38]; // 0x128 (0x38)
};

