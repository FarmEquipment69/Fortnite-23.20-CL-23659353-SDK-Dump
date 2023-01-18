// Class /Script/FortniteGame.HoverDroneMovementComponent
// Size: 0x330
class UHoverDroneMovementComponent : public USpectatorPawnMovement
{
	unsigned char unreflected_170[0x84]; // 0x170 (0x84) 
	float RotAcceleration; // 0x1f4 (0x4)
	float RotDeceleration; // 0x1f8 (0x4)
	float MaxPitchRotSpeed; // 0x1fc (0x4)
	float MaxYawRotSpeed; // 0x200 (0x4)
	float TurboRotAcceleration; // 0x204 (0x4)
	float TurboRotDeceleration; // 0x208 (0x4)
	float TurboMaxPitchRotSpeed; // 0x20c (0x4)
	float TurboMaxYawRotSpeed; // 0x210 (0x4)
	unsigned char unreflected_214[0x4]; // 0x214 (0x4) 
	struct FVector2D TurboAccelerationRange; // 0x218 (0x10)
	struct FVector2D TurboAccelerationAltitudeRange; // 0x228 (0x10)
	float TurboDeceleration; // 0x238 (0x4)
	float TurboHoverThrustScale; // 0x23c (0x4)
	float FullAirFrictionVelocity; // 0x240 (0x4)
	unsigned char unreflected_244[0x4]; // 0x244 (0x4) 
	struct FVector CreativeModeBoundsScale; // 0x248 (0x18)
	unsigned char padding_260[0xd0]; // 0x260 (0xd0)

	/* Functions */

	// Function /Script/FortniteGame.HoverDroneMovementComponent.OnFollowedPlayerChanged (Underlying native function: OnFollowedPlayerChanged 0x8e5faa4)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Private)
};

