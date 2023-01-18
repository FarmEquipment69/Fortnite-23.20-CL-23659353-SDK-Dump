// ScriptStruct /Script/FortniteGame.SharedRepMovement
// Size: 0x130
struct FSharedRepMovement
{
	struct FRepMovement RepMovement; // 0x0 (0x70)
	struct FBasedMovementInfo RepRelativeBasedMovement; // 0x70 (0x50)
	float RepTimeStamp; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	struct FRotator VehiclePrimaryTurretRotation; // 0xc8 (0x18)
	int8_t VehicleMountedWeaponSeatIndex; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	struct FVector_NetQuantize VehicleMountedWeaponCameraDirection; // 0xe8 (0x18)
	struct FVector_NetQuantize VehicleMountedWeaponCameraLocation; // 0x100 (0x18)
	uint32_t RemoteViewData32; // 0x118 (0x4)
	uint16_t AccelerationPack; // 0x11c (0x2)
	int8_t AccelerationZPack; // 0x11e (0x1)
	unsigned char RepMovementMode; // 0x11f (0x1)
	unsigned char JumpFlashCountPacked; // 0x120 (0x1)
	unsigned char LandingFlashCountPacked; // 0x121 (0x1)
	struct TEnumAsByte<EFortMovementStyle> CurrentMovementStyle; // 0x122 (0x1)
	bool bReplicatesBasedRelativeMovement; // 0x123 (0x1)
	bool bProxyIsJumpForceApplied; // 0x124 (0x1)
	bool bIsCrouched; // 0x125 (0x1)
	bool bIsSkydiving; // 0x126 (0x1)
	bool bIsParachuteOpen; // 0x127 (0x1)
	bool bIsSlopeSliding; // 0x128 (0x1)
	bool bIsProxySimulationTimedOut; // 0x129 (0x1)
	bool bIsTargeting; // 0x12a (0x1)
	bool bIsWaterJump; // 0x12b (0x1)
	bool bIsWaterSprintBoost; // 0x12c (0x1)
	bool bIsWaterSprintBoostPending; // 0x12d (0x1)
	unsigned char padding_12e[0x2]; // 0x12e (0x2)
};

