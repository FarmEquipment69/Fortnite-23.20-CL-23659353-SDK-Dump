// Class /Script/FortniteGame.HoverDronePawn
// Size: 0x440
class AHoverDronePawn : public AFortReplaySpectatorPawnBase
{
	unsigned char unreflected_400[0x28]; // 0x400 (0x28) 
	class UHoverDroneMovementComponent* HoverMoveComponent; // 0x428 (0x8)
	unsigned char padding_430[0x10]; // 0x430 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.HoverDronePawn.IsMaintainingConstantAltitude (Underlying native function: IsMaintainingConstantAltitude 0x8e5f950)
	bool IsMaintainingConstantAltitude(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HoverDronePawn.GetAltitude (Underlying native function: GetAltitude 0x8e5de44)
	float GetAltitude(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

