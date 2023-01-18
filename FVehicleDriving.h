// ScriptStruct /Script/FortniteAI.VehicleDriving
// Size: 0x300
struct FVehicleDriving
{
	bool bCanTurnInPlace; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVehicleTurnInPlace TurnInPlace; // 0x8 (0xd0)
	struct FScalableFloat ReverseSwapLeftAndRight; // 0xd8 (0x28)
	struct FScalableFloat MinimumForwardPIDValueForStopping; // 0x100 (0x28)
	struct FScalableFloat MinimumDistanceLeftForBoosting; // 0x128 (0x28)
	struct FVehiclePIDController ForwardPIDController; // 0x150 (0x78)
	struct FVehiclePIDController SteeringPIDController; // 0x1c8 (0x78)
	bool bAvoidanceEnabled; // 0x240 (0x1)
	bool bPreventTurningWhenStopping; // 0x241 (0x1)
	unsigned char unreflected_242[0x6]; // 0x242 (0x6) 
	struct FGameplayTagQuery AvoidanceTagQuery; // 0x248 (0x48)
	struct FVehicleAppendToPath AppendToPath; // 0x290 (0x50)
	struct FGameplayTagContainer ModsTags; // 0x2e0 (0x20)
};

