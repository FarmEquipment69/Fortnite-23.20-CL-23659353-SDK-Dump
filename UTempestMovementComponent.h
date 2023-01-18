// Class /Script/TempestRuntime.TempestMovementComponent
// Size: 0x1b0
class UTempestMovementComponent : public UGameFrameworkComponent
{
	struct FTempestReplicatedMovementData MovementData; // 0xa0 (0x50)
	struct FMulticastInlineDelegate OnTempestMovementStuck; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnTempestSafeZoneStateChanged; // 0x100 (0x10)
	enum ETempestMovementMode MovementMode; // 0x110 (0x1)
	unsigned char unreflected_111[0x7]; // 0x111 (0x7) 
	class UEnvQuery* FindNextMovementLocationQuery; // 0x118 (0x8)
	class AFortAthenaPatrolPath* MovementPath; // 0x120 (0x8)
	struct FScalableFloat MovementSpeed; // 0x128 (0x28)
	struct FScalableFloat RotationSpeed; // 0x150 (0x28)
	unsigned char bShouldIgnoreZMovement; // 0x178 (0x1)
	unsigned char bFloatOnWater; // 0x178 (0x1)
	unsigned char unreflected_179[0x7]; // 0x179 (0x7) 
	struct FScalableFloat WaterTraceZOffset; // 0x180 (0x28)
	unsigned char padding_1a8[0x8]; // 0x1a8 (0x8)

	/* Functions */

	// Function /Script/TempestRuntime.TempestMovementComponent.OnRep_MovementData (Underlying native function: OnRep_MovementData 0x76e74a8)
	void OnRepMovementData(); // (Final | Native | Private | Const)
};

