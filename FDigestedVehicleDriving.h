// ScriptStruct /Script/FortniteAI.DigestedVehicleDriving
// Size: 0xb8
struct FDigestedVehicleDriving
{
	bool bCanTurnInPlace; // 0x0 (0x1)
	bool bAvoidanceEnabled; // 0x1 (0x1)
	bool bPreventTurningWhenStopping; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FGameplayTagQuery AvoidanceTagQuery; // 0x8 (0x48)
	bool bReverseSwapLeftAndRight; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float MinimumForwardPIDValueForStopping; // 0x54 (0x4)
	float MinimumDistanceLeftForBoosting; // 0x58 (0x4)
	struct FVehicleDigestedPIDController ForwardPIDController; // 0x5c (0xc)
	struct FVehicleDigestedPIDController SteeringPIDController; // 0x68 (0xc)
	struct FVehicleDigestedAppendToPath* AppendToPath; // 0x74 (0x8)
	struct FVehicleDigestedTurnInPlace TurnInPlace; // 0x7c (0x18)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FGameplayTagContainer ModsTags; // 0x98 (0x20)
};

